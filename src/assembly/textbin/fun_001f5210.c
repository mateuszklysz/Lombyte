/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f5210
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f5210/FUN_001f5210.s", FUN_001f5210);
#else
#include "rnc/assembly_textbin_fun_001f5210_types.h"
#include "types.h"


extern u8 D_0013CC90[];
extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_00233980();
void FUN_001f5210(s32 arg0, s64 arg1, s64 arg2, s64 arg3) {
    s64 temp_6_6;
    s64 temp_7_10;

    temp_6_6 = arg2 << 0x10;
    temp_7_10 = arg3 << 0x18;
    func_00233980(1, arg0 | (arg1 << 8) | temp_6_6 | temp_7_10, temp_6_6, temp_7_10);
    D_00160F00->unk0 = 0x30000014;
    D_00160F00->unk4 = D_0013CC90;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000014;
    D_00160F00 += 0x10;
}
#endif /* NON_MATCHING */
