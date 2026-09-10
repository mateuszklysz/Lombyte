/* ROLE: recovered whole function `FastTweenColor` (fastfunc.s). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_tween_color/FUN_001fa6e0.s", FUN_001fa6e0);
#else
#include "types.h"
/* Tramp_MMI_INVERSE_RT_MATRIX_30A3F8 -- invert a rigid-body matrix at a1 into a0: transpose the
 * upper-left 3x3 basis (MMI shuffle) and inverse-rotate the negated
 * translation through VU0.  Single hardware-intrinsic block; see godhand/mmi.h. */

__attribute__((section(".text.Tramp_MMI_INVERSE_RT_MATRIX_30A3F8")))
void FUN_001fa6e0(void *a0, void *a1) {
    MMI_INVERSE_RT_MATRIX(a0, a1);
}
#endif /* NON_MATCHING */
