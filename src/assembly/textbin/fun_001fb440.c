/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb440/FUN_001fb440.s", FUN_001fb440);
#else
#include "rnc/assembly_textbin_fun_001fb440_types.h"
#include "types.h"
















extern struct M2c_D_00151780 D_00151780;
extern s32 D_0015EED0;
extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_00121FC8();
extern s32 func_001F9810();
void FUN_001fb440(s64 arg0, s64 arg1, s32 arg2) {
    s16 temp_7_27;
    s16 temp_8_21;
    s32 temp_2_7;
    s32 temp_6_32;
    s32 temp_9_8;
    struct M2c_temp_17_72 *temp_17_72;
    struct M2c_temp_18_74 *temp_18_74;
    struct M2c_temp_2_109 *temp_2_109;
    struct M2c_temp_2_65 *temp_2_65;
    struct M2c_temp_3_66 *temp_3_66;
    struct M2c_temp_4_110 *temp_4_110;

    temp_2_7 = arg0 - 6;
    temp_9_8 = arg2 >> 8;
    temp_8_21 = 1 << arg0;
    temp_7_27 = 1 << arg1;
    temp_6_32 = arg2 >> 0xD;
    D_00151780.unk166 = (s16) temp_6_32;
    D_00151780.unk160 = temp_8_21;
    D_00151780.unk162 = temp_7_27;
    D_0015EED0 = temp_9_8 | ((1 << ((temp_2_7 <= 0) ? 1 : temp_2_7)) << 0xE) | (arg0 << 0x1A) | (arg1 << 0x1E) | (0x8000 << 0x13);
    func_001F9810(D_00160F00, 0xF0, temp_6_32, temp_7_27, temp_8_21, temp_9_8);
    D_00160F00->unk0 = 0x1000000E;
    D_00160F00->unk4 = 0;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x5000000E;
    temp_2_65 = D_00160F00;
    temp_3_66 = ((u8 *)temp_2_65 + (0x10));
    D_00160F00 = temp_3_66;
    temp_2_65->unk10 = (s64) ((0x8000 << 0x2D) | 8);
    temp_3_66->unk8 = 0xE;
    temp_17_72 = D_00160F00;
    temp_18_74 = ((u8 *)temp_17_72 + (0x10));
    D_00160F00 = temp_18_74;
    func_00121FC8(temp_18_74, D_00151780.unk164, D_00151780.unk160, D_00151780.unk162, 3, 0);
    temp_17_72->unk10 = (s64) ((temp_17_72->unk10 & ~0x1FF) | (D_00151780.unk166 & 0x1FF));
    temp_18_74->unk10 = (s64) (D_00151780.unk16E | ((D_00151780.unk16C & 0xF) << 0x18));
    temp_2_109 = D_00160F00;
    temp_4_110 = ((u8 *)temp_2_109 + (0x80));
    D_00160F00 = temp_4_110;
    temp_2_109->unk80 = (s64) ((0x8000 << 0x2D) | 1);
    temp_4_110->unk8 = 0xE;
    temp_4_110->unk10 = 0x30003;
    temp_4_110->unk18 = 0x47;
    temp_4_110->unk20 = (s64) ((0x8800 << 0x2F) | 0x8001);
    temp_4_110->unk28 = 0x4410;
    temp_4_110->unk30 = 0x106;
    temp_4_110->unk38 = 0;
    temp_4_110->unk40 = (s64) ((0x8000 - (D_00151780.unk160 * 8)) | ((0x8000 - (D_00151780.unk162 * 8)) << 0x10));
    temp_4_110->unk48 = (s64) (((D_00151780.unk160 * 8) + 0x8000) | (((D_00151780.unk162 * 8) + 0x7FF0) << 0x10));
    D_00160F00 += 0x50;
}
#endif /* NON_MATCHING */
