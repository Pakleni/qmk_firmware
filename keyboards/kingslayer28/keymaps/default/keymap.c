// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT_5_7(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, 
		KC_LSFT, KC_LABK, KC_Z, KC_X, KC_C, KC_V, 
		KC_LCTL, KC_LGUI, KC_NO, KC_LALT, KC_SPC),
};