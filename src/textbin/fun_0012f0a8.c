/*
STATE: C_EXACT
SYMBOL: snd_ResetMovieSound
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `snd_ResetMovieSound` starts here; this unit covers only its beginning. */

#include "types.h"
extern s32 FUN_0012e548();
void FUN_0012f0a8(void) {
    FUN_0012e548(0x3D, 0, 0);
}

extern void func_0012F0A8(void) __attribute__((alias("FUN_0012f0a8")));
