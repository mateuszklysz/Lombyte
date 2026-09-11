/*
STATE: C_NON_MATCHING
SYMBOL: snd_StartMovieSound
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `snd_StartMovieSound` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012f108/FUN_0012f108.s", FUN_0012f108);
#else
#include "types.h"
extern s32 func_0012E548();
void FUN_0012f108(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
u8 sp_slot[0x30];    func_0012E548(0x3E, 0x14, sp_slot, arg0, arg1, arg2, arg3, arg4);
}
#endif /* NON_MATCHING */
