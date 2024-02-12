// Copyright 2024 Ognjen Bjeletic (@pakleni)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9

#define DRIVER_ADDR_1 0b1110100
#define DRIVER_COUNT 1
#define RGB_MATRIX_LED_COUNT 28

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING
#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS

// RGB Effects
#define ENABLE_RGB_MATRIX_BREATHING