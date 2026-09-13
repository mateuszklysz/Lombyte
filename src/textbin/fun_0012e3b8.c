/*
STATE: C_EXACT
SYMBOL: FUN_0012e3b8
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

/* ROLE: recovered function `snd_StopAllSounds` starts here; this unit covers only its beginning. */

#include "types.h"
extern s32 func_0012E6E0();
void FUN_0012e3b8(void) {
    func_0012E6E0(0x18, 0, 0, 0, 0);
}

extern void func_0012E3B8(void) __attribute__((alias("FUN_0012e3b8")));
