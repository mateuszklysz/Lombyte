/*
STATE: C_NON_MATCHING
SYMBOL: PartProc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `PartProc`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/part_proc/FUN_00217c18.s", FUN_00217c18);
#else
#include "types.h"
s32 FUN_00217c18(void) { return 0; }
#endif /* NON_MATCHING */
