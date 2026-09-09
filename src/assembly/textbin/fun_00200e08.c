/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 34.4536%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200e08/FUN_00200e08.s", FUN_00200e08);
#else
#include "rnc/assembly_textbin_fun_00200e08_types.h"
#include "types.h"






extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
void FUN_00200e08(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s64 arg4, s32 arg5) {
    s64 temp_5_44;
    s64 temp_9_76;
    struct M2c_temp_10_31 *temp_10_31;

    D_00160F00->unk0 = 0x10000003;
    D_00160F00->unk4 = 0;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000003;
    temp_10_31 = D_00160F00;
    D_00160F00 = ((u8 *)temp_10_31 + (0x10));
    temp_10_31->unk10 = (s64) ((0x8800 << 0x2F) | 1);
    temp_10_31->unk18 = 0x4410;
    temp_10_31->unk20 = 0x46;
    temp_10_31->unk28 = arg4;
    if (arg5 != 0) {
        temp_5_44 = ((0xFFFF << 0x10) | 0xF000) << 0x18;
        temp_10_31->unk30 = (s64) (((arg0 + D_0013E500.unk10) - 8) | (((arg1 + D_0013E500.unk14) - 8) << 0x10) | temp_5_44);
        temp_10_31->unk38 = (s64) (((arg2 + D_0013E500.unk10) - 8) | (((arg3 + D_0013E500.unk14) - 8) << 0x10) | temp_5_44);
    } else {
        temp_9_76 = ((0xFFFF << 0x10) | 0xF000) << 0x18;
        temp_10_31->unk30 = (s64) ((((arg0 * 0x10) + D_0013E500.unk10) - 0x10) | ((((arg1 * 0x10) + D_0013E500.unk14) - 0x10) << 0x10) | temp_9_76);
        temp_10_31->unk38 = (s64) ((((arg2 * 0x10) + D_0013E500.unk10) - 0x10) | ((((arg3 * 0x10) + D_0013E500.unk14) - 0x10) << 0x10) | temp_9_76);
    }
    D_00160F00 += 0x30;
}
#endif /* NON_MATCHING */
