// Copyright 2022 mayhem17 (@mayhem17)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT



#include "config_common.h"

#define VENDOR_ID       0x4955
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0002
#define MANUFACTURER    m17
#define PRODUCT         m17tkl rev.beta

#define MATRIX_ROWS 6
#define MATRIX_COLS 18

#define MATRIX_COL_PINS { B3, B2, B1, F7, B0, E6, F0, F1, F5, C6, B6, B5, F4, B4, D7, D4, B7, D5 }
#define MATRIX_ROW_PINS { D2, D1, B0, F6, D6, D3 }
#define DIODE_DIRECTION COL2ROW

#define LED_CAPS_LOCK_PIN C7

#define DEBOUNCE 5


#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

/* bootmagic lite */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

