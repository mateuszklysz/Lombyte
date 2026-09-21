/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 15.4126%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
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
extern struct M2c_D_00160F00 *D_00160F00[];
extern s32 func_001F9810();
extern s32 sceGsSetDefDrawEnv();
void FUN_001fb440(s64 arg0, s64 arg1, s32 arg2) {
    s16 temp_7_25;
    register s16 temp_8_19 asm("v0");
    s32 temp_2_5;
    s32 temp_6_30;
    s32 temp_9_6;
    struct M2c_temp_17_70 *temp_17_70;
    struct M2c_temp_18_72 *temp_18_72;
    struct M2c_temp_2_107 *temp_2_107;
    struct M2c_temp_2_63 *temp_2_63;
    struct M2c_temp_3_64 *temp_3_64;
    struct M2c_temp_4_108 *temp_4_108;

    temp_2_5 = arg0 - 6;
    temp_9_6 = arg2 >> 8;
    temp_8_19 = 1 << arg0;
    temp_7_25 = 1 << arg1;
    temp_6_30 = arg2 >> 0xD;
    D_00151780.unk166 = (s16) temp_6_30;
    D_00151780.unk160 = temp_8_19;
    D_00151780.unk162 = temp_7_25;
    D_0015EED0 = temp_9_6 | ((1 << ((temp_2_5 <= 0) ? 1 : temp_2_5)) << 0xE) | (arg0 << 0x1A) | (arg1 << 0x1E) | (0x8000 << 0x13);
    func_001F9810(D_00160F00[0], 0xF0, temp_6_30, temp_7_25, temp_8_19, temp_9_6);
    D_00160F00[0]->unk0 = 0x1000000E;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0x5000000E;
    temp_2_63 = D_00160F00[0];
    temp_3_64 = ((u8 *)temp_2_63 + (0x10));
    D_00160F00[0] = temp_3_64;
    temp_2_63->unk10 = (s64) ((0x8000 << 0x2D) | 8);
    temp_3_64->unk8 = 0xE;
    temp_17_70 = D_00160F00[0];
    temp_18_72 = ((u8 *)temp_17_70 + (0x10));
    D_00160F00[0] = temp_18_72;
    sceGsSetDefDrawEnv(temp_18_72, D_00151780.unk164, D_00151780.unk160, D_00151780.unk162, 3, 0);
    temp_17_70->unk10 = (s64) ((temp_17_70->unk10 & ~0x1FF) | (D_00151780.unk166 & 0x1FF));
    temp_18_72->unk10 = (s64) (D_00151780.unk16E | ((D_00151780.unk16C & 0xF) << 0x18));
    temp_2_107 = D_00160F00[0];
    temp_4_108 = ((u8 *)temp_2_107 + (0x80));
    D_00160F00[0] = temp_4_108;
    temp_2_107->unk80 = (s64) ((0x8000 << 0x2D) | 1);
    temp_4_108->unk8 = 0xE;
    temp_4_108->unk10 = 0x30003;
    temp_4_108->unk18 = 0x47;
    temp_4_108->unk20 = (s64) ((0x8800 << 0x2F) | 0x8001);
    temp_4_108->unk28 = 0x4410;
    temp_4_108->unk30 = 0x106;
    temp_4_108->unk38 = 0;
    temp_4_108->unk40 = (s64) ((0x8000 - (D_00151780.unk160 * 8)) | ((0x8000 - (D_00151780.unk162 * 8)) << 0x10));
    temp_4_108->unk48 = (s64) (((D_00151780.unk160 * 8) + 0x8000) | (((D_00151780.unk162 * 8) + 0x7FF0) << 0x10));
    D_00160F00[0] += 0x50;
}
#endif /* NON_MATCHING */
