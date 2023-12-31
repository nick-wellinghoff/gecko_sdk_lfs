/***************************************************************************//**
 * @file
 * @brief APIs and defines for the Price Client plugin.
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

/**
 * @defgroup price-client Price Client
 * @ingroup component cluster
 * @brief API and Callbacks for the Price Cluster Client Component
 *
 * This component provides an implementation of a Price client. It simply stores
 * the prices received over-the-air. This component requires extending to
 * act on the price changes.
 *
 */

/**
 * @addtogroup price-client
 * @{
 */

#ifndef SILABS_PRICE_CLIENT_H
#define SILABS_PRICE_CLIENT_H

#include "price-client-config.h"

#ifndef EMBER_AF_PLUGIN_PRICE_CLIENT_TABLE_SIZE
#define EMBER_AF_PLUGIN_PRICE_CLIENT_TABLE_SIZE 2
#endif //EMBER_AF_PLUGIN_PRICE_CLIENT_TABLE_SIZE

#define ZCL_PRICE_CLUSTER_PRICE_RATIO_NOT_USED                   0xFF
#define ZCL_PRICE_CLUSTER_GENERATION_PRICE_NOT_USED              0xFFFFFFFFUL
#define ZCL_PRICE_CLUSTER_GENERATION_PRICE_RATIO_NOT_USED        0xFF
#define ZCL_PRICE_CLUSTER_ALTERNATE_COST_DELIVERED_NOT_USED      0xFFFFFFFFUL
#define ZCL_PRICE_CLUSTER_ALTERNATE_COST_UNIT_NOT_USED           0xFF
#define ZCL_PRICE_CLUSTER_ALTERNATE_COST_TRAILING_DIGIT_NOT_USED 0xFF
#define ZCL_PRICE_CLUSTER_NUMBER_OF_BLOCK_THRESHOLDS_NOT_USED    0xFF
#define ZCL_PRICE_CLUSTER_PRICE_CONTROL_NOT_USED                 0x00

// Price Client Command Common Structure - common elements used in most price commands
// ==========================================================
#define UNSPECIFIED_PROVIDER_ID  0xFFFFFFFF   // Used to initialize provider ID for commands that don't support it.
#define UNSPECIFIED_DURATION  0xFFFFFFFF

typedef struct {
  uint32_t providerId;      // Unique identifier for the commodity provider.
  uint32_t issuerEventId;   // Unique identifier for the transaction, generated by the commodity provider.
  uint32_t startTime;       // The UTC time when the event should take effect.
  uint32_t durationSec;     // Duration of the event, in seconds.
  bool valid;          // Specifies whether the data at this index is valid or not.
} EmberAfPriceClientCommonInfo;

/*   FOR PASTING INTO NEW CODE:
   info.___.commonInfos[].providerId = UNSPECIFIED_PROVIDER_ID;
   info.___.commonInfos[].issuerEventId =
   info.___.commonInfos[].startTime =
   info.___.commonInfos[].durationSec = UNSPECIFIED_DURATION;
   info.___.commonInfos[].valid = true;

 */

// Price Client Command Specific Structures
// ==========================================================

typedef struct {
  uint32_t billingPeriodStartTime;
  uint32_t billingPeriodDuration;
  uint8_t  billingPeriodDurationType;
  uint8_t  tariffType;
} EmberAfPriceClientBillingPeriod;

typedef struct {
  uint32_t blockPeriodStartTime;  // Raw start time, before adjustments made by blockPeriodDurationType.
  uint32_t blockPeriodDuration;   // Raw duration, units specified by blockPeriodDurationType.
  uint8_t blockPeriodControl;
  uint8_t blockPeriodDurationType;
  uint8_t tariffType;
  uint8_t tariffResolutionPeriod;
} EmberAfPriceClientBlockPeriod;

typedef struct {
  uint32_t issuerTariffId;
  uint8_t  subPayloadControl;
  // following array's  max value was set to
  // EMBER_AF_PLUGIN_PRICE_CLIENT_MAX_NUMBER_BLOCK_THRESHOLDS
  // this did not seem to be correct, so I changed it
  uint8_t  tierNumberOfBlockThresholds[EMBER_AF_PLUGIN_PRICE_CLIENT_MAX_NUMBER_TIERS];
  uint8_t  blockThreshold[EMBER_AF_PLUGIN_PRICE_CLIENT_MAX_NUMBER_TIERS + 1][6 * (EMBER_AF_PLUGIN_PRICE_CLIENT_MAX_NUMBER_BLOCK_THRESHOLDS + 1)];
} EmberAfPriceClientBlockThreshold;

typedef struct {
  uint32_t calorificValue;
  uint8_t  calorificValueUnit;
  uint8_t  calorificValueTrailingDigit;
} EmberAfPriceClientCalorificValue;

typedef struct {
  uint8_t tariffType;
  uint32_t cO2Value;
  uint8_t  cO2ValueUnit;
  uint8_t  cO2ValueTrailingDigit;
} EmberAfPriceClientCo2Value;

typedef struct {
  uint32_t conversionFactor;
  uint8_t  conversionFactorTrailingDigit;
} EmberAfPriceClientConversionFactor;

typedef struct {
  uint16_t durationInMinutes;
  uint8_t  tariffType;
  uint8_t  cppPriceTier;
  uint8_t  cppAuth;
} EmberAfPriceClientCppEvent;

#define EMBER_AF_PLUGIN_PRICE_CLUSTER_MAX_CREDIT_PAYMENT_REF_LENGTH 20
typedef struct {
  uint32_t creditPaymentDueDate;
  uint32_t creditPaymentOverDueAmount;
  uint8_t  creditPaymentStatus;
  uint32_t creditPayment;
  uint32_t creditPaymentDate;
  uint8_t  creditPaymentRef[EMBER_AF_PLUGIN_PRICE_CLUSTER_MAX_CREDIT_PAYMENT_REF_LENGTH + 1];
} EmberAfPriceClientCreditPayment;

typedef struct {
  uint32_t conversionFactor;
  uint32_t currencyChangeControlFlags;
  uint16_t newCurrency;
  uint8_t  conversionFactorTrailingDigit;
} EmberAfPriceClientCurrencyConversion;

typedef struct {
  uint32_t issuerTariffId;
  uint8_t  numberOfLabels;
  uint8_t  tierIds[EMBER_AF_PLUGIN_PRICE_CLIENT_MAX_TIERS_PER_TARIFF];
  uint8_t  tierLabels[EMBER_AF_PLUGIN_PRICE_CLIENT_MAX_TIERS_PER_TARIFF][13];
} EmberAfPriceClientTierLabels;

// Price Client Command Tables
// ==========================================================

typedef struct {
  EmberAfPriceClientCommonInfo    commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_BILLING_PERIOD_TABLE_SIZE];
  EmberAfPriceClientBillingPeriod billingPeriod[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_BILLING_PERIOD_TABLE_SIZE];
} EmberAfPriceClientBillingPeriodTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_BLOCK_PERIOD_TABLE_SIZE];
  EmberAfPriceClientBlockPeriod blockPeriod[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_BLOCK_PERIOD_TABLE_SIZE];
} EmberAfPriceClientBlockPeriodTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_BLOCK_THRESHOLD_TABLE_SIZE];
  EmberAfPriceClientBlockThreshold blockThreshold[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_BLOCK_THRESHOLD_TABLE_SIZE];
} EmberAfPriceClientBlockThresholdTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CALORIFIC_VALUE_TABLE_SIZE];
  EmberAfPriceClientCalorificValue calorificValue[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CALORIFIC_VALUE_TABLE_SIZE];
} EmberAfPriceClientCalorificValueTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CO2_TABLE_SIZE];
  EmberAfPriceClientCo2Value   co2Value[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CO2_TABLE_SIZE];
} EmberAfPriceClientCo2ValueTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CONVERSION_FACTOR_TABLE_SIZE];
  EmberAfPriceClientConversionFactor conversionFactor[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CONVERSION_FACTOR_TABLE_SIZE];
} EmberAfPriceClientConversionFactorTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT];
  EmberAfPriceClientCppEvent   cppEvent[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT];
} EmberAfPriceClientCppEventTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CREDIT_PAYMENT_TABLE_SIZE];
  EmberAfPriceClientCreditPayment creditPayment[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CREDIT_PAYMENT_TABLE_SIZE];
} EmberAfPriceClientCreditPaymentTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CURRENCY_CONVERSION_TABLE_SIZE];
  EmberAfPriceClientCurrencyConversion currencyConversion[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_CURRENCY_CONVERSION_TABLE_SIZE];
} EmberAfPriceClientCurrencyConversionTable;

typedef struct {
  EmberAfPriceClientCommonInfo commonInfos[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_TIER_LABELS_TABLE_SIZE];
  EmberAfPriceClientTierLabels tierLabels[EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT][EMBER_AF_PLUGIN_PRICE_CLIENT_TIER_LABELS_TABLE_SIZE];
} EmberAfPriceClientTierLabelsTable;

// Singular Price Client Structure for storing pricing information
// ==========================================================
typedef struct {
  EmberAfPriceClientBillingPeriodTable      billingPeriodTable;
  EmberAfPriceClientBlockPeriodTable        blockPeriodTable;
  EmberAfPriceClientBlockThresholdTable     blockThresholdTable;
  EmberAfPriceClientCalorificValueTable     calorificValueTable;
  EmberAfPriceClientCo2ValueTable           co2ValueTable;
  EmberAfPriceClientConversionFactorTable   conversionFactorTable;
  EmberAfPriceClientCppEventTable           cppEventTable;
  EmberAfPriceClientCreditPaymentTable      creditPaymentTable;
  EmberAfPriceClientCurrencyConversionTable currencyConversionTable;
  EmberAfPriceClientTierLabelsTable         tierLabelsTable;
} EmberAfPriceClientInfo;

/**
 * @name API
 * @{
 */

/**
 * @brief Initialize the consolidated bills table.
 *
 * @param endpoint The relevant endpoint.
 *
 **/
void emberAfPriceInitConsolidatedBillsTable(uint8_t endpoint);

/**
 * @brief Return the index of the currently active CO2 entry, or 0xFF
 * if no active entry can be found.
 *
 * @param endpoint The relevant endpoint.
 * @return The index of the active CO2 entry.
 *
 **/
uint8_t emberAfPriceClusterGetActiveCo2ValueIndex(uint8_t endpoint);

/**
 * @brief Print information about the CPP event.
 *
 * @param endpoint THe relevant endpoint.
 *
 **/
void emberAfPricePrintCppEvent(uint8_t endpoint);

/**
 * @brief Return the currency conversion table index with a matching eventId.
 *
 * @param endpoint The relevant endpoint.
 * @param issuerEventId The eventId that should be searched for in the currency conversion table.
 * @return The index with a valid matching event ID.
 *
 **/
uint8_t emberAfPriceClusterCurrencyConversionTableGetIndexByEventId(uint8_t endpoint, uint32_t issuerEventId);

/**
 * @brief Return the index of the currently active currency conversion entry,
 * or 0xFF if no active entry can be found.
 *
 * @param endpoint The relevant endpoint.
 * @return The index of the active currency conversion entry.
 *
 **/
uint8_t emberAfPriceClusterGetActiveCurrencyIndex(uint8_t endpoint);

/** @} */ // end of name API

//void emberAfPriceClusterClientInitCallback(uint8_t endpoint);

void sli_zigbee_af_price_client_print_info(uint8_t endpoint);
void sli_zigbee_af_price_client_print_by_event_id(uint8_t endpoint, uint32_t issuerEventId);
void sli_zigbee_af_price_clear_price_table(uint8_t endpoint);

/**
 * @brief Return the block period table index with a matching eventId.
 *
 * @param endpoint The relevant endpoint.
 * @param issuerEventId The eventId that should be searched for in the block period table.
 * @return The index with a valid matching event ID.
 *
 **/
uint8_t sli_zigbee_af_price_get_block_period_table_index_by_event_id(uint8_t endpoint, uint32_t issuerEventId);

/**
 * @brief Print the information at the specified index of the block period table.
 *
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_block_period_table_index(uint8_t endpoint, uint8_t index);

/**
 * @brief Return the conversion factor table index with a matching eventId.
 *
 * @param endpoint The relevant endpoint.
 * @param issuerEventId The eventId that should be searched for in the conversion factor table.
 * @return The index with a valid matching event ID.
 *
 **/
uint8_t sli_zigbee_af_price_get_conversion_factor_index_by_event_id(uint8_t endpoint, uint32_t issuerEventId);

/**
 * @brief Print the information at the specified index of the conversion factor table.
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_conversion_factor_entry_index(uint8_t endpoint, uint8_t index);

/**
 * @brief Return the calorific value table index with a matching eventId.
 *
 * @param endpoint The relevant endpoint.
 * @param issuerEventId The eventId that should be searched for in the calorific value table.
 * @return The index with a valid matching event ID.
 *
 **/
uint8_t sli_zigbee_af_price_get_calorific_value_index_by_event_id(uint8_t endpoint, uint32_t issuerEventId);

/**
 * @brief Print the information at the specified index of the calorific value table.
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_calorific_value_entry_index(uint8_t endpoint, uint8_t index);

/**
 * @brief Return the index of the currently active tier label table entry,
 * or 0xFF if no active entry can be found.
 *
 * @param endpoint The relevant endpoint.
 * @return The index of the active tier label table entry.
 *
 **/
uint8_t sli_zigbee_af_price_get_active_tier_label_table_index_by_tariff_id(uint8_t endpoint, uint32_t tariffId);

/**
 * @brief Print the information at the specified index of the tier label table.
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_tier_label_table_entry_index(uint8_t endpoint, uint8_t index);

/**
 * @brief Print the information at the specified index of the CO2 value table.
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_co2_value_table_print_index(uint8_t endpoint, uint8_t index);

/**
 * @brief Return the consolidated bill table index with a matching eventId.
 *
 * @param endpoint The relevant endpoint.
 * @param issuerEventId The eventId that should be searched for in the consolidated bill table.
 * @return The index with a valid matching event ID.
 *
 **/
uint8_t sli_zigbee_af_price_consolidated_bill_table_get_index_with_event_id(uint8_t endpoint, uint32_t issuerEventId);

/**
 * @brief Return the index of the active consolidated bill table.
 *
 * @param endpoint The relevant endpoint.
 * @return The index of the consolidated bills table with a valid matching event ID,
 * or 0xFF if no valid match is found.
 *
 **/
uint8_t sli_zigbee_af_price_consolidated_bill_table_get_current_index(uint8_t endpoint);

/**
 * @brief Print the information at the specified index of the consolidated bill table.
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_consolidated_bill_table_index(uint8_t endpoint, uint8_t index);

/**
 * @brief Return the credit payment table index with a matching eventId.
 *
 * @param issuerEventId The eventId that should be searched for in the credit payment table.
 * @return The index with a valid matching event ID.
 *
 **/
uint8_t sli_zigbee_af_price_credit_payment_table_get_index_with_event_id(uint8_t endpoint, uint32_t issuerEventId);

/**
 * @brief Print the credit payment table entry data of the index with a valid matching eventId.
 *
 * @param endpoint The relevant endpoint.
 * @param issuerEventId The eventId that should be found in the credit payment table.
 *
 **/
void sli_zigbee_af_price_print_credit_payment_table_event_id(uint32_t issuerEventId);

/**
 * @brief Print the information at the specified index of the credit payment table.
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_credit_payment_table_index(uint8_t endpoint, uint8_t index);

/**
 * @brief Print the information at the specified index of the currency conversion table.
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_currency_conversion_table_index(uint8_t endpoint, uint8_t index);

/**
 * @brief Return the index of the currently active billing period entry,
 * or 0xFF if no active entry can be found.
 *
 * @param endpoint The relevant endpoint.
 * @return The index of the active billing period entry.
 *
 **/
uint8_t sli_zigbee_af_price_get_active_billing_period_index(uint8_t endpoint);

/**
 * @brief Print the information at the specified index of the billing period table.
 *
 * @param endpoint The relevant endpoint.
 * @param index The index whose data should be printed.
 *
 **/
void sli_zigbee_af_price_print_billing_period_table_entry_index(uint8_t endpoint, uint8_t index);

/**
 *  @name Callbacks
 * @{
 */

/**
 * @defgroup price_client_cb Price Client
 * @ingroup af_callback
 * @brief Callbacks for Price Client Component
 *
 */

/**
 * @addtogroup price_client_cb
 * @{
 */

/** @brief Price cluster client attribute changed.
 *
 *
 * @param endpoint Endpoint that is being initialized  Ver.: always
 * @param attributeId Attribute that changed  Ver.: always
 */
void emberAfPriceClusterClientAttributeChangedCallback(uint8_t endpoint,
                                                       EmberAfAttributeId attributeId);
/** @brief Price cluster client default response.
 *
 * This function is called when the client receives the default response from
 * the server.
 *
 * @param endpoint Destination endpoint  Ver.: always
 * @param commandId Command id  Ver.: always
 * @param status Status in default response  Ver.: always
 */
void emberAfPriceClusterClientDefaultResponseCallback(uint8_t endpoint,
                                                      uint8_t commandId,
                                                      EmberAfStatus status);
/** @brief Initialize the price cluster client.
 *
 *
 * @param endpoint Endpoint that is being initialized  Ver.: always
 */
void emberAfPriceClusterClientInitCallback(uint8_t endpoint);
/** @brief Price cluster client manufacturer-specific attribute changed.
 *
 *
 * @param endpoint Endpoint that is being initialized  Ver.: always
 * @param attributeId Attribute that changed  Ver.: always
 * @param manufacturerCode Manufacturer Code of the attribute that changed
 * Ver.: always
 */
void emberAfPriceClusterClientManufacturerSpecificAttributeChangedCallback(uint8_t endpoint,
                                                                           EmberAfAttributeId attributeId,
                                                                           uint16_t manufacturerCode);
/** @brief Send the price cluster client message.
 *
 *
 * @param type The type of message sent  Ver.: always
 * @param indexOrDestination The destination or address to which the message was
 * sent  Ver.: always
 * @param apsFrame The APS frame for the message  Ver.: always
 * @param msgLen The length of the message  Ver.: always
 * @param message The message that was sent  Ver.: always
 * @param status The status of the sent message  Ver.: always
 */
void emberAfPriceClusterClientMessageSentCallback(EmberOutgoingMessageType type,
                                                  uint16_t indexOrDestination,
                                                  EmberApsFrame *apsFrame,
                                                  uint16_t msgLen,
                                                  uint8_t *message,
                                                  EmberStatus status);
/** @brief Price cluster client pre attribute changed.
 *
 *
 * @param endpoint Endpoint that is being initialized  Ver.: always
 * @param attributeId Attribute to be changed  Ver.: always
 * @param attributeType Attribute type  Ver.: always
 * @param size Attribute size  Ver.: always
 * @param value Attribute value  Ver.: always
 */
EmberAfStatus emberAfPriceClusterClientPreAttributeChangedCallback(uint8_t endpoint,
                                                                   EmberAfAttributeId attributeId,
                                                                   EmberAfAttributeType attributeType,
                                                                   uint8_t size,
                                                                   uint8_t *value);
/** @brief Price cluster client tick.
 *
 *
 * @param endpoint Endpoint that is being served  Ver.: always
 */
void emberAfPriceClusterClientTickCallback(uint8_t endpoint);

/** @brief Start price.
 *
 * This function is called by the Price client plugin whenever a price starts.
 *
 * @param price The price that has started. Ver.: always
 */
void emberAfPluginPriceClientPriceStartedCallback(EmberAfPluginPriceClientPrice *price);
/** @brief Expire price.
 *
 * This function is called by the Price client plugin whenever a price expires.
 *
 * @param price The price that has expired. Ver.: always
 */
void emberAfPluginPriceClientPriceExpiredCallback(EmberAfPluginPriceClientPrice *price);
/** @brief Pending CPP event.
 *
 * This function is called by the Price client plugin when a CPP event is
 * received with a pending status.
 *
 * @param cppAuth The CPP Auth status. Ver.: always
 */
uint8_t emberAfPluginPriceClientPendingCppEventCallback(uint8_t cppAuth);

/** @} */ // end of price_client_cb
/** @} */ // end of Callbacks
/** @} */ // end of price-client
#endif  // #ifndef _PRICE_CLIENT_H_
