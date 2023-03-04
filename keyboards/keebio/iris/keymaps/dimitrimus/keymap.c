#include QMK_KEYBOARD_H

// layout 0
#define RSFT_PLS RSFT_T(KC_EQL)
#define LSFT_MNS LSFT_T(KC_MINS)
#define L1_MINS  LT(1,KC_MINS)
#define L2_ENT   LT(2,KC_ENT)
#define CTR_ESC  LCTL_T(KC_ESC)
#define ALT_EQL  LALT_T(KC_EQL)

// layout 1 and 2
#define CD_LEFT  LGUI(KC_LEFT)
#define CD_RGHT  LGUI(KC_RGHT)
#define SH_1 LSFT(KC_1)
#define SH_4 LSFT(KC_4)
#define SH_LBRC LSFT(KC_LBRC)
#define SH_RBRC LSFT(KC_RBRC)
#define SH_5 LSFT(KC_5)
#define SH_6 LSFT(KC_6)
#define SH_9 LSFT(KC_9)
#define SH_0 LSFT(KC_0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       CTR_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_F12,           KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LGUI, L1_MINS, ALT_EQL,                   KC_SPC,  L2_ENT,  KC_BSPC
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [1] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_GRV,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_WH_D, KC_BTN1, KC_MS_U, KC_BTN2, KC_PGUP, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                               KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC_PGDN, KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_F12,           KC_MPLY, SH_6,    KC_LBRC, KC_RBRC, SH_9,    SH_0,    KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LGUI, KC_NO,   ALT_EQL,                   KC_SPC,  KC_BTN1, KC_DEL
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [2] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TILD, RGB_TOG, KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_VOLU, KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                               KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_F12,           KC_MPLY, SH_6,    KC_LBRC, KC_RBRC, SH_9,    SH_0,    KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LGUI, KC_BTN1, ALT_EQL,                   KC_SPC,  KC_NO,   KC_DEL
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    )
};
