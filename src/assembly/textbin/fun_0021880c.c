/* ROLE: recovered function `_part_load_tex` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021880c/FUN_0021880c.s", FUN_0021880c);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

__attribute__((section(".text.func_00375050")))
int FUN_0021880c(int arg0, short arg1) {
    char *p;
    char one;

    p = func_0037D170();
    if (p == 0) {
        return -1;
    }
    one = 1;
    *(short *)(p + 0x0) = one;
    *(int *)(p + 0x4) = arg0;
    *(int *)(p + 0x8) = 0;
    p[0xC] = 0x10;
    p[0xD] = one;
    *(short *)(p + 0xE) = 0;
    *(short *)(p + 0x10) = arg1;
    *(short *)(p + 0x12) = -1;
    *(short *)(p + 0x14) = 0;
    *(short *)(p + 0x16) = 0;
    *(short *)(p + 0x18) = 0;
    *(short *)(p + 0x1A) = 0;
    *(short *)(p + 0x1C) = 0;
    *(short *)(p + 0x1E) = 0;
    return 0;
}
#endif /* NON_MATCHING */
