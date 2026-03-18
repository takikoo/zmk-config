// LAYERS
#define BASE        0                   // QWERTY
#define CLMDH       1                   // Colemak-DH, no home row mods
#define GAME        2                   // Gaming layer, no home row mods
#define LOWER       3                   // Lower layer
#define RAISE       4                   // Raise layer
#define NAV         5                   // Navigation layer
#define NUM         6                   // Numpad layer
#define WINDOW      7                   // Window Management
#define FUNC        8                   // Function keys
#define ADJUST      9                   // Adjust layer

#define BT_CH_0     &bt BT_SEL 0
#define BT_CH_1     &bt BT_SEL 1
#define BT_CH_2     &bt BT_SEL 2
#define BT_CH_3     &bt BT_SEL 3
#define BT_CH_4     &bt BT_SEL 4
#define GO_BLE      &out OUT_BLE
#define GO_USB      &out OUT_USB

// CUSTOM KEY CODES
#define XXX         &none
#define ___         &trans
#define MEH         LC(LS(LALT))        // Left Alt + Ctrl
#define TAB_PREV    &kp LC(PG_UP)       // Previous tab
#define TAB_NEXT    &kp LC(PG_DN)       // Next tab
#define CLeft       &kp LC(LEFT)        // CTRL + Left arrow
#define CRight      &kp LC(RIGHT)       // CTRL + Right arrow
#define NEXT        &kp LC(K)           // Next occurance
#define PREV        &kp LC(LS(K))       // Previous occurance
#define COMNT       &kp LG(LS(N7))      // Comment line
#define DUPLIC      &kp LC(LS(D))       // Duplicate line
#define DLINE       &kp LC(D)           // Delete line
#define YANK        &kp LC(INS)
#define PASTE       &kp LS(INS)
#define KUT         &kp LC(X)
#define SEL_A       &kp LC(A)
#define CLOSE       &kp LA(F4)          // ALT + F4
#define CAD         &kp LC(LA(DEL))     // CTRL + ALT + DEL

// WINDOW MANAGEMENT
#define W_TL        &m_win_tl           // Top Left
#define W_T         &m_win_t            // Top
#define W_TR        &m_win_tr           // Top Right
#define W_L         &m_win_l            // Left Half
#define W_MAX       &m_win_max          // Maximize
#define W_R         &m_win_r            // Right Half
#define W_BL        &m_win_bl           // Bottom Left
#define W_B         &m_win_b            // Bottom
#define W_BR        &m_win_br           // Bottom Right
#define W_NXT_MON   &m_win_nxt_mon      // Next Monitor
#define W_PRV_MON   &m_win_prv_mon      // Prev Monitor

#define TONAV       &to NAV
#define TOBASE      &to BASE
#define TOBASE_MAC  &to BASE

#define C_ESC       &mt LCTRL ESC

#define BS_LOW      &lt LOWER BSPC
#define TABNUM      &lt NUM TAB
#define SPCNAV      &lt NAV SPACE
#define ENT_RS      &lt RAISE ENTER

