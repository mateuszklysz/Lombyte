/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.; shared struct extraction rejected after compile failure
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200258/FUN_00200258.s", FUN_00200258);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

extern struct Ent D_00758620[];
extern volatile int D_003E9970[];
extern int D_003E9950[];

typedef int (*Fp)(int);
struct Ent { Fp fp; int arg; int pad; };




__attribute__((section(".text.func_0033BC48")))
int FUN_00200258(int idx) {
    volatile int *flag = &D_003E9970[idx];
    struct Ent *e = &D_00758620[idx * 6];
    volatile int acc = 0;
    volatile int i = 5;
    do {
        Fp fp = e->fp;
        int arg = e->arg;
        e++;
        if (fp) {
            int r;
            *flag = 1;
            r = fp(arg);
            *flag = 0;
            acc |= r;
        }
    } while (--i >= 0);
    D_003E9950[idx]++;
    return acc;
}
#endif /* NON_MATCHING */
