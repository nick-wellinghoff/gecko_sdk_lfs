/***************************************************************************//**
 * @file
 * @brief APIs and defines for the Network Steering plugin.
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

#include "af.h"
#include "network-steering.h"

/** @brief Complete
 *
 * This callback is fired when the Network Steering plugin is complete.
 *
 * @param status On success this will be set to EMBER_SUCCESS to indicate a
 * network was joined successfully. On failure this will be the status code of
 * the last join or scan attempt. Ver.: always
 * @param totalBeacons The total number of 802.15.4 beacons that were heard,
 * including beacons from different devices with the same PAN ID. Ver.: always
 * @param joinAttempts The number of join attempts that were made to get onto
 * an open Zigbee network. Ver.: always
 * @param finalState The finishing state of the network steering process. From
 * this, one is able to tell on which channel mask and with which key the
 * process was complete. Ver.: always
 */
WEAK(void emberAfPluginNetworkSteeringCompleteCallback(EmberStatus status,
                                                       uint8_t totalBeacons,
                                                       uint8_t joinAttempts,
                                                       uint8_t finalState))
{
  emberAfCorePrintln("Network Steering Completed: %p (0x%X)",
                     (status == EMBER_SUCCESS ? "Join Success" : "FAILED"),
                     status);
  emberAfCorePrintln("Finishing state: 0x%X", finalState);
  emberAfCorePrintln("Beacons heard: %d\nJoin Attempts: %d", totalBeacons, joinAttempts);
}

/** @brief Get Power For Radio Channel
 *
 * This callback is fired when the Network Steering plugin needs to set the
 * power level. The application has the ability to change the max power level
 * used for this particular channel.
 *
 * @param channel The channel that the plugin is inquiring about the power
 * level. Ver.: always
 */
WEAK(int8_t emberAfPluginNetworkSteeringGetPowerForRadioChannelCallback(uint8_t channel))
{
  return emberAfMaxPowerLevel();
}

/** @brief Get Distributed Key
 *
 * This callback is fired when the Network Steering plugin needs to set the distributed
 * key. The application set the distributed key from Zigbee Alliance thru this callback
 * or the network steering will use the default test key.
 *
 * @param pointer to the distributed key struct
 * @return true if the key is loaded successfully, otherwise false.
 * level. Ver.: always
 */
WEAK(bool emberAfPluginNetworkSteeringGetDistributedKeyCallback(EmberKeyData * key))
{
  return false;
}

/** @brief Get Node Type
 *
 * This callback allows the application to set the node type that the network
 * steering process will use in joining a network.
 *
 * @param state The current ::EmberAfPluginNetworkSteeringJoiningState.
 *
 * @return An ::EmberNodeType value that the network steering process will
 * try to join a network as.
 */
WEAK(EmberNodeType emberAfPluginNetworkSteeringGetNodeTypeCallback(EmberAfPluginNetworkSteeringJoiningState state))
{
  return ((sli_zigbee_af_current_zigbee_pro_network->nodeType == EMBER_COORDINATOR)
          ? EMBER_ROUTER
          : sli_zigbee_af_current_zigbee_pro_network->nodeType);
}
