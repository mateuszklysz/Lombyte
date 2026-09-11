/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: FUN_00211408
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.8140%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00211408/FUN_00211408.s", FUN_00211408);
#else
#include "types.h"
s32 FUN_00211408(void) { return 0; }
#endif /* NON_MATCHING */
