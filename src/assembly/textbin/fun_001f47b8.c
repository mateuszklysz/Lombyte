/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f47b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f47b8/FUN_001f47b8.s", FUN_001f47b8);
#else
#include "types.h"
extern s32 D_0015F468;
extern u8 D_0018DD40[];
extern u8 D_0018DE40[];
void FUN_001f47b8(s32 arg0, s32 arg1) {
    s32 temp_2_12;

    if (D_0015F468 < 0x40) {
        temp_2_12 = D_0015F468 * 4;
        *(temp_2_12 + D_0018DD40) = arg0;
        *(temp_2_12 + D_0018DE40) = arg1;
        D_0015F468 += 1;
    }
}
#endif /* NON_MATCHING */
