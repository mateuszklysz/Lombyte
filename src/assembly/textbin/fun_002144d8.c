/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002144d8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002144d8/FUN_002144d8.s", FUN_002144d8);
#else
#include "types.h"
extern s32 func_001FA298();
extern s32 func_001FA2B8();
extern s32 func_00214260();
void FUN_002144d8(s32 arg0, s32 arg1) {
u8 sp_slot[0x70];    func_001FA298(sp_slot);
    func_00214260(arg0, sp_slot);
    func_001FA2B8(arg1, sp_slot);
}
#endif /* NON_MATCHING */
