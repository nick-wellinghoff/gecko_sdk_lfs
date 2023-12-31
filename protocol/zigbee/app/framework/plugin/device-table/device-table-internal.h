/***************************************************************************//**
 * @file
 * @brief Internal APIs and defines for the Device Table plugin.
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

#ifndef SILABS_DEVICE_TABLE_INTERNAL_H
#define SILABS_DEVICE_TABLE_INTERNAL_H

uint8_t sli_zigbee_af_device_table_get_first_endpoint_from_index(uint16_t index);

// Internal APIs for printing device information to the CLI
void sli_zigbee_af_device_table_save(void);
void sli_zigbee_af_device_table_load(void);
void sli_zigbee_af_device_table_print_eui64(uint8_t *eui64);
void sli_zigbee_af_device_table_print_buffer(uint8_t *buffer, uint16_t bufLen);

// Internal APIs for route repair
void sli_zigbee_af_device_table_initiate_route_repair(EmberNodeId nodeId);
bool sli_zigbee_af_device_table_should_device_leave(EmberNodeId nodeId);

// Internal APIs for writing CIE address to new security sensor
void sli_zigbee_af_device_table_send_cie_address_write(EmberNodeId nodeId, uint8_t endpoint);

uint16_t sli_zigbee_af_find_free_device_table_index(void);
void sli_zigbee_af_device_table_init(void);
void sli_zigbee_af_device_table_update_node_idInEndpoints(EmberNodeId oldId, EmberNodeId newId);

void sli_zigbee_af_device_table_delete_entry(uint16_t index);

// Callbacks generated by device-table.
void emberAfPluginDeviceTableStateChangeCallback(EmberNodeId nodeId, uint8_t state);
void emberAfPluginDeviceTableNewDeviceCallback(EmberEUI64 eui64);
void emberAfPluginDeviceTableRejoinDeviceCallback(EmberEUI64 newNodeEui64);
void emberAfPluginDeviceTableDeviceLeftCallback(EmberEUI64 newNodeEui64);
void emberAfPluginDeviceTableClearedCallback(void);

// new endpoint APIs
void sli_zigbee_af_device_table_copy_device_table_entry(uint16_t fromIndex, uint16_t toIndex);
uint8_t sli_zigbee_af_device_table_number_of_endpoints_from_index(uint16_t index);
EmberAfStatus sli_zigbee_af_device_table_add_new_endpoint(uint16_t index, uint8_t newEndpoint);
uint16_t sli_zigbee_af_device_table_find_next_endpoint(uint16_t index);
void sli_zigbee_af_device_table_update_node_id(uint16_t currentNodeId, uint16_t newNodeId);
uint16_t sli_zigbee_af_device_table_find_index_node_id_endpoint(uint16_t nodeId, uint8_t endpoint);
void sli_zigbee_af_device_table_update_device_state(uint16_t index, uint8_t newState);
uint16_t sli_zigbee_af_device_table_find_free_device_table_index(void);
uint16_t sli_zigbee_af_device_table_find_first_endpoint_node_id(uint16_t nodeId);
uint16_t sli_zigbee_af_device_table_find_first_endpoint_ieee(EmberEUI64 eui64);

#define DEVICE_TABLE_UNKNOWN_ENDPOINT 0

#endif //__DEVICE_TABLE_H
