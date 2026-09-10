/* ROLE: recovered function `ParseBin__Fv` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012d8f8/FUN_0012d8f8.s", FUN_0012d8f8);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern char D_007474A0[];
extern void func_002C90A0(void *self, int a);
extern void func_002C9950(void *self);
extern void ClearStructFields_2C8EB0(void *self);
extern void *memcpy(void *dst, const void *src, unsigned int n);

__attribute__((section(".text.func_002C8EF8")))
int FUN_0012d8f8(void *self) {
    char *d;
    char *g;
    char *base;
    char *p;
    char *q;
    unsigned int i;

    d = (char *)self;
    g = D_007474A0;
    base = *(char **)(g + 0x554);

    p = (char *)(*(int *)(base + 0x14) + (int)base);
    if ((*(int *)(g + 0x594) & 0x800) || *(int *)(g + 0x56C) != 0) {
        p = (char *)(*(int *)(base + 0x18) + (int)base);
    }

    if (p != 0) {
        memcpy(d + 4, p, 12);
        if (*(int *)(d + 4) == 0x444C53) {
            if (*(int *)(d + 8) == 1) {
                q = p + 0xC;
                *(char **)d = q;
                for (i = 0; i < *(unsigned int *)(d + 0xC); i++) {
                    *(unsigned short *)(q + 0x14) =
                        *(unsigned short *)(q + 0x18);
                }
            } else {
                *(char **)d = p + 0xC;
            }
            func_002C90A0(d, 0);
            func_002C9950(d);
            return 1;
        }
    }

    ClearStructFields_2C8EB0(d);
    return 0;
}
#endif /* NON_MATCHING */
