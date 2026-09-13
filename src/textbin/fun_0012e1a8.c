/*
STATE: C_EXACT
SYMBOL: FUN_0012e1a8
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

/* ROLE: recovered function `snd_ResolveBankXREFS` starts here; this unit covers only its beginning. */

#include "types.h"
extern s32 func_0012E6E0();
void FUN_0012e1a8(void) {
    func_0012E6E0(8, 0, 0, 0, 0);
}

extern void func_0012E1A8(void) __attribute__((alias("FUN_0012e1a8")));
