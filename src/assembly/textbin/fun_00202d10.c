/*
STATE: C_NON_MATCHING
SYMBOL: LoadCompressedHudBank__FiPc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `LoadCompressedHudBank__FiPc` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00202d10/FUN_00202d10.s", FUN_00202d10);
#else
#include "types.h"
extern u32 D_0015EE4C[];
extern u32 D_0019A400[];
extern s32 func_0020B618();
void FUN_00202d10(s32 arg0, s32 arg1) {
    s32 temp_5_11;

    temp_5_11 = (arg1 + 0xF) & 0xFFFFFFF0;
    if (temp_5_11 != 0) {
        func_0020B618(*(s32 *)((u8 *)(D_0015EE4C[0] + (arg0 * 8)) + 0x28) + D_0015EE4C[0], temp_5_11);
    }
    *(s32 *)((u8 *)(D_0019A400[0] + (arg0 * 4)) + 0x74) = 0;
}
#endif /* NON_MATCHING */
