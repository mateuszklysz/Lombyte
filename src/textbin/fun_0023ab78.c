/*
STATE: C_EXACT
SYMBOL: FUN_0023ab78
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

/* ROLE: recovered function `ErrMessage` starts here; this unit covers only its beginning. */

#include "types.h"
extern u8 D_001611F8[];
extern s32 DebugPrint();
void FUN_0023ab78(s32 arg0) {
    DebugPrint(D_001611F8, arg0);
}

extern void func_0023AB78(s32 arg0) __attribute__((alias("FUN_0023ab78")));
