/*
STATE: C_EXACT
SYMBOL: FUN_00226f50
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern u8 D_001D63D0[];
extern u8 D_001D64D0[];
extern u8 D_001D7130[];
extern s32 FUN_001f97e8();
void FUN_00226f50(void) {
    FUN_001f97e8(D_001D64D0, 0, 0xC60);
    FUN_001f97e8(D_001D7130, 0, 0xC60);
    FUN_001f97e8(D_001D63D0, 0, 0x100);
}

extern void func_00226F50(void) __attribute__((alias("FUN_00226f50")));
