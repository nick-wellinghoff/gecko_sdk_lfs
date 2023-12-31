/***************************************************************************//**
 * @file
 * @brief Silicon Labs TrustZone secure SYSCFG service.
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

#ifndef __SLI_TZ_SERVICE_SYSCFG_VENEERS_H__
#define __SLI_TZ_SERVICE_SYSCFG_VENEERS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "sli_tz_util.h"

/******** SL_SP_SYSCFG ********/

uint32_t sli_tz_syscfg_read_chiprev_register(void);

uint32_t sli_tz_syscfg_read_dmem0retnctrl_register(void);

uint32_t sli_tz_syscfg_set_dmem0ramctrl_ramwsen_bit(void);

uint32_t sli_tz_syscfg_clear_dmem0ramctrl_ramwsen_bit(void);

uint32_t sli_tz_syscfg_get_dmem0ramctrl_ramwsen_bit(void);

uint32_t sli_tz_syscfg_mask_dmem0retnctrl_register(uint32_t mask);

uint32_t sli_tz_syscfg_zero_dmem0retnctrl_register(void);

uint32_t sli_tz_syscfg_set_systicextclken_cfgsystic(void);

uint32_t sli_tz_syscfg_clear_systicextclken_cfgsystic(void);

#ifdef __cplusplus
}
#endif

#endif // __SLI_TZ_SERVICE_SYSCFG_VENEERS_H__
