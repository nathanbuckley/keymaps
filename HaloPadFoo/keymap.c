/* 
 *
 */
#include QMK_KEYBOARD_H

#define l1_LCTRL LT(1, KC_LCTL)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_macro( /* Base */
    KC_4,   KC_3,     KC_2,     KC_1,     KC_ESC, \
    KC_F,   KC_E,     KC_W,     KC_Q,     KC_R, \
    KC_SPC, KC_D,     KC_S,     KC_A,     l1_LCTRL \
  ),

   [1] = LAYOUT_macro(
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO, \
    KC_NO,   KC_NO,    KC_UP,    KC_NO,    KC_NO, \
    KC_NO,   KC_RIGHT,  KC_DOWN,  KC_LEFT, KC_NO  \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}