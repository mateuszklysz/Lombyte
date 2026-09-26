#include "types.h"
char *FindSubstring(char *s, char *sub) {
    s32 i;

    if (*s == 0) {
        return *sub == 0 ? s : 0;
    }
    do {
        i = 0;
        while (1) {
            if (sub[i] == 0) {
                return s;
            }
            if (sub[i] != s[i]) {
                break;
            }
            i++;
        }
        s++;
    } while (*s != 0);
    return 0;
}
