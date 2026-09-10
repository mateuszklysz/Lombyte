/* ROLE: recovered function `FastDiffRots__Fff` (fastfunc.s, 0x58 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 55.7143%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa688/FUN_001fa688.s", FUN_001fa688);
#else
#include "types.h"

f32 FUN_001fa688(f32 fparg0, f32 fparg1) {
    f32 var_f0_10;

    var_f0_10 = fabsf(fparg0 - fparg1);
    if (!(var_f0_10 < 3.1415927f)) {
        var_f0_10 = (2.0f * 3.1415927f) - var_f0_10;
    }
    return var_f0_10;
}
#endif /* NON_MATCHING */
