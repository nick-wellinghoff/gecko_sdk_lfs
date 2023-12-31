/***************************************************************************//**
 * @file
 * @brief
 *******************************************************************************
 * # License
 * <b>Copyright 2022 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

// -----------------------------------------------------------------------------
//                                   Includes
// -----------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "sl_component_catalog.h"
#include "sl_cli.h"
#include "sl_wisun_api.h"
#include "sl_wisun_cli_util.h"

// -----------------------------------------------------------------------------
//                              Macros and Typedefs
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                          Static Function Declarations
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                                Static Variables
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                                Global Variables
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                          Public Function Definitions
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                          Static Function Definitions
// -----------------------------------------------------------------------------

/* CLI app mode switch */
void app_mode_switch(sl_cli_command_arg_t *arguments)
{
  sl_status_t res;
  sl_wisun_mac_address_t address;
  uint8_t mode = sl_cli_get_argument_uint8(arguments, 0);
  uint8_t phy_mode_id = sl_cli_get_argument_uint8(arguments, 1);
  char *address_str = "ff:ff:ff:ff:ff:ff:ff:ff";

  if (sl_cli_get_argument_count(arguments) > 2) {
    // to get the third argument that is the specified address
    address_str = sl_cli_get_argument_string(arguments, 2);
    if (address_str == NULL) {
      printf("[Failed: invalid address string argument]\n");
      return;
    }
  }

  // Attempt to convert the MAC address string
  res = app_util_get_mac_address(&address, address_str);
  if (res != SL_STATUS_OK) {
    printf("[Failed: unable to parse the MAC address: %lu]\n", res);
    return;
  }

  res = sl_wisun_set_mode_switch(mode, phy_mode_id, &address);
  printf("[Mode switch %s]\n", res == SL_STATUS_OK ? "succeeded" : "failed");
}
