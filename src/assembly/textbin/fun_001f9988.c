/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9988
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9988/FUN_001f9988.s", FUN_001f9988);
#else
#include "types.h"
/* capVu0Length — 3D length of vector a0: sqrt(x*x + y*y + z*z) via the VU0
 * Q/sqrt pipeline. vsqrt emitted as its exact .word (ee-as encodes it
 * differently from retail). */

__attribute__((section(".text.capVu0Length")))
float FUN_001f9988(void *a0) {
    float r;
    int t;
    VU0_LQC2(4, a0, 0);
    VU0_VMUL_XYZ(4, 4, 4);
    VU0_VADDY_X(4, 4);
    VU0_VADDZ_X(4, 4, 4);
    VU0_VSQRT_Q_VF4X();
    VU0_VWAITQ();
    VU0_VADDQ_X(4, 0);
    VU0_QMFC2_NI(t, 4);
    VU0_MTC1(r, t);
    return r;
}
#endif /* NON_MATCHING */
