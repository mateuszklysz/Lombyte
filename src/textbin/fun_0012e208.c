/*
STATE: C_EXACT
SYMBOL: snd_SetMasterVolume
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `snd_SetMasterVolume` starts here; this unit covers only its beginning. */

#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012e208(s32 arg0, s32 arg1) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    *(s32 *)(sp_slot + 4) = arg1;
    func_0012E6E0(9, 8, sp_slot, 0, 0);
}
