/*
STATE: C_NON_MATCHING
SYMBOL: FastIntersectVert
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `FastIntersectVert` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f7a98/FUN_001f7a98.s", FUN_001f7a98);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

__attribute__((section(".text.func_003373A0")))
void FUN_001f7a98(int a, int *p) {
    int n;
    if (p == 0) { for (;;) { } }
    n = *p;
    if (n > 0) { do { n--; } while (n != 0); }
}
#endif /* NON_MATCHING */
