/*
STATE: C_EXACT
SYMBOL: FUN_001fdca0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: Help_FindIndex: recovered function `Help_FindIndex` starts here; this unit covers only its beginning (recovered_names.json fragment). */

#include "types.h"
struct M2c_D_0015F6A0 {
    u8 pad_0[0x4];
    s32 unk4;
};

struct M2c_D_001996D0 {
    u8 pad_0[0x2C];
    s32 unk2C;
};

extern struct M2c_D_001996D0 D_001996D0;
s32 FUN_001fdca0(s32 arg0) {
    s32 var_5_9;
    s32 var_6_4;
    register struct M2c_D_0015F6A0 *p __asm__("v1");
    register struct M2c_D_0015F6A0 *q __asm__("a3");

    var_6_4 = -1;
    var_5_9 = 0;
    if (D_001996D0.unk2C > 0) {
        p = *(struct M2c_D_0015F6A0 **)0x15F6A0;
        if (p->unk4 == arg0) {
            var_6_4 = 0;
        } else {
            q = p;
loop_4:
            var_5_9 += 1;
            if (var_5_9 < D_001996D0.unk2C) {
                if (*(s32 *)((u8 *)q + (var_5_9 * 0x10) + 0x4) == arg0) {
                    var_6_4 = var_5_9;
                } else {
                    goto loop_4;
                }
            }
        }
    }
    return var_6_4;
}

extern __typeof__(FUN_001fdca0) func_001fdca0 __attribute__((alias("FUN_001fdca0")));
