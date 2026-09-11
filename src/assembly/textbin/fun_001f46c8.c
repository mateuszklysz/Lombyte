/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f46c8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f46c8/FUN_001f46c8.s", FUN_001f46c8);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

extern int D_00766BA8[];
extern int D_00766BD0[];
extern int D_00766BD8[];

__attribute__((section(".text.func_003549A8")))
int FUN_001f46c8(void) {
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
