/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 31.1475%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ffc30/FUN_001ffc30.s", FUN_001ffc30);
#else
#include "rnc/assembly_textbin_fun_001ffc30_types.h"
#include "types.h"












extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001FFA10();
void FUN_001ffc30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s64 arg5) {
    s32 temp_20_45;
    s32 temp_21_48;
    struct M2c_temp_10_41 *temp_10_41;
    struct M2c_temp_18_58 *temp_18_58;
    struct M2c_temp_2_57 *temp_2_57;

    temp_10_41 = D_0019A3E8.unk24 + (*(s32 *)((u8 *)((arg0 * 4) + D_0019A3E8.unk20) + 0x2) * 8);
    D_00160F00->unk0 = 0x10000005;
    temp_20_45 = 1 << temp_10_41->unk7;
    temp_21_48 = 1 << temp_10_41->unk6;
    do {
        D_00160F00->unk4 = 0;
        D_00160F00->unk8 = 0;
    } while (0);
    D_00160F00->unkC = 0x50000005;
    temp_2_57 = D_00160F00;
    temp_18_58 = ((u8 *)temp_2_57 + (0x10));
    D_00160F00 = temp_18_58;
    temp_2_57->unk10 = (s64) ((0xE800 << 0x2F) | 0x8001);
    temp_18_58->unk8 = 0x05353106;
    temp_18_58->unk10 = func_001FFA10(temp_10_41, 0x10000005);
    temp_18_58->unk20 = (s64) ((arg5 << 0x18) | 0x7F7F7F);
    temp_18_58->unk18 = 0x156;
    temp_18_58->unk28 = 0;
    temp_18_58->unk38 = (s64) ((temp_20_45 << 0x14) + (temp_21_48 * 0x10));
    temp_18_58->unk30 = (s64) ((((arg1 * 0x10) + D_0013E500.unk10) - 8) | ((((arg2 * 0x10) + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_18_58->unk48 = 0;
    temp_18_58->unk40 = (s64) (((((arg1 + arg3) * 0x10) + D_0013E500.unk10) - 8) | (((((arg2 + arg4) * 0x10) + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    D_00160F00 += 0x50;
}
#endif /* NON_MATCHING */
