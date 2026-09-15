/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00225ac0
SCORE: code=75.7412 functions=75.7412 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225ac0/FUN_00225ac0.s", FUN_00225ac0);
#else
#include "rnc/assembly_textbin_fun_00225ac0_types.h"
#include "types.h"










extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u8 D_001D60B8[];
void FUN_00225ac0(s32 arg0) {
    struct M2c_var_2_23 *var_2_23;
    s32 temp_6_57;
    s32 temp_9_20;
    s32 var_10_11;
    s32 var_2_60;
    s32 var_2_9;
    s32 var_4_18;
    s32 var_4_24;
    s32 var_4_45;
    s32 var_4_68;
    s32 var_5_8;
    s32 var_7_7;
    s32 var_8_5;
    struct M2c_var_3_44 *var_3_44;
    struct M2c_var_3_65 *var_3_65;
    struct M2c_var_3_85 *var_3_85;

    var_8_5 = D_001D5BF0.unk10C;
    var_7_7 = D_001D5BF0.unk108;
    if (arg0 == 0) {
        var_5_8 = 1;
        var_2_9 = 0;
        var_10_11 = 0;
    } else {
        var_5_8 = 2;
        var_2_9 = 1;
        var_10_11 = 2;
    }
    var_4_18 = 0;
    temp_9_20 = var_5_8 + var_2_9;
    if (var_5_8 > 0) {
        var_2_23 = D_001D60B8;
        var_4_24 = var_5_8;
        do {
            var_2_23->unk0 = var_7_7;
            var_4_24 -= 1;
            var_2_23->unk4 = 0;
            var_7_7 += 0x11800;
            var_2_23 += 1;
        } while (var_4_24 != 0);
        var_4_18 = var_5_8;
    }
    if (var_4_18 < temp_9_20) {
        var_3_44 = (var_4_18 * 8) + D_001D60B8;
        var_4_45 = temp_9_20 - var_4_18;
        do {
            var_3_44->unk0 = var_8_5;
            var_4_45 -= 1;
            var_3_44->unk4 = 0;
            var_8_5 += 0x11800;
            var_3_44 += 1;
        } while (var_4_45 != 0);
        var_4_18 = temp_9_20;
    }
    temp_6_57 = temp_9_20 + var_10_11;
    var_2_60 = var_4_18 < 5;
    if (var_4_18 < temp_6_57) {
        var_3_65 = (var_4_18 * 8) + D_001D60B8;
        var_4_68 = temp_6_57 - var_4_18;
        do {
            var_3_65->unk0 = var_7_7;
            var_4_68 -= 1;
            var_3_65->unk4 = 1;
            var_7_7 += 0x4F000;
            var_3_65 += 1;
        } while (var_4_68 != 0);
        var_4_18 = temp_6_57;
        var_2_60 = var_4_18 < 5;
    }
    if (var_2_60 != 0) {
        var_3_85 = (var_4_18 * 8) + D_001D60B8;
        do {
            var_3_85->unk4 = 0;
            var_4_18 += 1;
            var_3_85->unk0 = 0;
            var_3_85 += 1;
        } while (var_4_18 < 5);
    }
}
#endif /* NON_MATCHING */
