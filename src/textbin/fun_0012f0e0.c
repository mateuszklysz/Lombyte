/*
STATE: C_EXACT
SYMBOL: FUN_0012f0e0
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

/* ROLE: recovered function `snd_CloseMovieSound` starts here; this unit covers only its beginning. */

#include "types.h"
extern s32 func_0012E548();
void FUN_0012f0e0(void) {
    func_0012E548(0x3C, 0, 0);
}

extern void func_0012F0E0(void) __attribute__((alias("FUN_0012f0e0")));
