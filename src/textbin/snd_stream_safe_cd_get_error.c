/*
STATE: C_EXACT
SYMBOL: FUN_0012eef0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern u8 D_00137B00[];
extern s32 D_0015EC8C;
extern s32 sceCdGetError();
s32 FUN_0012eef0(s32 arg0) {
    u8 *p;
    if (D_0015EC8C == 0) {
        return sceCdGetError();
    }
    p = D_00137B00;
    __asm__ __volatile__("" : "+r"(p));
    return *(volatile s32 *)(p + 0x10);
}

extern __typeof__(FUN_0012eef0) func_0012EEF0 __attribute__((alias("FUN_0012eef0")));
