#include "types.h"
struct Str19 { char c[19]; };
extern struct Str19 D_001E7AA8;
extern char D_0019A440[];
extern u32 strlen(const char *);
extern char *strcpy(char *, const char *);
void FUN_001ff658(char *s) {
    if (strlen(s) < 0x50) {
        *(struct Str19 *)D_0019A440 = D_001E7AA8;
    }
    strcpy(D_0019A440, s);
}

extern __typeof__(FUN_001ff658) func_001FF658 __attribute__((alias("FUN_001ff658")));
