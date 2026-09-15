/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 52.8672%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00205440/FUN_00205440.s", FUN_00205440);
#else
#include "rnc/assembly_textbin_fun_00205440_types.h"
#include "types.h"




extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 func_00208810();
s32 FUN_00205440(void) {
    f32 *temp_2_38;
    f32 *temp_2_50;
    f32 *temp_3_28;
    f32 temp_f0_94;
    f32 temp_f1_71;
    s32 *temp_2_111;
    s32 *temp_2_119;
    s32 *temp_2_127;
    s32 *temp_2_68;
    s32 *temp_4_85;
    s32 *temp_6_91;
    s32 temp_2_63;
    s32 temp_3_102;
    s32 temp_3_90;
    s32 temp_5_101;
    s32 temp_7_106;
    s32 temp_9_103;
    s32 var_2_12;
    s32 *temp_10_58;
    s32 *temp_11_62;
    s32 *temp_9_22;

    func_00208810();
    var_2_12 = 1;
    if (!(D_0013C940.unk1A4 & 0x500)) {
        var_2_12 = 0;
        if ((D_001A00F0.unk24 != 0) && (D_001A00F0.unk228 >= 0)) {
            temp_9_22 = ((u8 *)&D_001A00F0 + 0xB4);
            temp_3_28 = (D_001A00F0.unk228 * 4) + temp_9_22;
            *temp_3_28 *= 1.0f - (D_0013C940.unk104 * 0.02f);
            temp_2_38 = (D_001A00F0.unk228 * 4) + temp_9_22;
            if (*temp_2_38 > 4.0f) {
                *temp_2_38 = 4.0f;
            }
            temp_2_50 = (D_001A00F0.unk228 * 4) + temp_9_22;
            if (*temp_2_50 < 0.65f) {
                *temp_2_50 = 0.65f;
            }
            temp_10_58 = ((u8 *)&D_001A00F0 + 0x104);
            temp_11_62 = ((u8 *)&D_001A00F0 + 0x154);
            temp_2_63 = D_001A00F0.unk228 * 4;
            temp_2_68 = temp_2_63 + temp_10_58;
            temp_f1_71 = 3000000.0f / *(temp_2_63 + temp_9_22);
            *temp_2_68 += (s32) temp_f1_71;
            temp_4_85 = (D_001A00F0.unk228 * 4) + temp_11_62;
            *temp_4_85 += (s32) temp_f1_71;
            temp_3_90 = D_001A00F0.unk228 * 4;
            temp_6_91 = temp_3_90 + temp_10_58;
            temp_f0_94 = *(temp_3_90 + temp_9_22);
            temp_5_101 = (s32) temp_f0_94 << 0xF;
            temp_3_102 = (s32) temp_f0_94 << 0xF;
            temp_9_103 = 0x10000000 - temp_5_101;
            temp_7_106 = 0x10000000 - temp_3_102;
            if (*temp_6_91 < temp_3_102) {
                *temp_6_91 = temp_3_102;
            }
            temp_2_111 = (D_001A00F0.unk228 * 4) + temp_10_58;
            if (temp_7_106 < *temp_2_111) {
                *temp_2_111 = temp_7_106;
            }
            temp_2_119 = (D_001A00F0.unk228 * 4) + temp_11_62;
            if (*temp_2_119 < temp_5_101) {
                *temp_2_119 = temp_5_101;
            }
            temp_2_127 = (D_001A00F0.unk228 * 4) + temp_11_62;
            if (temp_9_103 < *temp_2_127) {
                *temp_2_127 = temp_9_103;
            }
            var_2_12 = 0;
        }
    }
    return var_2_12;
}
#endif /* NON_MATCHING */
