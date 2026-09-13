/*
STATE: C_EXACT
SYMBOL: FUN_0023b9d8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
/* ROLE: readBufBeginGet__FP7ReadBufPPUc: returns the read buffer's fill
   position and writes the computed begin offset through the second argument.
   Name recovered from config/us/recovered_names.json. */
s32 FUN_0023b9d8(s32 *arg0, s32 *arg1) {
    s32 *p = (s32 *)((u8 *)arg0 + 0x50000);
    s32 q;

    if (p[1] != 0) {
        q = (p[0] - p[1] + p[2]) % p[2];
        *arg1 = (s32)arg0 + q;
    }
    return p[1];
}

extern s32 func_0023B9D8(s32 *arg0, s32 *arg1) __attribute__((alias("FUN_0023b9d8")));
extern s32 readBufBeginGet__FP7ReadBufPPUc(s32 *arg0, s32 *arg1) __attribute__((alias("FUN_0023b9d8")));
