/*
STATE: C_EXACT
SYMBOL: FUN_0021f330
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s32 FUN_00205640();
extern s32 FUN_00233980();
s32 FUN_0021f330(void) {
    FUN_00233980(0x42, 0x44);
    FUN_00233980(0x47, 0xB);
    FUN_00205640();
    return 8;
}
