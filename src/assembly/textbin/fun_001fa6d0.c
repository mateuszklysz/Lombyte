/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 97.5000%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa6d0/FUN_001fa6d0.s", FUN_001fa6d0);
#else
#include "types.h"

s32 FUN_001fa6d0(f32 fparg0) {
    return (s32) fparg0;
}
#endif /* NON_MATCHING */
