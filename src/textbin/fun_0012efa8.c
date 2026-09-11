/*
STATE: C_EXACT
SYMBOL: snd_PreAllocReverbWorkArea
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `snd_PreAllocReverbWorkArea` starts here; this unit covers only its beginning. */
#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012efa8(s32 arg0, s32 arg1) {
    u8 sp_slot[0x10];
    *(s32 *)(sp_slot + 0) = arg0;
    *(s32 *)(sp_slot + 4) = arg1;
    func_0012E6E0(81, 8, sp_slot, 0, 0);
}
