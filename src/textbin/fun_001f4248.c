/*
STATE: C_EXACT
SYMBOL: FUN_001f4248
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern s32 D_0015F434;
extern s32 D_0015F618[];
extern s32 func_001F39D0();
extern s32 func_001FB368();

void FUN_001f4248(void) {
    if (D_0015F618[0] == 0) {
        register s32 v __asm__("v0");
        func_001FB368();
        v = 0x7F;
        D_0015F434 = v;
        func_001F39D0();
    }
}

extern void func_001F4248(void) __attribute__((alias("FUN_001f4248")));
