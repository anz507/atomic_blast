#include QMK_KEYBOARD_H

#define KC_ENC_SW KC_BTN1

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
      case KC_CAPS:  // Replace with your custom key if needed
          if (record->event.pressed) {
              // Turn Caps Lock ON
              tap_code(KC_CAPS);
          } else {
              // Turn Caps Lock OFF when released
              tap_code(KC_CAPS);
          }
          return false;  // Skip normal processing
          break;
      case KC_BTN1:
          if (record->event.pressed) {
              tap_code(KC_MUTE);  // Mute/unmute audio
          }
          return false;  // Skip normal processing
          break;
  }
  return true;  // Continue normal processing for other keys
}

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (get_mods() & MOD_MASK_CTRL) {  // If Ctrl is held
      if (clockwise) {
          tap_code(QK_MOUSE_WHEEL_UP);  // Mouse Scroll Up
      } else {
          tap_code(QK_MOUSE_WHEEL_DOWN);  // Mouse Scroll Down
      }
  } else if (get_mods() & MOD_MASK_ALT) {  // If Ctrl is held
      if (clockwise) {
          tap_code(QK_MOUSE_WHEEL_RIGHT);  // Mouse Scroll Right
      } else {
          tap_code(QK_MOUSE_WHEEL_LEFT);  // Mouse Scroll Left
      }
  } else {  // Normal Volume Control
      if (clockwise) {
          tap_code(KC_VOLU);  // Volume Up
      } else {
          tap_code(KC_VOLD);  // Volume Down
      }
  }
  return false;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return state;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_atomic_blast(
      KC_ENC_SW, KC_CAPS,        KC_MINS, KC_EQL, KC_LBRC, KC_RBRC,                                     KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
      KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
      KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, MO(1),       KC_SPC,       MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),
    [1] = LAYOUT_atomic_blast(
      _______, _______, _______, _______, _______, _______, _______,
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_BSPC,
      KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR, KC_PIPE,
      _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,  _______,
      _______, _______, _______, _______,  _______, _______, _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
    ),
    [2] = LAYOUT_atomic_blast(
      _______, _______, _______, _______, _______, _______, _______,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
      KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
      _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
      _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
    )
};