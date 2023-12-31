/***************************************************************************//**
 * Copyright 2021 Silicon Laboratories Inc. www.silabs.com
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available here[1]. This software is distributed to you in
 * Source Code format and is governed by the sections of the MSLA applicable to
 * Source Code.
 *
 * [1] www.silabs.com/about-us/legal/master-software-license-agreement
 *
 ******************************************************************************/
#ifndef SL_MICRIUM_DEBUG_H
#define SL_MICRIUM_DEBUG_H

#include "sl_component_catalog.h"

#if defined(SL_CATALOG_MICRIUMOS_KERNEL_PRESENT)
void export_debugger_data();
#else
static inline void export_debugger_data() { };
#endif

#endif
