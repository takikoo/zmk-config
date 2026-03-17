/* Homerow mods */
#define QUICK_TAP_MS 175

/* left-hand HRMs */
ZMK_BEHAVIOR(hml, hold_tap,
    flavor = "balanced";
    tapping-term-ms = <280>;
    quick-tap-ms = <QUICK_TAP_MS>;                // repeat on tap-into-hold
    require-prior-idle-ms = <150>;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <KEYS_R THUMBS>;
    hold-trigger-on-release;             // delay positional check until key-release
)

/* right-hand HRMs */
ZMK_BEHAVIOR(hmr, hold_tap,
    flavor = "balanced";
    tapping-term-ms = <280>;
    quick-tap-ms = <QUICK_TAP_MS>;                // repeat on tap-into-hold
    require-prior-idle-ms = <150>;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <KEYS_L THUMBS>;
    hold-trigger-on-release;             // delay positional check until key-release
)

/* Left homerow chord */
ZMK_BEHAVIOR(hml_repeat, hold_tap,
    flavor = "balanced";
    tapping-term-ms = <280>;
    quick-tap-ms = <QUICK_TAP_MS>;                // repeat on tap-into-hold
    require-prior-idle-ms = <150>;
    bindings = <&kp>, <&key_repeat>;
    hold-trigger-key-positions = <KEYS_R THUMBS>;
    hold-trigger-on-release;             // delay positional check until key-release
)

// HOMEROW
#define HRM_A  &hml LGUI A
#define HRM_S  &hml LALT S
#define HRM_D  &hml LCTRL D
#define HRM_F  &hml LSHFT F
#define HRM_J  &hmr RSHFT J
#define HRM_K  &hmr LCTRL K
#define HRM_L  &hmr LALT L
#define HRM_OE &hmr LGUI SE_ODIA

