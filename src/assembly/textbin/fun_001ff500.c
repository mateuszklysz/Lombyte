/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff500/FUN_001ff500.s", FUN_001ff500);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

extern unsigned char D_003EB710[];
extern unsigned short D_003EB810[];
extern int D_003EB830;

__attribute__((section(".text.func_003228C0")))
void FUN_001ff500(int a, int b, int c, int d, int e) {
    int i;
    unsigned char *slot;

    i = D_003EB830;
    i = i % 16;
    slot = &D_003EB710[i * 16];
    D_003EB830 = i;
    if (b == 0) {
        D_003EB810[a] = D_003EB810[a] + 1;
    }
    *(int *)(slot + 0xC) = e;
    slot[0] = a;
    slot[1] = b;
    *(int *)(slot + 4) = c;
    *(int *)(slot + 8) = d;
    D_003EB830 = D_003EB830 + 1;
    *(short *)(slot + 2) = D_003EB810[a];
}
#endif /* NON_MATCHING */
