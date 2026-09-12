/*
STATE: C_NON_MATCHING
SYMBOL: _sysbitInit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library leaf _sysbitInit; target words retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sysbit_init/_sysbitInit.s", _sysbitInit);
#else
#include "rnc/assembly_sdk_sysbit_init_types.h"
#include "types.h"


void _sysbitInit(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unkC = arg1;
    arg0->unk24 = (s32) (arg2 + arg3);
    arg0->unk28 = arg3;
    arg0->unk8 = arg1;
    arg0->unk10 = 0;
    arg0->unk0 = 0;
    arg0->unk18 = 0;
    _sysbitFlush(0, arg1);
}
#endif /* NON_MATCHING */
