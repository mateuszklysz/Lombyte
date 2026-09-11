/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00207300
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00207300/FUN_00207300.s", FUN_00207300);
#else
#include "rnc/assembly_textbin_fun_00207300_types.h"
#include "types.h"


extern struct M2c_D_0013F350 D_0013F350;
extern u32 D_001A03AC[];
extern s32 func_00208818();
s32 FUN_00207300(s32 arg0, s32 arg1, f32 fparg2) {
    s32 var_16_14;
    s32 var_2_18;
    s32 var_2_28;

    var_16_14 = 0;
    if ((u32) (D_0013F350.unk208C - 0x11) < 2U) {
        goto block_2;
    }
    var_2_18 = arg1 < 0x105;
    if (D_0013F350.unk12E4 != 1) {
        goto block_3;
    }
block_2:
    var_16_14 = 1;
    var_2_18 = arg1 < 0x105;
block_3:
    if (var_2_18 != 0) {
        goto block_7;
    }
    var_2_28 = 0;
    if (D_001A03AC[0] == 0) {
        goto block_9;
    }
    var_2_28 = 1;
    if (fparg2 >= 47.7f) {
        goto block_9;
    }
    return 0;
block_7:
    var_2_28 = var_16_14;
    if (arg1 < 0xC1) {
        goto block_9;
    }
    var_2_28 = (func_00208818(0xD9, 0xB8, 0x156, 0xD2) != 0) ? 0 : var_16_14;
block_9:
    return var_2_28;
}
#endif /* NON_MATCHING */
