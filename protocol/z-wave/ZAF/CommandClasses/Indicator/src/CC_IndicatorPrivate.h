/**
 * Indicator command class version 3
 *
 * @copyright 2022 Silicon Laboratories Inc.
 */

#ifndef _CC_INDICATOR_PRIVATE_H_
#define _CC_INDICATOR_PRIVATE_H_

#include <ZW_classcmd.h>

/**
 * @addtogroup CC
 * @{
 * @addtogroup Indicator
 * @{
 */

/*
 * Local defines to get rid of context sensitive define names from ZW_classcmd.h
 */

/* Indicator IDs */
#define INDICATOR_IND_NA            INDICATOR_SET_NA_V3
#define INDICATOR_IND_NODE_IDENTIFY INDICATOR_SET_NODE_IDENTIFY_V3

/* Property IDs */
#define INDICATOR_PROP_ON_OFF_PERIOD INDICATOR_SET_ON_OFF_PERIOD_V3
#define INDICATOR_PROP_ON_OFF_CYCLES INDICATOR_SET_ON_OFF_CYCLES_V3
#define INDICATOR_PROP_ON_TIME       INDICATOR_SET_ONE_TIME_ON_OFF_PERIOD_V3

/* Masks etc. */
#define INDICATOR_OBJECT_COUNT_MASK INDICATOR_SET_PROPERTIES1_INDICATOR_OBJECT_COUNT_MASK_V3
#define INDICATOR_RESERVED_MASK     INDICATOR_SET_PROPERTIES1_RESERVED_MASK_V3
#define INDICATOR_RESERVED_SHIFT    INDICATOR_SET_PROPERTIES1_RESERVED_SHIFT_V3


/**
 * @}
 * @}
 */ 

#endif /* _CC_INDICATOR_PRIVATE_H_ */
