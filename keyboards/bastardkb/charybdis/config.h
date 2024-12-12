/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* Pointing device configuration. */

// Pointing device is on the right split.
#define POINTING_DEVICE_RIGHT

/* Handedness. */
// #define MASTER_LEFT
// #define SPLIT_USB_DETECT
#define EE_HANDS

// Enable use of pointing device on slave split.
#define SPLIT_POINTING_ENABLE

// Sync layer state between sides
#define SPLIT_LAYER_STATE_ENABLE

// Limits the frequency that the sensor is polled for motion.
#define POINTING_DEVICE_TASK_THROTTLE_MS 1

/** \brief Invert X axis on mouse reports. */
#define POINTING_DEVICE_INVERT_X

// Inverted "natural" scrolling //
#define CHARYBDIS_DRAGSCROLL_REVERSE_X
#define CHARYBDIS_DRAGSCROLL_REVERSE_Y

// auto pointing layer on trackball //
//#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE

// By default, the layer is turned off 1 second after the last registered trackball movement: //
//#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 1000

// The trigger sensibility can also be tuned. The lower the value, the more sensible the trigger: //
//#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 1

// Mouse tracking speed //
#define CHARYBDIS_DRAGSCROLL_DPI 100
#define CHARYBDIS_MINIMUM_DEFAULT_DPI 300
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 100
#define CHARYBDIS_MINIMUM_SNIPING_DPI 200
#define POINTING_DEVICE_ENABLE_ACCELERATION
