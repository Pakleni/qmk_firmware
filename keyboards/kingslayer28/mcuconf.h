#pragma once

#include_next <mcuconf.h>

#ifdef RGB_MATRIX_ENABLE
#    undef STM32_I2C_USE_I2C1
#    define STM32_I2C_USE_I2C1 TRUE
#endif