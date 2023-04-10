// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Add Hands Down Gold (Neu-TX) as alpha layer
#define MIRYOKU_LAYER_BASE \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,               &kp SEMI,          &kp COMMA,          &kp DOT,           &kp SLASH,         &kp BSLH,           \
U_MT(LCTRL, R),    U_MT(LALT, S),     U_MT(LGUI, N),     U_MT(LSHFT, D),    &kp B,               &kp APOS,          U_MT(LSHFT, A),     U_MT(LGUI, E),     U_MT(LALT, I),     U_MT(LCTRL, H),     \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,               &kp MINUS,         &kp U,              &kp O,             U_MT(RALT, Y),     U_LT(U_BUTTON, K),  \
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),U_LT(U_NAV, T),    U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC), U_NP,              U_NP

#define MIRYOKU_KLUDGE_TOPROWCOMBOS
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS
#define MIRYOKU_KLUDGE_THUMBCOMBOS
#define MIRYOKU_KLUDGE_MOUSEKEYSPR