#pragma once

#ifdef RGB_MATRIX_ENABLE
#define HAL_USE_I2C TRUE
#endif
#ifdef LED_MATRIX_ENABLE
#define HAL_USE_I2C TRUE
#endif

#include_next <halconf.h>
