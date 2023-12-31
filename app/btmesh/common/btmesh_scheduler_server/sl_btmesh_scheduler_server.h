/***************************************************************************//**
 * @file
 * @brief sl_btmesh_scheduler_server.h
 *******************************************************************************
 * # License
 * <b>Copyright 2023 Silicon Laboratories Inc. www.silabs.com</b>
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

#ifndef SL_BTMESH_SCHEDULER_SERVER_H
#define SL_BTMESH_SCHEDULER_SERVER_H

/***************************************************************************//**
 * Scheduler initialization.
 * This should be called at each boot if provisioning is already done.
 * Otherwise this function should be called after provisioning is completed.
 * This function is called automatically after enabling the component.
 *
 * @return Status of the initialization operation.
 *         Returns bg_err_success (0) if succeed, non-zero otherwise.
 ******************************************************************************/
uint16_t sl_btmesh_scheduler_init(void);

/***************************************************************************//**
 * Handling of mesh scheduler events.
 *
 * This function is called automatically after enabling the component.
 *
 * @param[in] evt  Pointer to incoming time event.
 ******************************************************************************/
void sl_btmesh_scheduler_server_on_event(sl_btmesh_msg_t *evt);

#endif // SL_BTMESH_SCHEDULER_SERVER_H
