/***************************************************************************//**
 * @file
 * @brief This file records the state of crypto operations so that the application
 * can defer processing until after crypto operations have completed.
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

#ifndef SILABS_CRYPTO_STATE_H
#define SILABS_CRYPTO_STATE_H

// For the host applications, if ECC operations are underway then
// the NCP will be completely consumed doing the processing for
// SECONDS.  Therefore the application should not expect it to be
// very responsive.  Normal operations (cluster and app. ticks) will
// not be fired during that period.

#ifndef CRYPTO_OPERATION_TIMEOUT_MS
#define CRYPTO_OPERATION_TIMEOUT_MS MILLISECOND_TICKS_PER_SECOND * 5
#endif //CRYPTO_OPERATION_TIMEOUT_MS

enum {
  EM_AF_NO_CRYPTO_OPERATION,
  EM_AF_CRYPTO_OPERATION_IN_PROGRESS,
};
typedef uint8_t sli_zigbee_af_crypto_status;

#define EM_AF_CRYPTO_STATUS_TEXT \
  {                              \
    "No operation",              \
    "Operation in progress",     \
    NULL                         \
  }

sli_zigbee_af_crypto_status sli_zigbee_af_get_crypto_status(void);
void sli_zigbee_af_set_crypto_status(sli_zigbee_af_crypto_status newStatus);

#define sli_zigbee_af_set_crypto_operation_in_progress() \
  (sli_zigbee_af_set_crypto_status(EM_AF_CRYPTO_OPERATION_IN_PROGRESS))

#define sli_zigbee_af_is_crypto_operation_in_progress() \
  (EM_AF_CRYPTO_OPERATION_IN_PROGRESS == sli_zigbee_af_get_crypto_status())

#define sli_zigbee_af_crypto_operation_complete() \
  (sli_zigbee_af_set_crypto_status(EM_AF_NO_CRYPTO_OPERATION))

#endif // SILABS_CRYPTO_STATE_H
