/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f99f8
SCORE: code=70.0000 functions=70.0000 data=100 complete_data=100
COMPILER: ee-gcc-2.9-991111b/r4 -O2 -g2 -gstabs (SN textbin default)
DECISION: retained
BLOCKER: register-allocation,delay-slot-scheduling
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 70.0000%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f99f8/FUN_001f99f8.s", FUN_001f99f8);
#else
#include "types.h"

void FUN_001f99f8(s64 *arg0) {
    *arg0 = 0;
}

extern void func_001F99F8(s64 *arg0) __attribute__((alias("FUN_001f99f8")));
#endif /* NON_MATCHING */
