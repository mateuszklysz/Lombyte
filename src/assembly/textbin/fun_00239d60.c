/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 35.6814%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00239d60/FUN_00239d60.s", FUN_00239d60);
#else
#include "rnc/assembly_textbin_fun_00239d60_types.h"
#include "types.h"






extern s32 D_00161190;
extern s32 D_00161194;
extern s32 D_00161198[];
extern struct M2c_D_001E66E0 D_001E66E0;
extern s32 func_001FA6D0();
s32 FUN_00239d60(f32 fparg0, f32 fparg1, f32 fparg2) {
    s32 temp_16_76;
    s32 temp_21_32;
    s32 temp_22_31;
    s32 temp_23_28;
    s32 temp_2_45;
    s32 temp_3_42;
    s32 temp_4_46;
    s32 temp_5_50;
    s32 var_19_19;
    s32 var_2_92;
    s32 var_30_38;
    struct M2c_temp_17_68 *temp_17_68;
    struct M2c_var_18_36 *var_18_36;

    var_19_19 = 0;
    temp_23_28 = func_001FA6D0(fparg0 * 1024.0f);
    temp_22_31 = func_001FA6D0(fparg1 * 1024.0f);
    temp_21_32 = func_001FA6D0(fparg2 * 1024.0f);
    var_18_36 = D_00161194;
    if (D_00161198[0] > 0) {
        var_30_38 = 0;
loop_2:
        temp_3_42 = var_18_36->unk0;
        temp_2_45 = D_00161198[0];
        if ((temp_23_28 >= temp_3_42) && (temp_4_46 = var_18_36->unk4, ((temp_22_31 < temp_4_46) == 0)) && (temp_5_50 = var_18_36->unk8, ((temp_21_32 < temp_5_50) == 0)) && (temp_23_28 < (temp_3_42 + var_18_36->unkC))) {
            if ((temp_22_31 >= (temp_4_46 + var_18_36->unkE)) || (temp_21_32 >= (temp_5_50 + 0x800)) || (temp_17_68 = D_00161190 + var_30_38, temp_16_76 = func_001FA6D0((f32) temp_4_46, temp_5_50, (fparg0 - (temp_17_68->unk0 + D_001E66E0.unk8)) / D_001E66E0.unk10), var_2_92 = var_19_19, ((temp_17_68->unk1E & (1 << (((temp_16_76 >> 2) & 3) | (func_001FA6D0((fparg1 - (temp_17_68->unk4 + D_001E66E0.unkC)) / D_001E66E0.unk14) & 0xC)))) == 0))) {
                goto block_10;
            }
        } else {
block_10:
            var_19_19 += 1;
            var_30_38 += 0x1190;
            var_18_36 += 0x10;
            if (var_19_19 >= temp_2_45) {
                goto block_11;
            }
            goto loop_2;
        }
    } else {
block_11:
        var_2_92 = -1;
    }
    return var_2_92;
}
#endif /* NON_MATCHING */
