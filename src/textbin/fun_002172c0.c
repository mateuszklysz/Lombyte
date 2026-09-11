/*
STATE: C_EXACT
SYMBOL: ClearPadInput__FR3PAD
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `ClearPadInput__FR3PAD` starts here; this unit covers only its beginning. */

#include "types.h"
#include "rnc/assembly_textbin_fun_002172c0_types.h"

void FUN_002172c0(struct M2c_arg0 *arg0) {
    s32 var_5_10;
    struct M2c_var_3_8 *var_3_8;

    var_3_8 = ((u8 *)arg0 + (0x140));
    var_5_10 = 0xF;
    arg0->unk1A0 = 0;
    arg0->unk1A4 = 0;
    arg0->unk1A8 = 0;
    arg0->unk1D0 = 1;
    arg0->unk1B4 = 0;
    arg0->unk1B8 = 0;
    arg0->unk1C0 = 0;
    arg0->unk1C4 = 0;
    arg0->unk1C8 = 0;
    arg0->unk1D8 = 0;
    arg0->unk1D4 = 1;
    arg0->unk1B0 = 0;
    do {
        *(s32 *)((u8 *)var_3_8 - 0x40) = 0;
        var_5_10 -= 1;
        var_3_8->unk0 = 0;
        var_3_8 += 1;
    } while (var_5_10 >= 0);
}

extern void func_002172C0(struct M2c_arg0 *arg0) __attribute__((alias("FUN_002172c0")));