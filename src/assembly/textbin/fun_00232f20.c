/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00232f20
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 51.8714%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00232f20/FUN_00232f20.s", FUN_00232f20);
#else
#include "types.h"
extern u8 D_001DD1A8[];
extern u8 D_001DD1D8[];
extern s32 func_0011B1C8();
extern s32 func_00233038();
s32 FUN_00232f20(s32 arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp10;
    s32 temp_10_60;
    s32 temp_16_53;
    s32 temp_3_51;
    s32 temp_4_27;
    s32 temp_6_30;
    s32 var_17_15;
    s32 var_18_13;
    s32 var_2_39;

    var_18_13 = arg0;
    var_17_15 = arg3;
    if (var_17_15 != -1) {
        goto block_2;
    }
    var_17_15 = func_00233038(arg1);
block_2:
    if (arg1 >= 0x40U) {
        goto block_4;
    }
    temp_4_27 = arg1 * 0x10;
    temp_6_30 = *(s32 *)((u8 *)(D_001DD1D8 + temp_4_27) + 0x4);
    if (temp_6_30 != 0) {
        goto block_5;
    }
block_4:
    return -3;
block_5:
    var_2_39 = -1;
    if (temp_6_30 < (arg2 + var_17_15)) {
        goto block_10;
    }
    sp10 = *(temp_4_27 + D_001DD1D8) + (arg2 * 0x10);
    if (var_17_15 == 0) {
        goto block_9;
    }
loop_8:
    temp_3_51 = (var_17_15 <= 0xFFFF) ? var_17_15 : 0xFFFF;
    temp_16_53 = temp_3_51 * 0x10;
    temp_10_60 = temp_16_53;
    var_17_15 -= temp_3_51;
    func_0011B1C8(D_001DD1A8, 1, arg4, &sp10, 0x10, var_18_13, temp_10_60, 0, 0);
    var_18_13 += temp_16_53;
    sp10 += temp_16_53;
    if (var_17_15 != 0) {
        goto loop_8;
    }
block_9:
    var_2_39 = 0;
block_10:
    return var_2_39;
}
#endif /* NON_MATCHING */
