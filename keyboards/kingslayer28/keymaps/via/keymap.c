// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// ┌───┬───┬───┬───┬───┬───┬───┐
// │ESC│1  │2  │3  │4  │5  │6  │
// ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┘
// │TAB  │Q  │W  │E  │R  │
// ├─────┴┬──┴┬──┴┬──┴┬──┴┐
// │CAPS│ │A  │S  │D  │F  │
// ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐
// │SHFT│M2 │Z  │X  │C  │V  │
// ├───┬┴──┬┴──┬┴──┬┴───┴──┐┘
// │CTL│GUI│M1 │ALT│       │
// └───┴───┴───┴───┴───────┘
	[0] = LAYOUT_5_7(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, 
		KC_LSFT, MO(2), KC_Z, KC_X, KC_C, KC_V, 
		KC_LCTL, KC_LGUI,  MO(1), KC_LALT, KC_SPC),
	[1] = LAYOUT_5_7(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_5_7(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

// THIS IS TESTING CODE
#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 0:
                rgb_matrix_set_color(i, RGB_RED);
                break;
            case 1:
                rgb_matrix_set_color(i, RGB_GREEN);
                break;
            case 2:
                rgb_matrix_set_color(i, RGB_BLUE);
                break;
            default:
                break;
        }
    }
    return false;
}
#endif