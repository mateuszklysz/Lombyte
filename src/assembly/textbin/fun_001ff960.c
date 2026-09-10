/* ROLE: recovered function `GetIconFrame__Fii` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff960/FUN_001ff960.s", FUN_001ff960);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

extern int D_00766BA8[];
extern int D_00766BD0[];
extern int D_00766BD8[];

__attribute__((section(".text.func_003549A8")))
int FUN_001ff960(void) {
    int i;
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
