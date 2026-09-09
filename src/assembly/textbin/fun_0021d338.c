/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021d338/FUN_0021d338.s", FUN_0021d338);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern char D_00754210[];
extern char D_00754220[];
extern char D_00602F80[];
extern char D_00603310[];
extern char D_006036A0[];
extern unsigned short D_00747A50;

__attribute__((section(".text.func_002CFD50")))
void FUN_0021d338(char *a0) {
    char *a1 = a0;
    switch (*(int *)(a1 + 0x2C)) {
    case 0:
        *(void **)(a1 + 0x8) = D_00754210;
        *(void **)(a1 + 0xC) = D_00602F80;
        break;
    case 3:
        *(void **)(a1 + 0x8) = D_00754210;
        *(void **)(a1 + 0xC) = D_00602F80;
        break;
    case 1:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 16:
    case 17:
    case 18:
    case 19:
        if (D_00747A50 == 0x504 || D_00747A50 == 0x506 || D_00747A50 == 0x801 ||
            D_00747A50 == 0x4F || D_00747A50 == 0x4E) {
            *(void **)(a1 + 0x8) = D_00754220;
        } else {
            *(void **)(a1 + 0x8) = D_00754210;
        }
        *(void **)(a1 + 0xC) = D_006036A0;
        break;
    case 2:
    case 4:
    case 5:
    case 6:
    case 14:
    case 15:
    default:
        *(void **)(a1 + 0x8) = D_00754210;
        *(void **)(a1 + 0xC) = D_00603310;
        break;
    }
}
#endif /* NON_MATCHING */
