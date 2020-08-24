#include QMK_KEYBOARD_H


#define _BASE 0
#define _NAV 1
#define _IJ 2
#define _AUDIO 3
#define _F 4

#define ASG(kc) (A(S(G(kc))))
#define AG(kc) (A(G(kc)))

#define TAPPING_TOGGLE 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_6x6(

     KC_ESC  , TT(_IJ), TT(_F) , KC_LCBR, KC_RCBR, KC_LPRN,                         KC_RPRN, KC_LBRC, KC_RBRC, _______, _______,TO(_BASE) ,
     KC_ESC  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                         KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,KC_MINUS,
     KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                         KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,KC_EQUAL,
     KC_LCTL , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                         KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN,KC_QUOT,
     _______ , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                         KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,KC_BSLASH,
                        G(KC_LBRC), G(KC_RBRC),                                                       KC_GRV , OSL(_AUDIO),
                                         KC_BSPC, KC_LCMD,                              KC_ENT , KC_SPC,
                                            KC_LSFT, OSL(_IJ),                     OSL(_IJ), MO(_NAV),
                                         KC_LALT , MO(_NAV),                            _______, KC_LSFT
  ),

  [_NAV] = LAYOUT_6x6(
     _______,_______,_______,_______,_______   ,_______,                                   _______,_______,_______,_______,_______,TO(_BASE),
     _______,_______,_______,_______,_______   ,_______,                                   _______,KC_LBRC,KC_RBRC,_______,_______,_______,
     _______,_______,_______,KC_LCBR,KC_RCBR   ,_______,                                   KC_LCBR,KC_LPRN,KC_RPRN,KC_RCBR,_______,_______,
     _______,KC_LBRC,KC_RBRC,KC_LPRN,KC_RPRN   ,_______,                                   KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,
     _______,_______,_______,_______,G(S(KC_V)),_______,                                   KC_HOME,KC_PGDN,KC_PGUP,KC_END ,_______,_______,
                     _______,_______,                                                                      _______,_______,
                                               KC_DEL ,_______,                   _______,_______,
                                                       _______,_______,   _______,_______,
                                               _______,_______,                   _______,_______
  ),
  
  [_IJ] = LAYOUT_6x6(
     _______,_______,_______,_______,_______ ,_______,                                   _______  ,_______  ,_______ ,_______  ,_______,TO(_BASE),
     _______,_______,_______,_______,_______ ,_______,                                   KC_F6    ,KC_F7    ,KC_F8   ,_______  ,_______,_______,
     _______,_______,_______,_______,AG(KC_R),_______,                                   KC_F2    ,A(KC_F7) ,A(KC_F1),ASG(KC_O),_______,_______,
     _______,_______,_______,_______,AG(KC_F),_______,                                   ASG(KC_H),ASG(KC_J),_______ ,_______  ,_______,_______,
     _______,_______,_______,_______,_______ ,_______,                                   ASG(KC_N),ASG(KC_M),_______ ,_______  ,_______,_______,
                     _______,_______,                                                                        _______ ,_______  ,
                                              _______,_______,                   _______,_______,
                                                      _______,_______,   _______,_______,
                                              _______,_______,                   _______,_______
  ),
  
  [_AUDIO] = LAYOUT_6x6(
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,TO(_BASE),
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,AG(KC_F12),
                     _______,_______,                                                                   _______,_______,
                                             KC_VOLD,KC_VOLU,                   _______,_______,
                                                     KC_MPLY,_______,   _______,_______,
                                             KC_MPRV,KC_MNXT,                   _______,_______
  ),

  [_F] = LAYOUT_6x6(
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,TO(_BASE),
     _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                   KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,KC_F12 ,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
                     _______,_______,                                                                   _______,_______,
                                             _______,_______,                   _______,_______,
                                                     _______,_______,   _______,_______,
                                             _______,_______,                   _______,_______
  ), 

/*
[_] = LAYOUT_6x6(
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,TO(_BASE),
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
                     _______,_______,                                                                   _______,_______,
                                             _______,_______,                   _______,_______,
                                                     _______,_______,   _______,_______,
                                             _______,_______,                   _______,_______
  ),
*/
};

