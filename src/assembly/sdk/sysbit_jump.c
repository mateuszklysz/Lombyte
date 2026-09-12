/*
STATE: C_NON_MATCHING
SYMBOL: _sysbitJump
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library leaf _sysbitJump; target words retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sysbit_jump/_sysbitJump.s", _sysbitJump);
#else
#include "rnc/assembly_sdk_sysbit_jump_types.h"
#include "types.h"


void _sysbitJump(struct M2c_arg0 *arg0, s32 arg1) {
    s32 temp_5_4;
    s64 temp_2_7;
    u32 temp_6_12;

    temp_5_4 = arg1 * 8;
    temp_2_7 = temp_5_4 + arg0->unk18;
    arg0->unk0 = 0;
    temp_6_12 = arg0->unk8 + ((s64) (temp_2_7 << 0x1D) >> 0x20);
    arg0->unk10 = 0;
    arg0->unk18 = temp_2_7;
    arg0->unkC = temp_6_12;
    if (temp_6_12 >= (u32) arg0->unk24) {
        arg0->unkC = (u32) (temp_6_12 - arg0->unk28);
    }
    _sysbitFlush(arg0, temp_5_4, temp_6_12, arg0);
}
#endif /* NON_MATCHING */
