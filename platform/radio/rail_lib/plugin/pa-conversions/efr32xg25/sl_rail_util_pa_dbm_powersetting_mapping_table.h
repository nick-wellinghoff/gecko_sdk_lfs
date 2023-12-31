/***************************************************************************//**
 * @file
 * @brief PA power conversion curves used by Silicon Labs PA power conversion
 *   functions.
 * @details This file contains the curves needed convert PA power levels to
 *   dBm powers.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
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

#ifndef __PA_DBM_POWERSETTING_MAPPING_H_
#define __PA_DBM_POWERSETTING_MAPPING_H_

#ifdef __cplusplus
extern "C" {
#endif

#define RAIL_PA_CURVES_OFDM_CURVES_NUM_VALUES  (484U)
#define RAIL_PA_CURVES_OFDM_CURVES_STEP_DDBM   (1U)
#define RAIL_PA_CURVES_OFDM_MAX_POWER_DDBM     (191U)
#define RAIL_PA_CURVES_OFDM_MIN_POWER_DDBM     (-292)
#define RAIL_PA_CURVES_OFDM_CURVES \
  {                                \
    0x20224 /* -29.2 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20324 /* -29.1 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20424 /* -26.6 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20524 /* -24.5 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20624 /* -22.8 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20724 /* -21.4 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20824 /* -20.2 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20924 /* -19.1 dBm */,       \
    0x20A24 /* -18.2 dBm */,       \
    0x20A24 /* -18.2 dBm */,       \
    0x20A24 /* -18.2 dBm */,       \
    0x20A24 /* -18.2 dBm */,       \
    0x20A24 /* -18.2 dBm */,       \
    0x20A24 /* -18.2 dBm */,       \
    0x20A24 /* -18.2 dBm */,       \
    0x20A24 /* -18.2 dBm */,       \
    0x20B24 /* -17.4 dBm */,       \
    0x20B24 /* -17.4 dBm */,       \
    0x20B24 /* -17.4 dBm */,       \
    0x20B24 /* -17.4 dBm */,       \
    0x20B24 /* -17.4 dBm */,       \
    0x20B24 /* -17.4 dBm */,       \
    0x20B24 /* -17.4 dBm */,       \
    0x20C24 /* -16.7 dBm */,       \
    0x20C24 /* -16.7 dBm */,       \
    0x20C24 /* -16.7 dBm */,       \
    0x20C24 /* -16.7 dBm */,       \
    0x20C24 /* -16.7 dBm */,       \
    0x20C24 /* -16.7 dBm */,       \
    0x20C24 /* -16.7 dBm */,       \
    0x20D24 /* -16.0 dBm */,       \
    0x20D24 /* -16.0 dBm */,       \
    0x20D24 /* -16.0 dBm */,       \
    0x20D24 /* -16.0 dBm */,       \
    0x20D24 /* -16.0 dBm */,       \
    0x20D24 /* -16.0 dBm */,       \
    0x20E24 /* -15.4 dBm */,       \
    0x20E24 /* -15.4 dBm */,       \
    0x20E24 /* -15.4 dBm */,       \
    0x20E24 /* -15.4 dBm */,       \
    0x20E24 /* -15.4 dBm */,       \
    0x20E24 /* -15.4 dBm */,       \
    0x20F24 /* -14.8 dBm */,       \
    0x20F24 /* -14.8 dBm */,       \
    0x20F24 /* -14.8 dBm */,       \
    0x20F24 /* -14.8 dBm */,       \
    0x20F24 /* -14.8 dBm */,       \
    0x20F24 /* -14.8 dBm */,       \
    0x21024 /* -14.2 dBm */,       \
    0x21024 /* -14.2 dBm */,       \
    0x21024 /* -14.2 dBm */,       \
    0x21024 /* -14.2 dBm */,       \
    0x21024 /* -14.2 dBm */,       \
    0x21124 /* -13.7 dBm */,       \
    0x21124 /* -13.7 dBm */,       \
    0x21124 /* -13.7 dBm */,       \
    0x21124 /* -13.7 dBm */,       \
    0x21124 /* -13.7 dBm */,       \
    0x21224 /* -13.2 dBm */,       \
    0x21224 /* -13.2 dBm */,       \
    0x21224 /* -13.2 dBm */,       \
    0x21224 /* -13.2 dBm */,       \
    0x21324 /* -12.8 dBm */,       \
    0x21324 /* -12.8 dBm */,       \
    0x21324 /* -12.8 dBm */,       \
    0x21324 /* -12.8 dBm */,       \
    0x21424 /* -12.4 dBm */,       \
    0x21424 /* -12.4 dBm */,       \
    0x21424 /* -12.4 dBm */,       \
    0x21424 /* -12.4 dBm */,       \
    0x21524 /* -12.0 dBm */,       \
    0x21524 /* -12.0 dBm */,       \
    0x21524 /* -12.0 dBm */,       \
    0x21624 /* -11.7 dBm */,       \
    0x21624 /* -11.7 dBm */,       \
    0x21624 /* -11.7 dBm */,       \
    0x21624 /* -11.7 dBm */,       \
    0x21724 /* -11.3 dBm */,       \
    0x21724 /* -11.3 dBm */,       \
    0x21724 /* -11.3 dBm */,       \
    0x21824 /* -11.0 dBm */,       \
    0x21824 /* -11.0 dBm */,       \
    0x21824 /* -11.0 dBm */,       \
    0x21924 /* -10.7 dBm */,       \
    0x21924 /* -10.7 dBm */,       \
    0x21924 /* -10.7 dBm */,       \
    0x21A24 /* -10.4 dBm */,       \
    0x21A24 /* -10.4 dBm */,       \
    0x21A24 /* -10.4 dBm */,       \
    0x21B24 /* -10.1 dBm */,       \
    0x21B24 /* -10.1 dBm */,       \
    0x21B24 /* -10.1 dBm */,       \
    0x21C24 /* -9.8 dBm */,        \
    0x21C24 /* -9.8 dBm */,        \
    0x21D24 /* -9.6 dBm */,        \
    0x21D24 /* -9.6 dBm */,        \
    0x21D24 /* -9.6 dBm */,        \
    0x21E24 /* -9.3 dBm */,        \
    0x21E24 /* -9.3 dBm */,        \
    0x21E24 /* -9.3 dBm */,        \
    0x21F24 /* -9.0 dBm */,        \
    0x21F24 /* -9.0 dBm */,        \
    0x21F25 /* -8.8 dBm */,        \
    0x21F25 /* -8.8 dBm */,        \
    0x21F25 /* -8.8 dBm */,        \
    0x22025 /* -8.5 dBm */,        \
    0x22025 /* -8.5 dBm */,        \
    0x22026 /* -8.3 dBm */,        \
    0x22026 /* -8.3 dBm */,        \
    0x22026 /* -8.3 dBm */,        \
    0x22027 /* -8.0 dBm */,        \
    0x22028 /* -7.9 dBm */,        \
    0x22028 /* -7.9 dBm */,        \
    0x22028 /* -7.9 dBm */,        \
    0x22029 /* -7.6 dBm */,        \
    0x22029 /* -7.6 dBm */,        \
    0x2202A /* -7.4 dBm */,        \
    0x2202A /* -7.4 dBm */,        \
    0x2202B /* -7.2 dBm */,        \
    0x2202B /* -7.2 dBm */,        \
    0x2202C /* -7.0 dBm */,        \
    0x2202C /* -7.0 dBm */,        \
    0x2202D /* -6.8 dBm */,        \
    0x2202D /* -6.8 dBm */,        \
    0x2202E /* -6.6 dBm */,        \
    0x2202E /* -6.6 dBm */,        \
    0x2202F /* -6.4 dBm */,        \
    0x2202F /* -6.4 dBm */,        \
    0x22030 /* -6.2 dBm */,        \
    0x22031 /* -6.1 dBm */,        \
    0x22031 /* -6.1 dBm */,        \
    0x22032 /* -5.9 dBm */,        \
    0x22032 /* -5.9 dBm */,        \
    0x22033 /* -5.7 dBm */,        \
    0x22033 /* -5.7 dBm */,        \
    0x22034 /* -5.5 dBm */,        \
    0x22035 /* -5.4 dBm */,        \
    0x22035 /* -5.4 dBm */,        \
    0x22036 /* -5.2 dBm */,        \
    0x22036 /* -5.2 dBm */,        \
    0x22037 /* -5.0 dBm */,        \
    0x22038 /* -4.9 dBm */,        \
    0x22039 /* -4.8 dBm */,        \
    0x22039 /* -4.8 dBm */,        \
    0x2203A /* -4.6 dBm */,        \
    0x2203B /* -4.5 dBm */,        \
    0x2203B /* -4.5 dBm */,        \
    0x2203C /* -4.3 dBm */,        \
    0x2203D /* -4.2 dBm */,        \
    0x2203E /* -4.1 dBm */,        \
    0x2203F /* -4.0 dBm */,        \
    0x2203F /* -4.0 dBm */,        \
    0x2213F /* -3.8 dBm */,        \
    0x2213F /* -3.8 dBm */,        \
    0x2213F /* -3.8 dBm */,        \
    0x2223F /* -3.5 dBm */,        \
    0x2223F /* -3.5 dBm */,        \
    0x2233F /* -3.3 dBm */,        \
    0x2233F /* -3.3 dBm */,        \
    0x2243F /* -3.1 dBm */,        \
    0x2243F /* -3.1 dBm */,        \
    0x2253F /* -2.9 dBm */,        \
    0x2253F /* -2.9 dBm */,        \
    0x2263F /* -2.7 dBm */,        \
    0x2263F /* -2.7 dBm */,        \
    0x2273F /* -2.5 dBm */,        \
    0x2273F /* -2.5 dBm */,        \
    0x2283F /* -2.3 dBm */,        \
    0x2293F /* -2.2 dBm */,        \
    0x2293F /* -2.2 dBm */,        \
    0x22A3F /* -2.0 dBm */,        \
    0x22B3F /* -1.9 dBm */,        \
    0x22B3F /* -1.9 dBm */,        \
    0x22C3F /* -1.7 dBm */,        \
    0x22C3F /* -1.7 dBm */,        \
    0x22D3F /* -1.5 dBm */,        \
    0x22D3F /* -1.5 dBm */,        \
    0x22F3F /* -1.3 dBm */,        \
    0x22F3F /* -1.3 dBm */,        \
    0x2303F /* -1.1 dBm */,        \
    0x2313F /* -1.0 dBm */,        \
    0x2313F /* -1.0 dBm */,        \
    0x2323F /* -0.8 dBm */,        \
    0x2333F /* -0.7 dBm */,        \
    0x2343F /* -0.6 dBm */,        \
    0x2353F /* -0.5 dBm */,        \
    0x2363F /* -0.4 dBm */,        \
    0x2363F /* -0.4 dBm */,        \
    0x2373F /* -0.2 dBm */,        \
    0x2383F /* -0.1 dBm */,        \
    0x2393F /* 0.0 dBm */,         \
    0x23A3F /* 0.1 dBm */,         \
    0x23B3F /* 0.2 dBm */,         \
    0x23C3F /* 0.3 dBm */,         \
    0x23D3F /* 0.4 dBm */,         \
    0x23E3F /* 0.5 dBm */,         \
    0x23F3F /* 0.6 dBm */,         \
    0x24532 /* 0.7 dBm */,         \
    0x24632 /* 0.8 dBm */,         \
    0x24732 /* 0.9 dBm */,         \
    0x24832 /* 1.0 dBm */,         \
    0x24932 /* 1.1 dBm */,         \
    0x24A32 /* 1.2 dBm */,         \
    0x24B32 /* 1.3 dBm */,         \
    0x24C32 /* 1.4 dBm */,         \
    0x24D32 /* 1.5 dBm */,         \
    0x24E32 /* 1.6 dBm */,         \
    0x24F32 /* 1.7 dBm */,         \
    0x25032 /* 1.8 dBm */,         \
    0x25132 /* 1.9 dBm */,         \
    0x25232 /* 2.0 dBm */,         \
    0x25432 /* 2.1 dBm */,         \
    0x25532 /* 2.2 dBm */,         \
    0x25632 /* 2.3 dBm */,         \
    0x25832 /* 2.4 dBm */,         \
    0x25932 /* 2.5 dBm */,         \
    0x25B32 /* 2.6 dBm */,         \
    0x25C32 /* 2.7 dBm */,         \
    0x25E32 /* 2.8 dBm */,         \
    0x25F32 /* 2.9 dBm */,         \
    0x26132 /* 3.0 dBm */,         \
    0x26332 /* 3.1 dBm */,         \
    0x26532 /* 3.2 dBm */,         \
    0x26732 /* 3.3 dBm */,         \
    0x26832 /* 3.4 dBm */,         \
    0x26A32 /* 3.5 dBm */,         \
    0x26C32 /* 3.6 dBm */,         \
    0x26E32 /* 3.7 dBm */,         \
    0x27032 /* 3.8 dBm */,         \
    0x27232 /* 3.9 dBm */,         \
    0x27432 /* 4.0 dBm */,         \
    0x27832 /* 4.1 dBm */,         \
    0x27A32 /* 4.2 dBm */,         \
    0x27C32 /* 4.3 dBm */,         \
    0x28028 /* 4.4 dBm */,         \
    0x28228 /* 4.5 dBm */,         \
    0x28428 /* 4.6 dBm */,         \
    0x28628 /* 4.7 dBm */,         \
    0x28828 /* 4.8 dBm */,         \
    0x28A28 /* 4.9 dBm */,         \
    0x28C28 /* 5.0 dBm */,         \
    0x28E28 /* 5.1 dBm */,         \
    0x29228 /* 5.2 dBm */,         \
    0x29428 /* 5.3 dBm */,         \
    0x29628 /* 5.4 dBm */,         \
    0x29A28 /* 5.5 dBm */,         \
    0x29C28 /* 5.6 dBm */,         \
    0x2A028 /* 5.7 dBm */,         \
    0x2A228 /* 5.8 dBm */,         \
    0x2A628 /* 5.9 dBm */,         \
    0x2A828 /* 6.0 dBm */,         \
    0x2AC28 /* 6.1 dBm */,         \
    0x2B028 /* 6.2 dBm */,         \
    0x2B428 /* 6.3 dBm */,         \
    0x2B628 /* 6.4 dBm */,         \
    0x2B928 /* 6.5 dBm */,         \
    0x2BC28 /* 6.6 dBm */,         \
    0x2BF28 /* 6.7 dBm */,         \
    0x2BF29 /* 6.8 dBm */,         \
    0x2BF29 /* 6.8 dBm */,         \
    0x2BF2A /* 7.0 dBm */,         \
    0x2BF2A /* 7.0 dBm */,         \
    0x2BF2B /* 7.2 dBm */,         \
    0x2BF2B /* 7.2 dBm */,         \
    0x2BF2C /* 7.4 dBm */,         \
    0x2BF2C /* 7.4 dBm */,         \
    0x2BF2D /* 7.6 dBm */,         \
    0x2BF2D /* 7.6 dBm */,         \
    0x2BF2E /* 7.8 dBm */,         \
    0x2BF2E /* 7.8 dBm */,         \
    0x2BF2F /* 8.0 dBm */,         \
    0x2BF30 /* 8.1 dBm */,         \
    0x2BF30 /* 8.1 dBm */,         \
    0x2BF31 /* 8.3 dBm */,         \
    0x2BF31 /* 8.3 dBm */,         \
    0x2BF32 /* 8.5 dBm */,         \
    0x2BF32 /* 8.5 dBm */,         \
    0x2BF33 /* 8.7 dBm */,         \
    0x2BF33 /* 8.7 dBm */,         \
    0x2BF34 /* 8.9 dBm */,         \
    0x2BF35 /* 9.0 dBm */,         \
    0x2BF35 /* 9.0 dBm */,         \
    0x2BF36 /* 9.2 dBm */,         \
    0x2BF37 /* 9.3 dBm */,         \
    0x2BF37 /* 9.3 dBm */,         \
    0x2BF38 /* 9.5 dBm */,         \
    0x2BF39 /* 9.6 dBm */,         \
    0x2BF3A /* 9.7 dBm */,         \
    0x2BF3A /* 9.7 dBm */,         \
    0x2BF3B /* 9.9 dBm */,         \
    0x2BF3C /* 10.0 dBm */,        \
    0x2BF3C /* 10.0 dBm */,        \
    0x2BF3D /* 10.2 dBm */,        \
    0x2BF3D /* 10.2 dBm */,        \
    0x2BF3E /* 10.4 dBm */,        \
    0x2BF3F /* 10.5 dBm */,        \
    0x2BF40 /* 10.6 dBm */,        \
    0x2BF41 /* 10.7 dBm */,        \
    0x2BF41 /* 10.7 dBm */,        \
    0x2BF42 /* 10.9 dBm */,        \
    0x2BF43 /* 11.0 dBm */,        \
    0x2BF44 /* 11.1 dBm */,        \
    0x2BF44 /* 11.1 dBm */,        \
    0x2BF45 /* 11.3 dBm */,        \
    0x2BF46 /* 11.4 dBm */,        \
    0x2BF47 /* 11.5 dBm */,        \
    0x2BF48 /* 11.6 dBm */,        \
    0x2BF49 /* 11.7 dBm */,        \
    0x2BF4A /* 11.8 dBm */,        \
    0x2BF4B /* 11.9 dBm */,        \
    0x2BF4B /* 11.9 dBm */,        \
    0x2BF4C /* 12.1 dBm */,        \
    0x2BF4D /* 12.2 dBm */,        \
    0x2BF4E /* 12.3 dBm */,        \
    0x2BF4F /* 12.4 dBm */,        \
    0x2BF50 /* 12.5 dBm */,        \
    0x2BF51 /* 12.6 dBm */,        \
    0x2BF52 /* 12.7 dBm */,        \
    0x2BF53 /* 12.8 dBm */,        \
    0x2BF54 /* 12.9 dBm */,        \
    0x2BF55 /* 13.0 dBm */,        \
    0x2BF56 /* 13.1 dBm */,        \
    0x2BF57 /* 13.2 dBm */,        \
    0x2BF58 /* 13.3 dBm */,        \
    0x2BF59 /* 13.4 dBm */,        \
    0x2BF5B /* 13.5 dBm */,        \
    0x2BF5C /* 13.6 dBm */,        \
    0x2BF5D /* 13.7 dBm */,        \
    0x2BF5E /* 13.8 dBm */,        \
    0x2BF5F /* 13.9 dBm */,        \
    0x2BF61 /* 14.0 dBm */,        \
    0x2BF61 /* 14.0 dBm */,        \
    0x2BF62 /* 14.2 dBm */,        \
    0x2BF63 /* 14.3 dBm */,        \
    0x2BF64 /* 14.4 dBm */,        \
    0x2BF66 /* 14.5 dBm */,        \
    0x2BF67 /* 14.6 dBm */,        \
    0x2BF68 /* 14.7 dBm */,        \
    0x2BF6A /* 14.8 dBm */,        \
    0x2BF6B /* 14.9 dBm */,        \
    0x2BF6D /* 15.0 dBm */,        \
    0x2BF6F /* 15.1 dBm */,        \
    0x2BF70 /* 15.2 dBm */,        \
    0x2BF71 /* 15.3 dBm */,        \
    0x2BF73 /* 15.4 dBm */,        \
    0x2BF74 /* 15.5 dBm */,        \
    0x2BF76 /* 15.6 dBm */,        \
    0x2BF78 /* 15.7 dBm */,        \
    0x2BF7A /* 15.8 dBm */,        \
    0x2BF7B /* 15.9 dBm */,        \
    0x2BF7D /* 16.0 dBm */,        \
    0x2BF7F /* 16.1 dBm */,        \
    0x2BF81 /* 16.2 dBm */,        \
    0x2BF82 /* 16.3 dBm */,        \
    0x2BF84 /* 16.4 dBm */,        \
    0x2BF86 /* 16.5 dBm */,        \
    0x2BF88 /* 16.6 dBm */,        \
    0x2BF8A /* 16.7 dBm */,        \
    0x2BF8C /* 16.8 dBm */,        \
    0x2BF8E /* 16.9 dBm */,        \
    0x2BF90 /* 17.0 dBm */,        \
    0x2BF92 /* 17.1 dBm */,        \
    0x2BF94 /* 17.2 dBm */,        \
    0x2BF96 /* 17.3 dBm */,        \
    0x2BF98 /* 17.4 dBm */,        \
    0x2BF9A /* 17.5 dBm */,        \
    0x2BF9C /* 17.6 dBm */,        \
    0x2BFA0 /* 17.7 dBm */,        \
    0x2BFA2 /* 17.8 dBm */,        \
    0x2BFA4 /* 17.9 dBm */,        \
    0x2BFA8 /* 18.0 dBm */,        \
    0x2BFAA /* 18.1 dBm */,        \
    0x2BFAC /* 18.2 dBm */,        \
    0x2BFB0 /* 18.3 dBm */,        \
    0x2BFB4 /* 18.4 dBm */,        \
    0x2BFB6 /* 18.5 dBm */,        \
    0x2BFB8 /* 18.6 dBm */,        \
    0x2BFBC /* 18.7 dBm */,        \
    0x2BFC0 /* 18.8 dBm */,        \
    0x2BFC3 /* 18.9 dBm */,        \
    0x2BFC6 /* 19.0 dBm */,        \
    0x2BFCA /* 19.1 dBm */,        \
  }

#define RAIL_PA_CURVES_SUBGIG_CURVES_NUM_VALUES  (320U)
#define RAIL_PA_CURVES_SUBGIG_CURVES_STEP_DDBM   (1U)
#define RAIL_PA_CURVES_SUBGIG_MAX_POWER_DDBM     (169U)
#define RAIL_PA_CURVES_SUBGIG_MIN_POWER_DDBM     (-150)
#define RAIL_PA_CURVES_SUBGIG_CURVES \
  {                                  \
    0x41f0018 /* -15.0 dBm */,       \
    0x41f0019 /* -14.9 dBm */,       \
    0x41f0019 /* -14.9 dBm */,       \
    0x41f0019 /* -14.9 dBm */,       \
    0x41f001a /* -14.6 dBm */,       \
    0x41f001a /* -14.6 dBm */,       \
    0x41f001b /* -14.4 dBm */,       \
    0x41f001b /* -14.4 dBm */,       \
    0x41f001b /* -14.4 dBm */,       \
    0x41f001b /* -14.4 dBm */,       \
    0x41f001c /* -14.0 dBm */,       \
    0x41f001c /* -14.0 dBm */,       \
    0x41f001c /* -14.0 dBm */,       \
    0x41f001d /* -13.7 dBm */,       \
    0x41f001d /* -13.7 dBm */,       \
    0x41f001d /* -13.7 dBm */,       \
    0x41f001e /* -13.4 dBm */,       \
    0x41f001e /* -13.4 dBm */,       \
    0x41f001f /* -13.2 dBm */,       \
    0x41f001f /* -13.2 dBm */,       \
    0x41f0100 /* -13.0 dBm */,       \
    0x41f0100 /* -13.0 dBm */,       \
    0x41f0101 /* -12.8 dBm */,       \
    0x41f0101 /* -12.8 dBm */,       \
    0x41f0102 /* -12.6 dBm */,       \
    0x41f0102 /* -12.6 dBm */,       \
    0x41f0103 /* -12.4 dBm */,       \
    0x41f0103 /* -12.4 dBm */,       \
    0x41f0104 /* -12.2 dBm */,       \
    0x41f0104 /* -12.2 dBm */,       \
    0x41f0105 /* -12.0 dBm */,       \
    0x41f0105 /* -12.0 dBm */,       \
    0x41f0106 /* -11.8 dBm */,       \
    0x41f0106 /* -11.8 dBm */,       \
    0x41f0107 /* -11.6 dBm */,       \
    0x41f0107 /* -11.6 dBm */,       \
    0x41f0107 /* -11.6 dBm */,       \
    0x41f0108 /* -11.3 dBm */,       \
    0x41f0108 /* -11.3 dBm */,       \
    0x41f0108 /* -11.3 dBm */,       \
    0x41f0109 /* -11.0 dBm */,       \
    0x41f010a /* -10.9 dBm */,       \
    0x41f010a /* -10.9 dBm */,       \
    0x41f010b /* -10.7 dBm */,       \
    0x41f010b /* -10.7 dBm */,       \
    0x41f010c /* -10.5 dBm */,       \
    0x41f010c /* -10.5 dBm */,       \
    0x41f010d /* -10.3 dBm */,       \
    0x41f010d /* -10.3 dBm */,       \
    0x41f010e /* -10.1 dBm */,       \
    0x41f010e /* -10.1 dBm */,       \
    0x41f010f /* -9.9 dBm */,        \
    0x41f010f /* -9.9 dBm */,        \
    0x41f010f /* -9.9 dBm */,        \
    0x41f0110 /* -9.6 dBm */,        \
    0x41f0110 /* -9.6 dBm */,        \
    0x41f0110 /* -9.6 dBm */,        \
    0x41f0111 /* -9.3 dBm */,        \
    0x41f0112 /* -9.2 dBm */,        \
    0x41f0112 /* -9.2 dBm */,        \
    0x41f0113 /* -9.0 dBm */,        \
    0x41f0114 /* -8.9 dBm */,        \
    0x41f0114 /* -8.9 dBm */,        \
    0x41f0115 /* -8.7 dBm */,        \
    0x41f0116 /* -8.6 dBm */,        \
    0x41f0116 /* -8.6 dBm */,        \
    0x41f0117 /* -8.4 dBm */,        \
    0x41f0117 /* -8.4 dBm */,        \
    0x41f0118 /* -8.2 dBm */,        \
    0x41f0118 /* -8.2 dBm */,        \
    0x41f0118 /* -8.2 dBm */,        \
    0x41f0119 /* -7.9 dBm */,        \
    0x41f011a /* -7.8 dBm */,        \
    0x41f011b /* -7.7 dBm */,        \
    0x41f011c /* -7.6 dBm */,        \
    0x41f011c /* -7.6 dBm */,        \
    0x41f011d /* -7.4 dBm */,        \
    0x41f011e /* -7.3 dBm */,        \
    0x41f011e /* -7.3 dBm */,        \
    0x41f011f /* -7.1 dBm */,        \
    0x41f0201 /* -7.0 dBm */,        \
    0x41f0203 /* -6.9 dBm */,        \
    0x41f0205 /* -6.8 dBm */,        \
    0x41f0207 /* -6.7 dBm */,        \
    0x41f0209 /* -6.6 dBm */,        \
    0x41f020b /* -6.5 dBm */,        \
    0x41f020d /* -6.4 dBm */,        \
    0x41f020f /* -6.3 dBm */,        \
    0x41f0211 /* -6.2 dBm */,        \
    0x41f0213 /* -6.1 dBm */,        \
    0x41f0215 /* -6.0 dBm */,        \
    0x41f0217 /* -5.9 dBm */,        \
    0x41f0219 /* -5.8 dBm */,        \
    0x41f021b /* -5.7 dBm */,        \
    0x41f021d /* -5.6 dBm */,        \
    0x41f021f /* -5.5 dBm */,        \
    0x41f021f /* -5.5 dBm */,        \
    0x40b0104 /* -5.3 dBm */,        \
    0x40b0104 /* -5.3 dBm */,        \
    0x40b0105 /* -5.1 dBm */,        \
    0x40b0105 /* -5.1 dBm */,        \
    0x40b0106 /* -4.9 dBm */,        \
    0x40b0106 /* -4.9 dBm */,        \
    0x40b0107 /* -4.7 dBm */,        \
    0x40b0107 /* -4.7 dBm */,        \
    0x40b0107 /* -4.7 dBm */,        \
    0x40b0108 /* -4.4 dBm */,        \
    0x40b0108 /* -4.4 dBm */,        \
    0x40b0108 /* -4.4 dBm */,        \
    0x40b0109 /* -4.1 dBm */,        \
    0x40b0109 /* -4.1 dBm */,        \
    0x40b010a /* -3.9 dBm */,        \
    0x40b010b /* -3.8 dBm */,        \
    0x40b010b /* -3.8 dBm */,        \
    0x40b010b /* -3.8 dBm */,        \
    0x40b010c /* -3.5 dBm */,        \
    0x40b010c /* -3.5 dBm */,        \
    0x40b010d /* -3.3 dBm */,        \
    0x40b010d /* -3.3 dBm */,        \
    0x40b010e /* -3.1 dBm */,        \
    0x40b010f /* -3.0 dBm */,        \
    0x40b010f /* -3.0 dBm */,        \
    0x40b010f /* -3.0 dBm */,        \
    0x40b010f /* -3.0 dBm */,        \
    0x40b0110 /* -2.6 dBm */,        \
    0x40b0110 /* -2.6 dBm */,        \
    0x40b0110 /* -2.6 dBm */,        \
    0x40b0111 /* -2.3 dBm */,        \
    0x40b0112 /* -2.2 dBm */,        \
    0x40b0113 /* -2.1 dBm */,        \
    0x40b0113 /* -2.1 dBm */,        \
    0x40b0114 /* -1.9 dBm */,        \
    0x40b0114 /* -1.9 dBm */,        \
    0x40b0115 /* -1.7 dBm */,        \
    0x40b0116 /* -1.6 dBm */,        \
    0x40b0116 /* -1.6 dBm */,        \
    0x40b0117 /* -1.4 dBm */,        \
    0x40b0117 /* -1.4 dBm */,        \
    0x40b0117 /* -1.4 dBm */,        \
    0x40b0118 /* -1.1 dBm */,        \
    0x40b0118 /* -1.1 dBm */,        \
    0x40b0119 /* -0.9 dBm */,        \
    0x40b011a /* -0.8 dBm */,        \
    0x40b011b /* -0.7 dBm */,        \
    0x40b011b /* -0.7 dBm */,        \
    0x40b011c /* -0.5 dBm */,        \
    0x40b011d /* -0.4 dBm */,        \
    0x40b011d /* -0.4 dBm */,        \
    0x40b011e /* -0.2 dBm */,        \
    0x40b011f /* -0.1 dBm */,        \
    0x40b0201 /* 0.0 dBm */,         \
    0x40b0203 /* 0.1 dBm */,         \
    0x40b0205 /* 0.2 dBm */,         \
    0x40b0207 /* 0.3 dBm */,         \
    0x40b0207 /* 0.3 dBm */,         \
    0x40b0209 /* 0.5 dBm */,         \
    0x40b020b /* 0.6 dBm */,         \
    0x40b020d /* 0.7 dBm */,         \
    0x40b020f /* 0.8 dBm */,         \
    0x40b0211 /* 0.9 dBm */,         \
    0x40b0213 /* 1.0 dBm */,         \
    0x40b0215 /* 1.1 dBm */,         \
    0x40b0217 /* 1.2 dBm */,         \
    0x40b0219 /* 1.3 dBm */,         \
    0x40b021b /* 1.4 dBm */,         \
    0x40b021d /* 1.5 dBm */,         \
    0x40b021f /* 1.6 dBm */,         \
    0x40b021f /* 1.6 dBm */,         \
    0x4030101 /* 1.8 dBm */,         \
    0x4030102 /* 1.9 dBm */,         \
    0x4030102 /* 1.9 dBm */,         \
    0x4030103 /* 2.1 dBm */,         \
    0x4030103 /* 2.1 dBm */,         \
    0x4030103 /* 2.1 dBm */,         \
    0x4030104 /* 2.4 dBm */,         \
    0x4030104 /* 2.4 dBm */,         \
    0x4030105 /* 2.6 dBm */,         \
    0x4030105 /* 2.6 dBm */,         \
    0x4030106 /* 2.8 dBm */,         \
    0x4030106 /* 2.8 dBm */,         \
    0x4030107 /* 3.0 dBm */,         \
    0x4030107 /* 3.0 dBm */,         \
    0x4030107 /* 3.0 dBm */,         \
    0x4030108 /* 3.3 dBm */,         \
    0x4030108 /* 3.3 dBm */,         \
    0x4030108 /* 3.3 dBm */,         \
    0x4030109 /* 3.6 dBm */,         \
    0x4030109 /* 3.6 dBm */,         \
    0x403010a /* 3.8 dBm */,         \
    0x403010a /* 3.8 dBm */,         \
    0x403010b /* 4.0 dBm */,         \
    0x403010b /* 4.0 dBm */,         \
    0x403010c /* 4.2 dBm */,         \
    0x403010c /* 4.2 dBm */,         \
    0x403010d /* 4.4 dBm */,         \
    0x403010d /* 4.4 dBm */,         \
    0x403010e /* 4.6 dBm */,         \
    0x403010e /* 4.6 dBm */,         \
    0x403010f /* 4.8 dBm */,         \
    0x403010f /* 4.8 dBm */,         \
    0x403010f /* 4.8 dBm */,         \
    0x4030110 /* 5.1 dBm */,         \
    0x4030110 /* 5.1 dBm */,         \
    0x4030111 /* 5.3 dBm */,         \
    0x4030111 /* 5.3 dBm */,         \
    0x4030112 /* 5.5 dBm */,         \
    0x4030113 /* 5.6 dBm */,         \
    0x4030113 /* 5.6 dBm */,         \
    0x4030114 /* 5.8 dBm */,         \
    0x4030115 /* 5.9 dBm */,         \
    0x4030115 /* 5.9 dBm */,         \
    0x4030116 /* 6.1 dBm */,         \
    0x4030117 /* 6.2 dBm */,         \
    0x4030117 /* 6.2 dBm */,         \
    0x4030117 /* 6.2 dBm */,         \
    0x4030118 /* 6.5 dBm */,         \
    0x4030118 /* 6.5 dBm */,         \
    0x4030119 /* 6.7 dBm */,         \
    0x403011a /* 6.8 dBm */,         \
    0x403011b /* 6.9 dBm */,         \
    0x403011c /* 7.0 dBm */,         \
    0x403011c /* 7.0 dBm */,         \
    0x403011d /* 7.2 dBm */,         \
    0x403011e /* 7.3 dBm */,         \
    0x403011e /* 7.3 dBm */,         \
    0x403011f /* 7.5 dBm */,         \
    0x4030201 /* 7.6 dBm */,         \
    0x4030203 /* 7.7 dBm */,         \
    0x4030205 /* 7.8 dBm */,         \
    0x4030207 /* 7.9 dBm */,         \
    0x4030209 /* 8.0 dBm */,         \
    0x403020b /* 8.1 dBm */,         \
    0x403020d /* 8.2 dBm */,         \
    0x403020d /* 8.2 dBm */,         \
    0x403020f /* 8.4 dBm */,         \
    0x4030211 /* 8.5 dBm */,         \
    0x4030213 /* 8.6 dBm */,         \
    0x4030215 /* 8.7 dBm */,         \
    0x4030217 /* 8.8 dBm */,         \
    0x4030219 /* 8.9 dBm */,         \
    0x403021b /* 9.0 dBm */,         \
    0x403021d /* 9.1 dBm */,         \
    0x403021d /* 9.1 dBm */,         \
    0x400001d /* 9.3 dBm */,         \
    0x400001d /* 9.3 dBm */,         \
    0x400001d /* 9.3 dBm */,         \
    0x400001e /* 9.6 dBm */,         \
    0x400001e /* 9.6 dBm */,         \
    0x400001e /* 9.6 dBm */,         \
    0x400001f /* 9.9 dBm */,         \
    0x400001f /* 9.9 dBm */,         \
    0x4000100 /* 10.1 dBm */,        \
    0x4000100 /* 10.1 dBm */,        \
    0x4000100 /* 10.1 dBm */,        \
    0x4000101 /* 10.4 dBm */,        \
    0x4000101 /* 10.4 dBm */,        \
    0x4000102 /* 10.6 dBm */,        \
    0x4000102 /* 10.6 dBm */,        \
    0x4000103 /* 10.8 dBm */,        \
    0x4000103 /* 10.8 dBm */,        \
    0x4000103 /* 10.8 dBm */,        \
    0x4000104 /* 11.1 dBm */,        \
    0x4000104 /* 11.1 dBm */,        \
    0x4000105 /* 11.3 dBm */,        \
    0x4000105 /* 11.3 dBm */,        \
    0x4000106 /* 11.5 dBm */,        \
    0x4000106 /* 11.5 dBm */,        \
    0x4000107 /* 11.7 dBm */,        \
    0x4000107 /* 11.7 dBm */,        \
    0x4000108 /* 11.9 dBm */,        \
    0x4000108 /* 11.9 dBm */,        \
    0x4000109 /* 12.1 dBm */,        \
    0x4000109 /* 12.1 dBm */,        \
    0x400010a /* 12.3 dBm */,        \
    0x400010a /* 12.3 dBm */,        \
    0x400010b /* 12.5 dBm */,        \
    0x400010b /* 12.5 dBm */,        \
    0x400010c /* 12.7 dBm */,        \
    0x400010c /* 12.7 dBm */,        \
    0x400010d /* 12.9 dBm */,        \
    0x400010e /* 13.0 dBm */,        \
    0x400010e /* 13.0 dBm */,        \
    0x400010f /* 13.2 dBm */,        \
    0x400010f /* 13.2 dBm */,        \
    0x4000110 /* 13.4 dBm */,        \
    0x4000110 /* 13.4 dBm */,        \
    0x4000111 /* 13.6 dBm */,        \
    0x4000112 /* 13.7 dBm */,        \
    0x4000112 /* 13.7 dBm */,        \
    0x4000113 /* 13.9 dBm */,        \
    0x4000114 /* 14.0 dBm */,        \
    0x4000114 /* 14.0 dBm */,        \
    0x4000115 /* 14.2 dBm */,        \
    0x4000116 /* 14.3 dBm */,        \
    0x4000117 /* 14.4 dBm */,        \
    0x4000117 /* 14.4 dBm */,        \
    0x4000118 /* 14.6 dBm */,        \
    0x4000119 /* 14.7 dBm */,        \
    0x400011a /* 14.8 dBm */,        \
    0x400011a /* 14.8 dBm */,        \
    0x400011b /* 15.0 dBm */,        \
    0x400011c /* 15.1 dBm */,        \
    0x400011d /* 15.2 dBm */,        \
    0x400011e /* 15.3 dBm */,        \
    0x400011f /* 15.4 dBm */,        \
    0x4000201 /* 15.5 dBm */,        \
    0x4000203 /* 15.6 dBm */,        \
    0x4000205 /* 15.7 dBm */,        \
    0x4000207 /* 15.8 dBm */,        \
    0x4000209 /* 15.9 dBm */,        \
    0x400020b /* 16.0 dBm */,        \
    0x400020d /* 16.1 dBm */,        \
    0x400020f /* 16.2 dBm */,        \
    0x4000211 /* 16.3 dBm */,        \
    0x4000213 /* 16.4 dBm */,        \
    0x4000215 /* 16.5 dBm */,        \
    0x4000217 /* 16.6 dBm */,        \
    0x4000219 /* 16.7 dBm */,        \
    0x400021d /* 16.8 dBm */,        \
    0x400021f /* 16.9 dBm */,        \
  }

#endif
// *INDENT-OFF*

#ifdef __cplusplus
}
#endif
