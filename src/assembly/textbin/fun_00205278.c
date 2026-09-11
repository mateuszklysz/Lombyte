/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00205278
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 66.4545%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00205278/FUN_00205278.s", FUN_00205278);
#else
#include "rnc/assembly_textbin_fun_00205278_types.h"
#include "types.h"






extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 func_001F99A8();
extern s32 func_00205220();
s32 FUN_00205278(s32 *arg1, s32 arg2) {
    s32 *var_5_0;
    s32 temp_19_82;
    s32 temp_2_43;
    s32 temp_2_67;
    s32 temp_4_62;
    s32 var_16_53;
    s32 var_19_21;
    s32 var_21_13;
    s32 var_2_36;
    s32 var_4_23;
    s32 var_6_0;
    struct M2c_var_17_54 *var_17_54;
    struct M2c_var_3_25 *var_3_25;

    var_5_0 = arg1;
    var_6_0 = arg2;
    var_21_13 = 0;
    var_19_21 = -1;
    if (D_001A00F0.unk224 == 0) {
        var_5_0 = &D_001A00F0;
        var_4_23 = 4;
        var_6_0 = -1;
        var_3_25 = ((u8 *)&D_001A00F0 + 0x29C);
loop_2:
        if ((*(s32 *)((u8 *)var_3_25 - 0x14) == 0) || (var_4_23 == D_001A00F0.unk2A0) || (var_2_36 = var_4_23, (var_3_25->unk0 != -1))) {
            var_4_23 -= 1;
            var_3_25 -= 4;
            if (var_4_23 < 0) {
                goto block_6;
            }
            goto loop_2;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_2_36;
    }
block_6:
    temp_2_43 = func_00205220(D_001A00F0.unk224, var_5_0, var_6_0);
    if (temp_2_43 == -1) {
        return 1;
    }
    var_16_53 = 0;
    var_17_54 = ((u8 *)&D_001A00F0 + 0x28C);
loop_9:
    if ((*(s32 *)((u8 *)var_17_54 - 0x14) != 0) && (var_16_53 != D_001A00F0.unk2A0)) {
        temp_4_62 = var_17_54->unk0;
        var_2_36 = var_16_53;
        if (temp_4_62 != -1) {
            temp_2_67 = func_001F99A8(func_00205220(temp_4_62 & 0xFF) - temp_2_43);
            if (var_21_13 < temp_2_67) {
                var_21_13 = temp_2_67;
                var_19_21 = var_16_53;
            }
            goto block_14;
        }
    } else {
block_14:
        var_16_53 += 1;
        var_17_54 += 4;
        if (var_16_53 >= 5) {
            temp_19_82 = (~var_19_21 == 0) ? 0 : var_19_21;
            var_2_36 = temp_19_82;
            *(s32 *)((u8 *)(((u8 *)&D_001A00F0 + (temp_19_82 * 4))) + 0x28C) = -1;
        } else {
            goto loop_9;
        }
    }
    return var_2_36;
}
#endif /* NON_MATCHING */
