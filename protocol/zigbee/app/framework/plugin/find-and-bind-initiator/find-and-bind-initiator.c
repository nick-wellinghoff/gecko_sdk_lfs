/***************************************************************************//**
 * @file
 * @brief Initiator routines for the Find and Bind Initiator plugin.
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#include "app/framework/include/af.h"

#include "app/framework/util/af-main.h" // emberAfGetBindingTableSize
#ifndef EMBER_SCRIPTED_TEST
#include "find-and-bind-initiator-config.h"
#endif

#include "zap-cluster-command-parser.h"

#include "find-and-bind-initiator.h"

//#define EM_AF_PLUGIN_FIND_AND_BIND_INITIATOR_DEBUG
#ifdef  EM_AF_PLUGIN_FIND_AND_BIND_INITIATOR_DEBUG
  #ifdef EMBER_SCRIPTED_TEST
    #define debugPrintln(...) simPrint(__VA_ARGS__)
  #else
    #define debugPrintln(...) emberAfCorePrintln(__VA_ARGS__)
  #endif
#else
  #define debugPrintln(...)
#endif /* EM_AF_PLUGIN_FIND_AND_BIND_DEBUG */

#ifdef EMBER_SCRIPTED_TEST
  #include "find-and-bind-test-configuration.h"
#endif

// -----------------------------------------------------------------------------
// Constants

#define INVALID_TARGET_RESPONSES_INDEX EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_TARGET_RESPONSES_COUNT

#ifdef ZCL_GROUPS_CLUSTER_MAXIMUM_NAME_LENGTH
  #define GROUPS_CLUSTER_MAXIMUM_NAME_LENGTH ZCL_GROUPS_CLUSTER_MAXIMUM_NAME_LENGTH
#else
  #define GROUPS_CLUSTER_MAXIMUM_NAME_LENGTH (16)
#endif

#define GROUPS_CLUSTER_INVALID_GROUP_ID (0xFFFF)

// -----------------------------------------------------------------------------
// Globals

static sl_zigbee_event_t checkTargetResponsesEvent;

typedef struct {
  EmberNodeId nodeId;
  uint8_t endpoint;
} FindAndBindTargetInfo;

static FindAndBindTargetInfo targetResponses[EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_TARGET_RESPONSES_COUNT];
static uint8_t targetResponsesReceived = 0;
static uint8_t currentTargetResponsesIndex = INVALID_TARGET_RESPONSES_INDEX;
static EmberEUI64 currentTargetResponseIeeeAddr;

static uint8_t initiatorEndpoint = EMBER_AF_INVALID_ENDPOINT;

// -----------------------------------------------------------------------------
// Private API Prototypes

/* state */
static uint8_t state = 0;
enum {
  STATE_NONE    = 0x00,
  FIND_TARGETS  = 0x01,
  IEEE_REQUEST  = 0x02,
  DESCR_REQUEST = 0x03,
};

/* state machine */
static EmberStatus broadcastIdentifyQuery(void);

static EmberStatus sendIeeeAddrRequest(void);
static void handleIeeeAddrResponse(const EmberAfServiceDiscoveryResult *result);

static EmberStatus sendSimpleDescriptorRequest(void);
static void handleSimpleDescriptorResponse(const EmberAfServiceDiscoveryResult *result);
static void processClusterList(bool clientList,
                               uint8_t clusterCount,
                               const EmberAfClusterId *clusters,
                               EmberStatus *status);

static EmberStatus writeSimpleDescriptorResponse(EmberBindingTableEntry *entry,
                                                 uint8_t *groupName);

static void cleanupAndStop(EmberStatus status);

/* target responses */
// get the next index of a response
static void targetResponsesGetNext();

#define targetInfosAreEqual(targetInfo1, targetInfo2) \
  ((targetInfo1).nodeId == (targetInfo2).nodeId       \
   && (targetInfo1).endpoint == (targetInfo2).endpoint)

#define currentTargetInfoIsNull() \
  (currentTargetResponsesIndex == INVALID_TARGET_RESPONSES_INDEX)

#define currentTargetInfoNodeId \
  (targetResponses[currentTargetResponsesIndex].nodeId)
#define currentTargetInfoEndpoint \
  (targetResponses[currentTargetResponsesIndex].endpoint)
#define currentTargetInfoIeeeAddr \
  (currentTargetResponseIeeeAddr)

// -----------------------------------------------------------------------------
// Public API

EmberStatus emberAfPluginFindAndBindInitiatorStart(uint8_t endpoint)
{
  EmberStatus status;

  initiatorEndpoint = endpoint;

  state = STATE_NONE;
  targetResponsesReceived = 0;

  status = broadcastIdentifyQuery();
  if (status == EMBER_SUCCESS) {
    sl_zigbee_event_set_delay_ms(&checkTargetResponsesEvent,
                                 EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_TARGET_RESPONSES_DELAY_MS);
    state = FIND_TARGETS;
  } else {
    cleanupAndStop(status);
  }

  return status;
}

static void checkTargetResponsesEventHandler(sl_zigbee_event_t * event)
{
  EmberStatus status = EMBER_SUCCESS;
  bool finished = false;

  sl_zigbee_event_set_inactive(&checkTargetResponsesEvent);

  switch (state) {
    case FIND_TARGETS:
      if (targetResponsesReceived) {
        state = IEEE_REQUEST;
        targetResponsesGetNext();
        if (currentTargetInfoIsNull()) {
          // If currentTargetInfo is NULL, then the set is "empty",
          // so we are done!
          finished = true;
          status = EMBER_SUCCESS;
          break;
        }
      } else {
        // If we didn't get any responses to our query, die.
        status = EMBER_ERR_FATAL;
        break;
      }

    // FALLTHROUGH

    case IEEE_REQUEST:
      status = sendIeeeAddrRequest();
      state = DESCR_REQUEST;
      break;

    case DESCR_REQUEST:
      status = sendSimpleDescriptorRequest();
      state = FIND_TARGETS;
      break;

    case STATE_NONE:
    default:
      debugPrintln("%p: %p: 0x%X",
                   EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_PLUGIN_NAME,
                   "Bad state",
                   state);
      status = EMBER_BAD_ARGUMENT;
  }

  if (status != EMBER_SUCCESS || finished) {
    cleanupAndStop(status);
  }
}

bool emberAfIdentifyClusterIdentifyQueryResponseCallback(EmberAfClusterCommand *cmd)
{
  (void)cmd;

  EmberAfClusterCommand *currentCommand;
  FindAndBindTargetInfo targetInfo;
  uint8_t i;

// As of now, we don't use the timeout field in the command so no point to do
// any parsing at all.
#if 0
  sl_zcl_identify_cluster_identify_query_response_command_t cmd_data;
  if (zcl_decode_identify_cluster_identify_query_response_command(cmd, &cmd_data)
      != EMBER_ZCL_STATUS_SUCCESS) {
    return false;
  }
#endif

  currentCommand = emberAfCurrentCommand();

  if (currentCommand->apsFrame->destinationEndpoint == initiatorEndpoint) {
    targetInfo.nodeId   = currentCommand->source;
    targetInfo.endpoint = currentCommand->apsFrame->sourceEndpoint;
    // If you haven't added the response yet, then add it now.
    for (i = 0;
         (i < targetResponsesReceived
          && !targetInfosAreEqual(targetInfo, targetResponses[i]));
         i++) {
      ; // pass
    }
    if (i < EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_TARGET_RESPONSES_COUNT
        && i == targetResponsesReceived) {
      targetResponses[i].nodeId = currentCommand->source;
      targetResponses[i].endpoint = currentCommand->apsFrame->sourceEndpoint;
      targetResponsesReceived++;
    }
  }

  emberAfSendImmediateDefaultResponse(EMBER_ZCL_STATUS_SUCCESS);

  return true;
}

void sli_zigbee_af_find_and_bind_initiator_init_callback(uint8_t init_level)
{
  (void)init_level;

  sl_zigbee_event_init(&checkTargetResponsesEvent,
                       checkTargetResponsesEventHandler);
}

// -----------------------------------------------------------------------------
// Target Responses Set (Private) API

static void targetResponsesGetNext()
{
  // If the current index if invalid, then set it back to 0. Else, increment it.
  if (currentTargetResponsesIndex == INVALID_TARGET_RESPONSES_INDEX) {
    currentTargetResponsesIndex = 0;
  } else {
    currentTargetResponsesIndex++;
  }

  // If you have looked at all the responses, set the responses index
  // to invalid.
  if (currentTargetResponsesIndex == targetResponsesReceived) {
    currentTargetResponsesIndex = INVALID_TARGET_RESPONSES_INDEX;
  }
}

// -----------------------------------------------------------------------------
// Private API

static EmberStatus broadcastIdentifyQuery(void)
{
  EmberStatus status;

  emberAfSetCommandEndpoints(initiatorEndpoint, EMBER_BROADCAST_ENDPOINT);
  emberAfFillCommandIdentifyClusterIdentifyQuery();

  status // BDB wants 0xFFFF
    = emberAfSendCommandBroadcast(EMBER_SLEEPY_BROADCAST_ADDRESS);

  debugPrintln("%p: %p: 0x%X",
               EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_PLUGIN_NAME,
               "Broadcast",
               status);

  return status;
}

static EmberStatus sendIeeeAddrRequest(void)
{
  EmberStatus status;

  if (currentTargetInfoIsNull()) {
    return EMBER_BAD_ARGUMENT;
  }

  status = emberAfFindIeeeAddress(currentTargetInfoNodeId,
                                  handleIeeeAddrResponse);

  debugPrintln("%p: %p: 0x%X",
               EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_PLUGIN_NAME,
               "Ieee request",
               status);

  return status;
}

static void handleIeeeAddrResponse(const EmberAfServiceDiscoveryResult *result)
{
  debugPrintln("%p: %p: 0x%X",
               EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_PLUGIN_NAME,
               "Ieee response",
               result->status);

  if (currentTargetInfoIsNull()
      || (result->status
          != EMBER_AF_UNICAST_SERVICE_DISCOVERY_COMPLETE_WITH_RESPONSE)) {
    cleanupAndStop(EMBER_ERR_FATAL);
    return;
  }

  MEMCOPY(currentTargetInfoIeeeAddr,
          result->responseData,
          EUI64_SIZE);

  sl_zigbee_event_set_active(&checkTargetResponsesEvent);
}

static EmberStatus sendSimpleDescriptorRequest()
{
  EmberStatus status;

  status = emberAfFindClustersByDeviceAndEndpoint(currentTargetInfoNodeId,
                                                  currentTargetInfoEndpoint,
                                                  handleSimpleDescriptorResponse);

  debugPrintln("%p: %p: 0x%X",
               EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_PLUGIN_NAME,
               "Descriptor request",
               status);

  return status;
}

static void handleSimpleDescriptorResponse(const EmberAfServiceDiscoveryResult *result)
{
  EmberStatus status = EMBER_SUCCESS;
  EmberAfClusterList *clusterList = (EmberAfClusterList *)(result->responseData);

  debugPrintln("%p: %p: 0x%X",
               EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_PLUGIN_NAME,
               "Descriptor response",
               result->status);

  if (currentTargetInfoIsNull()
      || (result->status
          != EMBER_AF_UNICAST_SERVICE_DISCOVERY_COMPLETE_WITH_RESPONSE)
      || !clusterList) {
    cleanupAndStop(EMBER_ERR_FATAL);
    return;
  }

  processClusterList(false, // server list
                     clusterList->inClusterCount,
                     clusterList->inClusterList,
                     &status);
  processClusterList(true,  // client list
                     clusterList->outClusterCount,
                     clusterList->outClusterList,
                     &status);

  sl_zigbee_event_set_active(&checkTargetResponsesEvent);
}

static void processClusterList(bool clientList,
                               uint8_t clusterCount,
                               const EmberAfClusterId *clusters,
                               EmberStatus *status)
{
  uint8_t i;
  EmberBindingTableEntry bindingEntry;
  uint8_t groupName[GROUPS_CLUSTER_MAXIMUM_NAME_LENGTH + 1];

  MEMSET(groupName, 0x00, sizeof(groupName));

  for (i = 0; (*status != EMBER_TABLE_FULL) && (i < clusterCount); i++) {
    bindingEntry.type = EMBER_UNICAST_BINDING;
    bindingEntry.local = initiatorEndpoint;
    bindingEntry.clusterId = clusters[i];
    bindingEntry.remote = currentTargetInfoEndpoint;
    MEMMOVE(bindingEntry.identifier, currentTargetInfoIeeeAddr, EUI64_SIZE);
    bindingEntry.networkIndex = emberAfNetworkIndexFromEndpoint(initiatorEndpoint);
    if (((clientList && emberAfContainsServer(initiatorEndpoint, clusters[i]))
         || (!clientList && emberAfContainsClient(initiatorEndpoint, clusters[i])))
        && emberAfPluginFindAndBindInitiatorBindTargetCallback(currentTargetInfoNodeId,
                                                               &bindingEntry,
                                                               groupName)) {
      *status = writeSimpleDescriptorResponse(&bindingEntry, groupName);
      debugPrintln("%p: write cluster 0x%2X: 0x%X",
                   EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_PLUGIN_NAME,
                   clusters[i],
                   *status);
    }
  }
}

static EmberStatus writeSimpleDescriptorResponse(EmberBindingTableEntry *newEntry,
                                                 uint8_t *groupName)
{
  EmberStatus status = EMBER_TABLE_FULL;
  EmberBindingTableEntry oldEntry;
  uint8_t i, goodIndex, bindingTableSize;

  bindingTableSize = emberAfGetBindingTableSize();
  for (i = 0, goodIndex = bindingTableSize; i < bindingTableSize; i++) {
    if (emberGetBinding(i, &oldEntry) == EMBER_SUCCESS) {
      if (oldEntry.type == EMBER_UNUSED_BINDING) {
        if (goodIndex == bindingTableSize) {
          // This is a good index to write a binding.
          goodIndex = i;
        }
      } else {
        // Have we already written this binding?
        if (oldEntry.clusterId == newEntry->clusterId
            && oldEntry.remote == newEntry->remote
            && oldEntry.type == newEntry->type
            && !MEMCOMPARE(oldEntry.identifier,
                           newEntry->identifier,
                           (oldEntry.type == EMBER_MULTICAST_BINDING
                            ? 2 // group id
                            : EUI64_SIZE))) {
          status = EMBER_SUCCESS;
        }
      }
    }
  }

  // If we found a good index where we can write a binding...
  if (goodIndex < bindingTableSize) {
    // ...then if the application wanted us to write a multicast binding, and
    // we haven't sent one to this target yet, then we do so now...
    if (newEntry->type == EMBER_MULTICAST_BINDING) {
      uint16_t groupId
        = HIGH_LOW_TO_INT(newEntry->identifier[1], newEntry->identifier[0]);
      emberAfFillCommandGroupsClusterAddGroup(groupId, groupName);
      emberAfSetCommandEndpoints(initiatorEndpoint, currentTargetInfoEndpoint);
      emberAfSendCommandUnicast(EMBER_OUTGOING_DIRECT, currentTargetInfoNodeId);
    }

    // ...and write the binding for this target if we have not done so already.
    if (status != EMBER_SUCCESS) {
      status = emberSetBinding(goodIndex, newEntry);
      emberSetBindingRemoteNodeId(goodIndex, currentTargetInfoNodeId);
    }
  }

  return status;
}

static void cleanupAndStop(EmberStatus status)
{
  debugPrintln("%p: Stop. Status: 0x%X. State: 0x%X",
               EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_PLUGIN_NAME,
               status,
               state);

  emberAfPluginFindAndBindInitiatorCompleteCallback(status);
}

uint32_t emberAfIdentifyClusterClientCommandParse(sl_service_opcode_t opcode,
                                                  sl_service_function_context_t *context)
{
  (void)opcode;
  bool wasHandled = false;

  EmberAfClusterCommand *cmd = (EmberAfClusterCommand *)context->data;
  if (!cmd->mfgSpecific && cmd->commandId == ZCL_IDENTIFY_QUERY_RESPONSE_COMMAND_ID) {
    wasHandled = emberAfIdentifyClusterIdentifyQueryResponseCallback(cmd);
  }

  return ((wasHandled)
          ? EMBER_ZCL_STATUS_SUCCESS
          : EMBER_ZCL_STATUS_UNSUP_COMMAND);
}
