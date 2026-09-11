/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00200468
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 14.5050%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200468/FUN_00200468.s", FUN_00200468);
#else
#include "rnc/assembly_textbin_fun_00200468_types.h"
#include "types.h"










extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0019A3E8 D_0019A3E8;
void FUN_00200468(s64 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {    s32 arg_sp0;
    s32 arg_sp8;
    struct M2c_temp_12_52 *temp_12_52;
    struct M2c_temp_7_56 *temp_7_56;

    D_00160F00->unk0 = 0x10000005;
    do {
        D_00160F00->unk4 = 0;
        D_00160F00->unk8 = 0;
    } while (0);
    D_00160F00->unkC = 0x50000005;
    temp_12_52 = D_00160F00;
    temp_7_56 = ((u8 *)temp_12_52 + (0x10));
    D_00160F00 = temp_7_56;
    temp_12_52->unk10 = (s64) ((0xE800 << 0x2F) | 0x8001);
    temp_7_56->unk8 = 0x05353106;
    temp_7_56->unk18 = 0x156;
    temp_7_56->unk28 = (s64) (arg7 | ((s64) arg_sp0 << 0x10));
    temp_7_56->unk10 = arg0;
    temp_7_56->unk20 = (s64) (((s64) arg_sp8 << 0x18) | 0x7F7F7F);
    temp_7_56->unk38 = (s64) ((arg7 + (1 << (arg3 + 4))) | ((arg_sp0 + (1 << (arg4 + 4))) << 0x10));
    temp_7_56->unk30 = (s64) (((arg1 + D_0013E500.unk10) - 8) | (((arg2 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_7_56->unk48 = 0;
    temp_7_56->unk40 = (s64) (((arg1 + arg5 + D_0013E500.unk10) - 8) | (((arg2 + arg6 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    D_00160F00 += 0x50;
}
#endif /* NON_MATCHING */
