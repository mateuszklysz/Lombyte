/*
STATE: C_NON_MATCHING
SYMBOL: PutDispBuffer__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `PutDispBuffer__Fv` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb2a8/FUN_001fb2a8.s", FUN_001fb2a8);
#else
#include "types.h"
extern s32 D_0015EEB8;
extern s32 func_00121E40();
void FUN_001fb2a8(void) {
    func_00121E40(D_0015EEB8);
}
#endif /* NON_MATCHING */
