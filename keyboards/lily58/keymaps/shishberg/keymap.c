#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

static bool layer_lock = false;

enum layer_number {
  _COLEMAK = 0,
  _QWERTY,
  _SYM,
  _NUM,
  _GAM
};

enum custom_keycodes {
  K_COLEMAK = SAFE_RANGE,
  K_QWERTY,
  K_SYM,
  K_NUM,
  K_GAM,
  K_XX,
};

#define L_SYM TT(_SYM)
#define L_NUM TT(_NUM)
#define L_GAM TT(_GAM)
#define L_XX K_XX

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
    KC_ESC, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_NO, /* */ KC_GRV, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_EQL,
    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, /* */ KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_MINS,
    KC_LSFT, LCTL_T(KC_A), LALT_T(KC_R), LSFT_T(KC_S), LGUI_T(KC_T), KC_G, /* */ KC_M, RGUI_T(KC_N), RSFT_T(KC_E), RALT_T(KC_I), RCTL_T(KC_O), KC_QUOT,
    KC_LGUI, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_TAB, /* */ KC_NO, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
    KC_LALT, KC_LCTL, L_NUM, KC_SPC, /* */ KC_ENT, KC_BSPC, L_SYM, KC_DEL),
	[1] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, /* */ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS,
    KC_TRNS, LCTL_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LGUI_T(KC_F), KC_G, /* */ KC_H, RGUI_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RCTL_T(KC_SCLN), KC_TRNS,
    KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS, /* */ KC_TRNS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /* */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(
    KC_TRNS, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, /* */ KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_NO,
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,  /* */ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
    KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,  /* */ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
    KC_TRNS, TG(_GAM), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_PERC, KC_HASH, KC_LBRC, KC_RBRC, KC_BSLS, KC_PIPE,
    KC_TRNS, L_XX, L_XX, KC_TRNS, /* */ KC_TRNS, KC_TRNS, L_XX, KC_TRNS),
	[3] = LAYOUT(
    KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,  /* */ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
    KC_TRNS, KC_VOLU, KC_HOME, KC_UP, KC_END, KC_PGUP, /* */ KC_NO, KC_7, KC_8, KC_9, KC_LCBR, KC_RCBR,
    KC_TRNS, KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, /* */ KC_0, KC_4, KC_5, KC_6, KC_LBRC, KC_RBRC,
    KC_TRNS, KC_MUTE, KC_MSTP, KC_MPRV, KC_MNXT, KC_MPLY, KC_PSCR, /* */ KC_TRNS, KC_0, KC_1, KC_2, KC_3, KC_DOT, KC_NO,
    DF(1), L_XX, L_XX, KC_TRNS, /* */ KC_TRNS, KC_TRNS, KC_0, DF(0)),
	[4] = LAYOUT(
    KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, /* */ KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /* */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /* */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F2, /* */ KC_F1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, L_NUM, KC_TRNS, /* */ KC_TRNS, KC_TRNS, L_SYM, KC_TRNS)
};
// layer_state_t layer_state_set_user(layer_state_t state) {
// 	return state & (~1);
//   //return state; //update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
//const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
void set_timelog(void);
const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    //oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
  return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
    set_timelog();
#endif
    switch (keycode) {
      case K_SYM:
      case K_NUM:
      case K_GAM:
        layer_on(keycode - K_COLEMAK);
        layer_lock = true;
        break;
      case K_XX:
        //layer_clear();
        layer_lock = false;
        break;
      default:
        layer_lock = false;
        break;
    }
  } else {
    switch (keycode) {
      case K_SYM:
      case K_NUM:
      case K_GAM:
        if (!layer_lock) {
          layer_off(keycode - K_COLEMAK);
        }
        break;
      case K_XX:
        if (!layer_lock) {
          layer_clear();
        }
        break;
    }
    layer_lock = false;
  }
  return true;
}

// layer_state_t layer_state_set_user(layer_state_t state) {
const char *read_layer_state(void) {
  static char layers[16];
  if (IS_LAYER_ON_STATE(default_layer_state, _COLEMAK)) {
    layers[0] = 'C'; layers[1] = 'o'; layers[2] = 'l';
  } else if (IS_LAYER_ON_STATE(default_layer_state, _QWERTY)) {
    layers[0] = 'Q'; layers[1] = 'w'; layers[2] = 'e';
  } else {
    layers[0] = '?'; layers[1] = '?'; layers[2] = '?';
  }
  layers[3] = ' ';

  if (IS_LAYER_ON(_NUM)) {
    layers[4] = 'N'; layers[5] = 'u'; layers[6] = 'm';
  } else {
    layers[4] = ' '; layers[5] = ' '; layers[6] = ' ';
  }
  layers[7] = ' ';

  if (IS_LAYER_ON(_SYM)) {
    layers[8] = 'S'; layers[9] = 'y'; layers[10] = 'm';
  } else {
    layers[8] = ' '; layers[9] = ' '; layers[10] = ' ';
  }
  layers[11] = ' ';

  if (IS_LAYER_ON(_GAM)) {
    layers[12] = 'G'; layers[13] = 'a'; layers[14] = 'm';
  } else {
    layers[12] = ' '; layers[13] = ' '; layers[14] = ' ';
  }

  layers[15] = '\0';
  return layers;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    // lastIndex = index;
    // if (index == 0) {
      if (clockwise) {
        if (IS_LAYER_ON(_SYM)) {
          tap_code(KC_RIGHT);
        } else if (IS_LAYER_ON(_NUM)) {
          tap_code(KC_PGDN);
        } else {
          tap_code(KC_DOWN);
        }
      } else {
        // counter--;
        if (IS_LAYER_ON(_SYM)) {
          tap_code(KC_LEFT);
        } else if (IS_LAYER_ON(_NUM)) {
          tap_code(KC_PGUP);
        } else {
          tap_code(KC_UP);
        }
      }
    // }
    return true;
}
