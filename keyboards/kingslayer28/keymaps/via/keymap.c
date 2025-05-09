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
		RM_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		RM_NEXT, KC_TRNS, RM_VALU, KC_TRNS, RM_SPDU,
		KC_TRNS, RM_PREV, RM_VALD, RM_NEXT, RM_SPDD,
		RM_HUEU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};
