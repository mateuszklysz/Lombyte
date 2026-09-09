/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9af0/FUN_001f9af0.s", FUN_001f9af0);
#else
#include "types.h"
/* sceVu0InnerProduct — VU0 3D dot product: returns dot(*a0, *a1) as a float
 * (vmul.xyz then horizontal add via vaddy/vaddz, result moved out through
 * qmfc2/mtc1). */

__attribute__((section(".text.sceVu0InnerProduct")))
float FUN_001f9af0(void *a0, void *a1) {
    float r;
    int t;
    VU0_LQC2(4, a0, 0);
    VU0_LQC2(5, a1, 0);
    VU0_VMUL_XYZ(5, 4, 5);
    VU0_VADDY_X(5, 5);
    VU0_VADDZ_X(5, 5, 5);
    VU0_QMFC2_NI_F(t, 5);
    VU0_MTC1(r, t);
    return r;
}
#endif /* NON_MATCHING */
