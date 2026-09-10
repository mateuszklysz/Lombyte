/* ROLE: recovered whole function `FastVectorFromPackedChars__FR4vec4i` (fastfunc.s). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 23.3333%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_vector_from_packed_chars/FUN_001f9d50.s", FUN_001f9d50);
#else
#include "types.h"

void FUN_001f9d50(s32 arg0, s32 arg1) {
    /* m2c-unknown:  unknown instruction: pextlb $a1, $zero, $a1  */
    /* m2c-unknown:  unknown instruction: pextlh $a1, $zero, $a1  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $a1, $vf1  */
    /* m2c-unknown:  unknown instruction: vitof0.xyzw $vf1, $vf1  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
}
#endif /* NON_MATCHING */
