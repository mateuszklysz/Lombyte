/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00200958
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 20.3909%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200958/FUN_00200958.s", FUN_00200958);
#else
#include "rnc/assembly_textbin_fun_00200958_types.h"
#include "types.h"










extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001FFA10();
void FUN_00200958(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s64 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {    s32 arg_sp0;
    s32 arg_sp8;
    s32 sp0;
    s64 temp_2_52;
    struct M2c_temp_17_48 *temp_17_48;
    struct M2c_temp_3_47 *temp_3_47;

    D_00160F00->unk0 = 0x10000005;
    D_00160F00->unk4 = 0;
    sp0 = arg7;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000005;
    temp_3_47 = D_00160F00;
    temp_17_48 = ((u8 *)temp_3_47 + (0x10));
    D_00160F00 = temp_17_48;
    temp_3_47->unk10 = (s64) ((0xE800 << 0x2F) | 0x8001);
    temp_17_48->unk8 = 0x05353106;
    temp_2_52 = func_001FFA10();
    temp_17_48->unk20 = (s64) (((s64) arg_sp8 << 0x18) | 0x7F7F7F);
    temp_17_48->unk28 = (s64) (arg5 | (arg6 << 0x10));
    temp_17_48->unk10 = temp_2_52;
    temp_17_48->unk18 = 0x156;
    temp_17_48->unk38 = (s64) (sp0 | ((s64) arg_sp0 << 0x10));
    temp_17_48->unk30 = (s64) (((arg1 + D_0013E500.unk10) - 8) | (((arg2 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_17_48->unk48 = 0;
    temp_17_48->unk40 = (s64) (((arg3 + D_0013E500.unk10) - 8) | (((arg4 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    D_00160F00 += 0x50;
}
#endif /* NON_MATCHING */
