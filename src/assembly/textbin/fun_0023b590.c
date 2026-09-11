/*
STATE: C_NON_MATCHING
SYMBOL: startDisplay__Fi
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `startDisplay__Fi` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023b590/FUN_0023b590.s", FUN_0023b590);
#else
#include "types.h"
extern s32 D_001611E0;
extern s32 D_001611E4;
extern s32 func_00122298();
void FUN_0023b590(s32 arg0) {
    do {

    } while (func_00122298(0) == arg0);
    D_001611E0 = 1;
    D_001611E4 = 0;
}
#endif /* NON_MATCHING */
