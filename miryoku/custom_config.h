// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Add Hands Down Gold (Neu-TX) as alpha layer
#define MIRYOKU_LAYER_BASE \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,             &kp SEMI,          &kp COMMA,         &kp DOT,           &kp SLASH,         &kp BSLH,           \
U_MT(LGUI, R),     U_MT(LALT, S),     U_MT(LCTRL, N),    U_MT(LSHFT, D),    &kp B,             &kp AMPS,          U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, H),      \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,             &kp MINUS,         &kp U,             &kp O,             U_MT(RALT, Y),     U_LT(U_BUTTON, K),  \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, T),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// Layout mapping and miryoku combos
#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp Z  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX   \
XXX    K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX   \
XXX    K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp Q \
                 K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40
