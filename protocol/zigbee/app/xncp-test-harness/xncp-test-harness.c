/***************************************************************************//**
 * @file
 * @brief This is code for a test harness running on a host connected to an NCP.
 *   It allows the host to control non-standard behavior on the NCP to test that a
 *   DUT device is behaving in a compliant manner.  Put another way, it lets the host
 *   do wonky stuff that is normally only accessible through Ember-internal 'em' calls
 *   when on the SOC platform.
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

#include PLATFORM_HEADER

#include "stack/include/ember.h"
#include "app/util/ezsp/ezsp-frame-utilities.h"
#include "app/xncp-test-harness/xncp-test-harness.h"

#include "hal/micro/token.h"

// -----------------------------------------------------------------------------
// External declarations

EmberStatus emberAfPluginXncpSendCustomEzspMessage(uint8_t length, uint8_t *payload);
void sli_zigbee_reset_aps_frame_counter(void);
void sli_zigbee_test_harness_advance_aps_frame_counter(void);

// -----------------------------------------------------------------------------

void emberAfPluginXncpGetXncpInformation(uint16_t *manufacturerId,
                                         uint16_t *versionNumber)
{
  *versionNumber = EMBER_XNCP_TEST_HARNESS_VERSION_NUMBER;
  *manufacturerId = EMBER_MANUFACTURER_ID;
}

// -----------------------------------------------------------------------------
// Init

void emberAfMainInitCallback(void)
{
}

// -----------------------------------------------------------------------------
// Handlers and callbacks
bool emberAfPluginXncpPermitNcpToHostFrameCallback(uint16_t frameId,
                                                   uint8_t payloadLength,
                                                   uint8_t *payload)
{
  return true;
}

bool emberAfPluginXncpPermitHostToNcpFrameCallback(uint16_t frameId,
                                                   uint8_t payloadLength,
                                                   uint8_t *payload)
{
  return true;
}

// The returned status is always the first byte of the EZSP response.
EmberStatus emberAfPluginXncpIncomingCustomFrameCallback(uint8_t messageLength,
                                                         uint8_t *messagePayload,
                                                         uint8_t *replyPayloadLength,
                                                         uint8_t *replyPayload)
{
  // In the sample custom EZSP protocol, the command ID is always the first byte
  // of a custom EZSP command.
  uint8_t commandId = messagePayload[0];

  switch (commandId) {
    case EMBER_XNCP_TEST_HARNESS_COMMAND_RESET_APS_FRAME_COUNTER: {
      sli_zigbee_reset_aps_frame_counter();
      return EMBER_SUCCESS;
    }
    case EMBER_XNCP_TEST_HARNESS_COMMAND_ADVANCE_APS_FRAME_COUNTER: {
      sli_zigbee_test_harness_advance_aps_frame_counter();
      return EMBER_SUCCESS;
    }
    default:
      break;
  }

  return EMBER_INVALID_CALL;
}

bool emberAfPluginXncpIncomingMessageCallback(EmberIncomingMessageType type,
                                              EmberApsFrame *apsFrame,
                                              EmberMessageBuffer message)
{
  return false;
}
