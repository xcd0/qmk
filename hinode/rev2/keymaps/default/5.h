
#include "keymap_jp.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
   * ,-------------------------------------------------------.  ,----------------------------------------------------------.
   * | GUI  | ESC  |   1  |   2  |   3  |   4  |   5  |  <   |  |   >  |   6  |   7  |   8  |   9  |   0   |  -    | Delete|
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * | Alt  | Tab  |   Q  |   W  |   E  |   R  |   T  |  (   |  |   )  |   Y  |   U  |   I  |   O  |   P   |  @    | BkSp  |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |Insert|Symbol|   A  |   S  |   D  |   F  |   G  |  {   |  |   }  |   H  |   J  |   K  |   L  |   ;   |  :    | Enter |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * | HOME |      |   Z  |   X  |   C  |   V  |   B  |  [   |  |   ]  |   N  |   M  |   ,  |   .  |   /   |  \    |  END  |
   * `--------------------+------+------+------+------+------|  |------+------+------+------+------+-----------------------'
   *                      | EISU | Ctrl |Space |Shift | LEFT |  |RIGHT | BkSp |Enter |Delete| KANA |
   *                      `----------------------------------'  `----------------------------------'
   */

  [_QWERTY] = LAYOUT( \
      JP_LALT, JP_ESC,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    JP_LT,    /**/   JP_GT,   JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_MINS, KC_DEL,  \
      JP_LGUI, JP_TAB,  JP_Q,    JP_W,    JP_E,    JP_R,    JP_T,    JP_LPRN,  /**/   JP_RPRN, JP_Y,    JP_U,    JP_I,    JP_O,    JP_P,    JP_AT,   KC_BSPC, \
      JP_INS,  SYMBOL,  JP_A,    JP_S,    JP_D,    JP_F,    JP_G,    JP_LBRC,  /**/   JP_RBRC, JP_H,    JP_J,    JP_K,    JP_L,    JP_SCLN, JP_COLN, KC_ENT,  \
      JP_HOME, _______, JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    JP_LCBR,  /**/   JP_RCBR, JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SLSH, JP_BSLS, JP_END,  \
                                 KC_MHEN, JP_LCTL, JP_LSFT, JP_SPC,  LEFT,     /**/   RIGHT,   JP_BSPC, JP_ENT,  JP_DEL,  KC_HENK                             \
      ),

  /* Ystrp
   * ,-------------------------------------------------------.  ,----------------------------------------------------------.
   * | Alt  | ESC  |   1  |   2  |   3  |   4  |   5  |  <   |  |   >  |   6  |   7  |   8  |   9  |   0   |  -    | Delete|
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * | GUI  | Tab  |   Q  |   W  |   D  |   F  |   G  |  (   |  |   )  |   Y  |   S  |   T  |   R  |   P   |  @    | BkSp  |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |Insert|Symbol|   A  |   O  |   E  |   U  |   I  |  {   |  |   }  |   H  |   J  |   K  |   L  |   ;   |  :    | Enter |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * | HOME |      |   Z  |   X  |   C  |   V  |   B  |  [   |  |   ]  |   N  |   M  |   ,  |   .  |   /   |  \    |  END  |
   * `--------------------+------+------+------+------+------|  |------+------+------+------+------+-----------------------'
   *                      | EISU | Ctrl |Space |Shift | LEFT |  |RIGHT | BkSp |Enter |Delete| KANA |
   *                      `----------------------------------'  `----------------------------------'
   */

  [_YSTRP] = LAYOUT( \
      JP_LALT, JP_ESC,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    JP_LT,    /**/   JP_GT,   JP_6,    JP_7,    JP_8,    JP_9,   JP_0,    JP_MINS, KC_DEL,  \
      JP_LGUI, JP_TAB,  JP_Q,    JP_W,    JP_D,    JP_F,    JP_G,    JP_LPRN,  /**/   JP_RPRN, JP_Y,    JP_S,    JP_T,    JP_R,   JP_P,    JP_AT,   KC_BSPC, \
      JP_INS,  SYMBOL,  JP_A,    JP_O,    JP_E,    JP_U,    JP_I,    JP_LBRC,  /**/   JP_RBRC, JP_H,    JP_J,    JP_K,    JP_L,   JP_SCLN, JP_COLN, KC_ENT,  \
      JP_HOME, _______, JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    JP_LCBR,  /**/   JP_RCBR, JP_N,    JP_M,    JP_COMM, JP_DOT, JP_SLSH, JP_BSLS, JP_END,  \
                                 KC_MHEN, JP_LCTL, JP_LSFT, JP_SPC,  LEFT,     /**/   RIGHT,   JP_BSPC, JP_ENT,  JP_DEL,  KC_HENK                             \
      ),

  /* LEFT
   * ,-------------------------------------------------------.  ,---------------------------------------------------------.
   * |      |      |  F1  |  F2  |  F3  |  F4  |  F5  |      |  |      |  F6  |  F7  |  F8  |  F9  |  F10  |  F11  |  F12  |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |      |      |  |      |      |      |      |      |       |       |       |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |Qwerty|EEPROM|  |      | Left | Down |  Up  |Right |       |       |       |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |Ystrp |Reset |  |      |      |      |      |      |       |       |       |
   * `--------------------+------+------+------+------+------|  |------+------+------+------+------+-----------------------'
   *                      |      | Ctrl |Space |Shift |      |  |      | BkSp |Enter |Delete|      |
   *                      `----------------------------------'  `----------------------------------'
   */

  [_LEFT] = LAYOUT( \
      _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, /**/ _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
      _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, QWERTY,  EEP_RST, /**/ _______, JP_LEFT, JP_DOWN, JP_UP,   JP_RGHT, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, YSTRP,   RESET,   /**/ _______, _______, _______, _______, _______, _______, _______, _______, \
                                 _______, JP_LCTL, JP_SPC,  JP_LSFT, _______, /**/ _______, _______, _______, _______, _______                             \
      ),

  /* Right
   * ,-------------------------------------------------------.  ,---------------------------------------------------------.
   * |      |      |  F1  |  F2  |  F3  |  F4  |  F5  |      |  |      |  F6  |  F7  |  F8  |  F9  |  F10  |  F11  |  F12  |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |      |      |  |      |      | M.lc | M.mc | M.rc | wh.u  |       |       |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |Qwerty|EEPROM|  |      | M.l  | M.d  | M.u  | M.r  | wh.d  |       |       |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |Ystrp |Reset |  |      |      |      |      |      |       |       |       |
   * `--------------------+------+------+------+------+------|  |------+------+------+------+------+-----------------------'
   *                      |      | Ctrl |Space |Shift |      |  |      | BkSp |Enter |Delete|      |
   *                      `----------------------------------'  `----------------------------------'
   */

  [_RIGHT] = LAYOUT( \
      _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, /**/ _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
      _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, JP_BTN1, JP_BTN3, JP_BTN2, JP_WH_U, _______, _______, \
      _______, _______, _______, _______, _______, _______, QWERTY,  EEP_RST, /**/ _______, JP_MS_L, JP_MS_D, JP_MS_U, JP_MS_R, JP_WH_D, _______, _______, \
      _______, _______, _______, _______, _______, _______, YSTRP,   RESET,   /**/ _______, JP_LEFT, JP_DOWN, JP_UP,   JP_RGHT, _______, _______, _______, \
                                 _______, JP_LCTL, JP_SPC,  JP_LSFT, _______, /**/ _______, _______, _______, _______, _______                             \
      ),

  /* Symbol
   * ,-------------------------------------------------------.  ,-------------------------------------------------------.
   * | Alt  | ESC  |  1   |  2   |  3   |  4   |  5   |      |  |      |  6   |  7   |  8   |  9   |  0   |      |      |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+------+------+------|
   * | GUI  | TAB  |      |  _   |  "   |  '   |  `   |      |  |      |  &   |  (   |  <   |  {   |  [   |      |      |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+------+------+------|
   * |Insert|      |  +   |  -   |  *   |  =   |  :   |      |  |      |  |   |  )   |  >   |  }   |  ]   |      |      |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+------+------+------|
   * | HOME |      |  !   |  ?   |  #   |  $   |  %   |      |  |      |      |  @   |  ^   |  ,   |      |      | END  |
   * `--------------------+------+------+------+------+------|  |------+------+------+------+------+--------------------'
   *                      | EISU | Ctrl |Space |Shift | LEFT |  |RIGHT | BkSp |Enter |Delete| KANA |
   *                      `----------------------------------'  `----------------------------------'
   */

  [_SYMBOL] = LAYOUT( \
      JP_LALT, JP_ESC,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    _______, /**/ _______, JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    _______, _______, \
      JP_LGUI, JP_TAB,  JP_TILD, JP_UNDS, JP_DQT,  JP_QUOT, JP_GRV,  _______, /**/ _______, JP_AMPR, JP_LPRN, JP_LT,   JP_LCBR, JP_LBRC, JP_BSPC, _______, \
      JP_INS,  _______, JP_PLUS, JP_MINS, JP_ASTR, JP_EQL,  JP_COLN, _______, /**/ _______, JP_PIPE, JP_RPRN, JP_GT,   JP_RCBR, JP_RBRC, JP_ENT,  _______, \
      JP_HOME, _______, JP_EXLM, JP_QUES, JP_HASH, JP_DLR,  JP_PERC, _______, /**/ _______, _______, JP_AT,   JP_CIRC, JP_COMM, _______, _______, JP_END,  \
                                 EISU,    JP_LCTL, JP_SPC,  JP_LSFT, LEFT,    /**/ RIGHT,   JP_BSPC, JP_ENT,  JP_DEL,  KANA                                \
      ),

  /* Adjust
   * ,-------------------------------------------------------.  ,----------------------------------------------------------.
   * |      |      |      |      |      |      |      |      |  |      |      |      |      |      |       |       |       |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |      |      |  |      |      |      |      |      |       |       |       |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |      |      |  |      |      |      |      |      |       |       |       |
   * |------+------+------+------+------+------+------+------|  |------+------+------+------+------+-------+-------+-------|
   * |      |      |      |      |      |      |      |      |  |      |      |      |      |      |       |       |       |
   * `--------------------+------+------+------+------+------|  |------+------+------+------+------+-----------------------'
   *                      |      |      |      |      |      |  |      |      |      |      |      |
   *                      `----------------------------------'  `----------------------------------'
   */

  [_ADJUST] = LAYOUT( \
      _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______, _______, \
                                 _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______                             \
      )
};

