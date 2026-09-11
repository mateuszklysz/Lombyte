/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00200258
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
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
