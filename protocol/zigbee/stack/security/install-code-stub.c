/***************************************************************************//**
 * @file
 * @brief Stub version of the Install Code library.  See non-stub file for more
 * information.
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
#include "stack/include/ember-types.h"
#include "stack/include/library.h"

//------------------------------------------------------------------------------
// Globals

const EmberLibraryStatus sli_zigbee_install_code_library_status = EMBER_LIBRARY_IS_STUB;

//------------------------------------------------------------------------------
// API

EmberStatus sli_zigbee_get_key_from_install_code(EmberKeyData *key)
{
  (void)key;
  return EMBER_LIBRARY_NOT_PRESENT;
}
