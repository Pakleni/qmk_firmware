// Copyright 2024 Ognjen Bjeletic (@pakleni)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define USB_POLLING_INTERVAL_MS 1

#ifdef RGB_MATRIX_ENABLE
#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9

#define IS31FL3731_I2C_ADDRESS_1 0b1110100
#define DRIVER_COUNT 1
#define RGB_MATRIX_LED_COUNT 28

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_SLEEP // turn off effects when suspended

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set

// RGB Effects
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#endif
