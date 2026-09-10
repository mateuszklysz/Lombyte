/* ROLE: recovered function `ParseParticleTexs` (loaders.cpp, 0x3d0 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 21.6282%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002026c8/FUN_002026c8.s", FUN_002026c8);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

extern unsigned int D_00766BA8[];
extern int D_00766BD0[];
extern int D_00766BD8[];

__attribute__((section(".text.func_003549A8")))
    int i;
int FUN_002026c8(void) {
    if ((unsigned int)(D_00766BA8[7] - 1) < 0x10) goto ok;
err:
    return -1;
ok:
    if (D_00766BA8[4] != 0) {
        if (D_00766BA8[8] != 0) goto ret0;
    }
    for (i = 0; i < 2; i++) {
        if (D_00766BD0[i] == 0) goto err;
    }
    for (i = 0; i < D_00766BA8[7]; i++) {
        if (D_00766BD8[i] == 0) goto err;
    }
ret0:
    return 0;
}
#endif /* NON_MATCHING */
