// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Add Hands Down Gold (Neu-TX) as alpha layer
#define MIRYOKU_LAYER_BASE \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,               &kp SEMI,          &kp COMMA,          &kp DOT,           &kp SLASH,         &kp BSLH,           \
U_MT(LCTRL, R),    U_MT(LALT, S),     U_MT(LGUI, N),     U_MT(LSHFT, D),    &kp B,               &kp APOS,          U_MT(LSHFT, A),     U_MT(LGUI, E),     U_MT(LALT, I),     U_MT(LCTRL, H),     \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,               &kp MINUS,         &kp U,              &kp O,             U_MT(RALT, Y),     U_LT(U_BUTTON, K),  \
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),U_LT(U_NAV, T),    U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC), U_NP,              U_NP

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 6 7
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 7 8

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 21 22
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 22 23
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 27 28

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 31 32
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 33 34