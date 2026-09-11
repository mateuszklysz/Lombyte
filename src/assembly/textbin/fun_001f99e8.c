/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f99e8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f99e8/FUN_001f99e8.s", FUN_001f99e8);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

__attribute__((section(".text.func_003373A0")))
void FUN_001f99e8(int a, int *p) {
    int n;
    if (p == 0) { for (;;) { } }
    n = *p;
    if (n > 0) { do { n--; } while (n != 0); }
}
#endif /* NON_MATCHING */
