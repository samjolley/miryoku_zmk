// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_HANDSDOWNGOLD

/*
* Base Layer: Hands Down Gold (Neu-tx)
*
* ,----------------------------------.                              ,----------------------------------.
* |   J  |   G  |   M  |   P  |   V  |                              |  ; : |  , < |  . > | / ?  | \ |  |
* |------+------+------+------+------|                              |------+------+------+------+------|
* |   R  |   S  |   N  |   D  |   B  |                              |   &  |   A  |   E  |   I  |   H  | 
* |------+------+------+------+------|                              |------+------+------+------+------|
* |   X  |   F  |   L  |   C  |   W  |                              | - _  |   U  |   O  |   Y  |   K  |
* `------+------+------+------|------.                              ,------|------+------+------+------'
*               |PGUPDN|Bckspc|  T   |                              |Enter |Space |Vol   |
*               |Esc   |SYM   | NAV  |                              |SYM   |NAV   |Delete|
*               |NUM   |      |      |                              |      |      |FUN   |
*               `--------------------'                              `--------------------'
*
*   Encoder Left: Up <-> Down
*   Encoder Right: Left <-> Right
*/

&kp J,             &kp G,             &kp M,             &kp P,             &kp V,             &kp SEMI,          &kp COMMA,         &kp DOT,           &kp SLASH,         &kp BSLH,            \
U_MT(LCTRL, R),    U_MT(LALT, S),     U_MT(LGUI, N),     U_MT(LSHFT, D),    &kp B,             &kp AMPS,          U_MT(LSHFT, A),    U_MT(LGUI, E),    U_MT(LALT, I),      U_MT(LCTRL, H),      \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,             &kp MINUS,         &kp U,             &kp O,            U_MT(RALT, Y),      U_LT(U_BUTTON, K),   \
                                      U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, T),    U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),