#include "types.h"
extern s32 D_0015EEB0;
extern s32 D_00161280;
extern void (*D_001A0438[])(void);
void FUN_00208840(void) {
    s32 state = D_0015EEB0;

    D_001A0438[state]();
    D_00161280++;
    if (D_0015EEB0 != state) {
        D_00161280 = 0;
    }
}

extern __typeof__(FUN_00208840) func_00208840 __attribute__((alias("FUN_00208840")));
