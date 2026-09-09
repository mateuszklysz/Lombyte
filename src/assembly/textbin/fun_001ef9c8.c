/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ef9c8/FUN_001ef9c8.s", FUN_001ef9c8);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern char D_0076A790[];

__attribute__((section(".text.func_0037D680")))
void FUN_001ef9c8(char *p) {
    char *g1;

    g1 = D_0076A790;
    if (*(int *)(g1 + 0x14) == 0) {
        *(short *)(p + 0x44) = 0x40;
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 1:
    case 9:
        {
            char *g2 = D_0076A790;
            if (*(int *)(g2 + 0x14) == 1) {
                *(short *)(p + 0x44) = *(unsigned short *)(p + 0x40);
            } else {
                *(short *)(p + 0x44) = *(unsigned short *)(p + 0x42);
            }
        }
        return;
    case 4:
        if (*(unsigned short *)(p + 0x24) & 2) {
            *(short *)(p + 0x44) = *(unsigned short *)(p + 0x40);
            return;
        }
    case 2:
        *(short *)(p + 0x44) = *(unsigned short *)(p + 0x2C);
        return;
    }
}
#endif /* NON_MATCHING */
