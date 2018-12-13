/*
Copyright 2018 Jack Humbert <jack.humb@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define MANUFACTURER    ZSA
#define PRODUCT         Moonlander
#define DESCRIPTION     A keyboard
#define DEVICE_VER      0x0001

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* Planck PCB default pin-out */
#define MATRIX_ROW_PINS { B10, B11, B12, B13, B14, B15 }
#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6 }

#define MCP23_ROW_PINS { GPB5, GBP4, GBP3, GBP2, GBP1, GBP0 }
#define MCP23_COL_PINS { GPA0, GBA1, GBA2, GBA3, GBA4, GBA5, GBA6 }

#define MCP23_LED_R GPB7
#define MCP23_LED_G GPB6
#define MCP23_LED_B GPA7


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

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
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION