/*
STATE: C_NON_MATCHING
SYMBOL: FontPrintWindow
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `FontPrintWindow` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f7090/FUN_001f7090.s", FUN_001f7090);
#else
#include "types.h"
s32 FUN_001f7090(void) { return 0; }
#endif /* NON_MATCHING */
