/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00200f90
SCORE: code=30.125 functions=30.125 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200f90/FUN_00200f90.s", FUN_00200f90);
#else
#include "rnc/assembly_textbin_fun_00200f90_types.h"
#include "types.h"






extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00[];
void FUN_00200f90(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s64 arg4, s64 arg5, s32 arg6) {
    s64 temp_5_41;
    s64 temp_9_70;
    struct M2c_temp_11_31 *temp_11_31;

    D_00160F00[0]->unk0 = 0x10000003;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0x50000003;
    temp_11_31 = D_00160F00[0];
    D_00160F00[0] = ((u8 *)temp_11_31 + (0x10));
    temp_11_31->unk10 = (s64) ((0x8800 << 0x2F) | 1);
    temp_11_31->unk18 = 0x4410;
    temp_11_31->unk20 = 0x46;
    temp_11_31->unk28 = arg4;
    if (arg6 != 0) {
        temp_5_41 = arg5 << 0x20;
        temp_11_31->unk30 = (s64) (((arg0 + D_0013E500.unk10) - 8) | (((arg1 + D_0013E500.unk14) - 8) << 0x10) | temp_5_41);
        temp_11_31->unk38 = (s64) (((arg2 + D_0013E500.unk10) - 8) | (((arg3 + D_0013E500.unk14) - 8) << 0x10) | temp_5_41);
    } else {
        temp_9_70 = arg5 << 0x20;
        temp_11_31->unk30 = (s64) ((((arg0 * 0x10) + D_0013E500.unk10) - 0x10) | ((((arg1 * 0x10) + D_0013E500.unk14) - 0x10) << 0x10) | temp_9_70);
        temp_11_31->unk38 = (s64) ((((arg2 * 0x10) + D_0013E500.unk10) - 0x10) | ((((arg3 * 0x10) + D_0013E500.unk14) - 0x10) << 0x10) | temp_9_70);
    }
    D_00160F00[0] += 0x30;
}
#endif /* NON_MATCHING */
