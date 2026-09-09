/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233308/FUN_00233308.s", FUN_00233308);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern char D_00747A78[];

/* compiler: sn-2.95.3-136 ; extra keys: none */


__attribute__((section(".text.func_002D9C10")))
void FUN_00233308(int *a0) {
    char *p;
    int f;
    long t;
    p = D_00747A78;
    if ((*(int *)D_00747A78 & 0x2000) != 0) {
        return;
    }
    t = *(int *)(p - 0x54);
    if ((((unsigned long)t >> 3) & 1UL) == 1UL) {
        return;
    }
    f = *(int *)(p + 0xC);
    if ((f & 0x2000000) != 0) {
        return;
    }
    p = p - 0x5D8;
    if (*(unsigned short *)(p + 0x5B0) == 0x21) {
        return;
    }
    if ((*(int *)(p + 0x594) & 0x800) != 0) {
        if ((f & 0x8000000) != 0) {
            return;
        }
    }
    if (*(unsigned char *)(p + 0x569) == 1) {
        if ((*(int *)(p + 0x210) & 1) == 0) {
            return;
        }
    }
    *a0 = *a0 + 1;
}
#endif /* NON_MATCHING */
