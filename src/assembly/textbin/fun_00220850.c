/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00220850
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 54.1833%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00220850/FUN_00220850.s", FUN_00220850);
#else
#include "rnc/assembly_textbin_fun_00220850_types.h"
#include "types.h"




extern struct M2c_D_00151780 D_00151780;
extern s32 D_0015F438;
extern struct M2c_D_001A00F0 D_001A00F0;
extern u8 D_001DDF68[];
extern s32 func_00200468();
extern s32 func_00233980();
s32 FUN_00220850(s32 arg2) {
    s32 temp_17_111;
    s32 temp_18_118;
    s32 temp_6_105;
    s32 temp_7_113;
    s32 temp_8_115;
    s32 var_2_18;
    s32 var_6_0;

    var_6_0 = arg2;
    var_2_18 = 0;
    if (D_001A00F0.unk228 >= 0) {
        if ((D_001A00F0.unk228 == 6) || (D_001A00F0.unk228 == 0xD) || (var_6_0 = 0x2AB, (D_001A00F0.unk228 == 0x11))) {
            func_00233980(0x47, 0, var_6_0);
            func_00233980(8, 5);
            func_00200468(D_001A00F0.unk258, 0, 0, 7, 7, D_00151780.unk160 * 0x10, D_00151780.unk162 * 0x10, 0, 0, 0x80);
            func_00233980(0x47, 0x360B);
            if (((s32) D_0015F438 % 60) < 0x28) {
                func_00200468(D_001A00F0.unk260, 0, 0, 7, 7, D_00151780.unk160 * 0x10, D_00151780.unk162 * 0x10, 0, 0, 0x80);
            }
            if (((s32) D_0015F438 % 150) < 0x5A) {
                func_00200468(D_001A00F0.unk268, 0, 0, 7, 7, D_00151780.unk160 * 0x10, D_00151780.unk162 * 0x10, 0, 0, 0x80);
            }
        } else {
            temp_6_105 = D_001A00F0.unk228 * 0x2AB;
            temp_17_111 = *((D_001A00F0.unk228 * 4) + D_001DDF68);
            temp_7_113 = D_0015F438 + temp_6_105;
            temp_8_115 = temp_7_113 > -1;
            temp_18_118 = temp_17_111 * 2;
            func_00233980(0x47, 0, temp_6_105, temp_7_113, temp_8_115);
            func_00233980(8, 0);
            func_00200468(D_001A00F0.unk258, temp_17_111, temp_17_111, 7, 7, (D_00151780.unk160 * 0x10) - temp_18_118, (D_00151780.unk162 * 0x10) - temp_18_118, temp_7_113 - (((s32) ((temp_8_115 != 0) ? temp_7_113 : (temp_7_113 + 0x7FF)) >> 0xB) << 0xB), 0, 0x80);
            func_00233980(0x47, 0x360B);
            func_00233980(8, 5);
            func_00200468(D_001A00F0.unk260, temp_17_111, temp_17_111, 7, 7, (D_00151780.unk160 * 0x10) - temp_18_118, (D_00151780.unk162 * 0x10) - temp_18_118, 0, 0, 0x80);
            func_00200468(D_001A00F0.unk268, temp_17_111, temp_17_111, 7, 7, (D_00151780.unk160 * 0x10) - temp_18_118, (D_00151780.unk162 * 0x10) - temp_18_118, 0, 0, 0x80);
        }
        var_2_18 = 4;
    }
    return var_2_18;
}
#endif /* NON_MATCHING */
