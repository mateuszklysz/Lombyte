/*
STATE: C_NON_MATCHING
SYMBOL: __swrite
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __swrite; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/__swrite/__swrite.s", __swrite);
#else
#include "rnc/assembly_sdk_library___swrite_types.h"
#include "types.h"


extern s32 func_00114518();
extern s32 func_001185D0();
s64 __swrite(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    if (arg0->unkC & 0x100) {
        func_00114518(arg0->unk54, arg0->unkE, 0, 2);
    }
    arg0->unkC = (u16) (arg0->unkC & 0xEFFF);
    return (s64) (func_001185D0(arg0->unk54, arg0->unkE, arg1, arg2) << 0x20) >> 0x20;
}
#endif /* NON_MATCHING */
