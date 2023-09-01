// Keep sticky keys active for a long time so they effectively do not time out
#define STICKY_KEY_TIMEOUT 60000

// LAYERS
#define BASE 0
#define NAV 1
#define NUM 2
#define ADJUST 3

// CUSTOM KEY CODES
#define XXX &none
#define ___ &trans

#define SK(KEY) &nk KEY KEY
#define C_ESC  &mt LCTRL ESC
#define BS_NAV &lt NAV BSPC
#define ENTNUM &lt NUM ENTER
#define TABNUM &lt NUM TAB

#define MEH        LC(LS(LALT))
#define C_PGUP &kp LC(PG_UP)
#define C_PGDN &kp LC(PG_DN)
#define COMNT  &kp LC(SE_QUOT)
#define DUPLIC &kp LC(LS(D))
#define YANK   &kp LC(INS)
#define PASTE  &kp LS(INS)
#define KUT    &kp LC(X)

