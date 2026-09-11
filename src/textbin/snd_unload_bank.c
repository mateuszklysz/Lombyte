/*
STATE: C_EXACT
SYMBOL: snd_UnloadBank
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `snd_UnloadBank`. */

#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012e1d8(s32 arg0) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    func_0012E6E0(6, 4, sp_slot, 0, 0);
}

/* Recovered original symbol name. */
extern __typeof__(FUN_0012e1d8) snd_UnloadBank __attribute__((alias("FUN_0012e1d8")));
