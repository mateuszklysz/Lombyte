#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00205278/FUN_00205278.s", FUN_00205278);
#else
#include "rnc/assembly_textbin_fun_00205278_types.h"
#include "types.h"






extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 SubtractIntegerWithClamp();
extern s32 func_00205220();
s32 FUN_00205278(s32 *arg1, s32 arg2) {
    s32 *var_5_0;
    s32 temp_19_80;
    s32 temp_2_41;
    s32 temp_2_65;
    s32 temp_4_60;
    s32 var_16_51;
    s32 var_19_19;
    s32 var_21_11;
    s32 var_2_34;
    s32 var_4_21;
    s32 var_6_0;
    struct M2c_var_17_52 *var_17_52;
    struct M2c_var_3_23 *var_3_23;

    var_5_0 = arg1;
    var_6_0 = arg2;
    var_21_11 = 0;
    var_19_19 = -1;
    if (D_001A00F0.unk224 == 0) {
        var_5_0 = &D_001A00F0;
        var_4_21 = 4;
        var_6_0 = -1;
        var_3_23 = ((u8 *)&D_001A00F0 + 0x29C);
loop_2:
        if ((*(s32 *)((u8 *)var_3_23 - 0x14) == 0) || (var_4_21 == D_001A00F0.unk2A0) || (var_2_34 = var_4_21, (var_3_23->unk0 != -1))) {
            var_4_21 -= 1;
            var_3_23 -= 4;
            if (var_4_21 < 0) {
                goto block_6;
            }
            goto loop_2;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_2_34;
    }
block_6:
    temp_2_41 = func_00205220(D_001A00F0.unk224, var_5_0, var_6_0);
    if (temp_2_41 == -1) {
        return 1;
    }
    var_16_51 = 0;
    var_17_52 = ((u8 *)&D_001A00F0 + 0x28C);
loop_9:
    if ((*(s32 *)((u8 *)var_17_52 - 0x14) != 0) && (var_16_51 != D_001A00F0.unk2A0)) {
        temp_4_60 = var_17_52->unk0;
        var_2_34 = var_16_51;
        if (temp_4_60 != -1) {
            temp_2_65 = SubtractIntegerWithClamp(func_00205220(temp_4_60 & 0xFF) - temp_2_41);
            if (var_21_11 < temp_2_65) {
                var_21_11 = temp_2_65;
                var_19_19 = var_16_51;
            }
            goto block_14;
        }
    } else {
block_14:
        var_16_51 += 1;
        var_17_52 += 1;
        if (var_16_51 >= 5) {
            temp_19_80 = (~var_19_19 == 0) ? 0 : var_19_19;
            var_2_34 = temp_19_80;
            *(s32 *)((u8 *)(((u8 *)&D_001A00F0 + (temp_19_80 * 4))) + 0x28C) = -1;
        } else {
            goto loop_9;
        }
    }
    return var_2_34;
}
#endif /* NON_MATCHING */
