/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00208030
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00208030/FUN_00208030.s", FUN_00208030);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

extern struct S24 { int w[9]; } D_00766BA8;
extern int D_00766BD0[];
extern int D_00766BD8[];

__attribute__((section(".text.SFD_SetMpvParaTbl")))
void FUN_00208030(struct S24 *src, int *b, int *c) {
    int i, n;
    D_00766BA8 = *src;
    D_00766BA8.w[4] = 0;
    D_00766BA8.w[8] = 0;
    for (i = 0; i < 2; i++) D_00766BD0[i] = (b[i] + 0x3F) & -0x40;
    n = src->w[7];
    for (i = 0; i < 0x10; i++) {
        if (i < n) D_00766BD8[i] = (c[i] + 0x3F) & -0x40;
        else D_00766BD8[i] = 0;
    }
}
#endif /* NON_MATCHING */
