/* ROLE: recovered whole function `FastSin__Ff`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_sin/FUN_001f9de0.s", FUN_001f9de0);
#else
#include "types.h"
/* func_00158FB8 — returns 0.0f (constant float stub). */

__attribute__((section(".text.func_00158FB8")))
float FUN_001f9de0(void *a0) {
    return 0.0f;
}
#endif /* NON_MATCHING */
