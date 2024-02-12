// Copyright 2024 Ognjen Bjeletic (@pakleni)
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
#define RGB_MATRIX_LED_COUNT 28
#define DRIVER_COUNT 1
#define DRIVER_ADDR_1 0b1110100
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING

#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9

#define ENABLE_RGB_MATRIX_BREATHING