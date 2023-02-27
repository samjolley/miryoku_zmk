// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

  combos {
    #include "combos.dtsi"
  };

#define MIRYOKU_LAYER_BASE \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,             &kp SEMI,          &kp COMMA,         &kp DOT,           &kp SLASH,         &kp BSLH,           \
U_MT(LGUI, R),     U_MT(LALT, S),     U_MT(LCTRL, N),    U_MT(LSHFT, D),    &kp B,             &kp AMPS,          U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, H),      \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,             &kp MINUS,         &kp U,             &kp O,             U_MT(RALT, Y),     U_LT(U_BUTTON, K),  \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, T),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP