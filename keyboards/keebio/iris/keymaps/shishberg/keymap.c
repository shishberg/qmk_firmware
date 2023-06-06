#include QMK_KEYBOARD_H

#define _COLEMAK 0
#define _SYM 1
#define _NUM 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_LALT, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_MINS, KC_LGUI, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_TAB, KC_TRNS, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, TT(1), KC_LSFT, KC_SPC, KC_ENT, KC_BSPC, TT(2)),
	[1] = LAYOUT(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_VOLU, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_EXLM, KC_PLUS, KC_LCBR, KC_RCBR, KC_DLR, KC_TILD, KC_TRNS, KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_AT, KC_EQL, KC_LPRN, KC_RPRN, KC_PERC, KC_GRV, KC_TRNS, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(0), KC_HASH, KC_ASTR, KC_LBRC, KC_RBRC, KC_AMPR, KC_CIRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, TT(2)),
	[2] = LAYOUT(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_PAUS, KC_DOT, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, RGB_MOD, KC_TRNS, TO(0), KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO, TT(1), KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS)
};

void keyboard_post_init_user(void) {
   rgblight_sethsv_noeeprom(HSV_TEAL);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state, _SYM)) {
        rgblight_sethsv_noeeprom(HSV_GOLD);
    } else if (layer_state_cmp(state, _NUM)) {
        rgblight_sethsv_noeeprom(HSV_PURPLE);
    } else {
        rgblight_sethsv_noeeprom(HSV_TEAL);
    }
    return state;
}
