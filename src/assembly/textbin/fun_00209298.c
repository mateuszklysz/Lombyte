/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00209298/FUN_00209298.s", FUN_00209298);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void func_002CF2D0(void *a0);
extern void func_002CFF30(void *a0);
extern void func_002CDA08(void *a0);
extern void InitActorVtable_2CC500(void *a0);
extern char D_005FEE00[];
extern char D_005FEFF0[];
extern char D_005FFCF0[];
extern char D_005FFD80[];
extern char D_00601180[];

/* sn-2.95.3-136 matched TU. */













__attribute__((section(".text.func_002CC3B8")))
void FUN_00209298(void *a0, int a1) {
    char *p;
    char *q;
    int i;
    int j;

    if (a1 != 0xFFFF) return;
    if (a0 == 0) return;

    func_002C9C88(D_005FEE00);

    p = D_005FEFF0;
    /* `i != -1` (retail materialises -1 and closes with `bne`), not `i >= 0`:
       the idiom picks the branch instruction. */
    for (i = 0x33; i != -1; i--) {
        func_002CF2D0(p);
        p += 0x40;
    }

    q = D_005FFCF0;
    for (j = 1; j != -1; j--) {
        func_002CFF30(q);
        q += 0x44;
    }

    q = D_005FFD80;
    for (j = 0x3F; j != -1; j--) {
        func_002CDA08(q);
        q += 0x50;
    }

    q = D_00601180;
    for (j = 0xF; j != -1; j--) {
        InitActorVtable_2CC500(q);
        q += 0xDC;
    }
}
#endif /* NON_MATCHING */
