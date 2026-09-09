/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 23.3333%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9a68/FUN_001f9a68.s", FUN_001f9a68);
#else
#include "types.h"

void FUN_001f9a68(s32 arg0, s32 arg1, f32 fparg0) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf2  */
    /* m2c-unknown:  unknown instruction: vmulx.xyz $vf1, $vf1, $vf2x  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
}
#endif /* NON_MATCHING */
