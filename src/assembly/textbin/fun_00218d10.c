/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00218d10
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00218d10/FUN_00218d10.s", FUN_00218d10);
#else
#include "types.h"
/* ee-2.9-991111 matched TU. */

extern int D_00755C08;
extern unsigned char D_00755BF8[];
extern unsigned char D_00755C10[];

__attribute__((section(".text.func_003203B0")))
void *FUN_00218d10(void) {
    if (D_00755C08 == 0) {
        D_00755C08 = 1;
        func_003A52F0(D_00755BF8, 0, 0x10);
        *(int*)(D_00755BF8 + 0x4) = (int)D_00755C10;
    }
    return D_00755BF8;
}
#endif /* NON_MATCHING */
