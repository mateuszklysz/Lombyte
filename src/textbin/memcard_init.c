/*
STATE: C_EXACT
SYMBOL: FUN_0020ac58
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: memcard_Init: prints "ERROR: could not init memcard lib" when sceMcInit() fails. */
#include "types.h"
extern s32 sceMcInit();
extern u8 D_001E8360[];
extern s32 DebugPrint();
void FUN_0020ac58(void) {
    if (sceMcInit() != 0) {
        DebugPrint(D_001E8360);
    }
}

extern void func_0020AC58(void) __attribute__((alias("FUN_0020ac58")));
extern void memcard_Init(void) __attribute__((alias("FUN_0020ac58")));
