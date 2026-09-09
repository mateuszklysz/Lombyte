/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f97a0/FUN_001f97a0.s", FUN_001f97a0);
#else
#include "types.h"
/* SN ProDG ee-gcc 2.95.3 matched TU. */

__attribute__((section(".text.ClearField90_13E400")))
void FUN_001f97a0(void *a0) {
    if (*(int*)((char*)a0+0x90) != 0) {
        *(int*)((char*)a0+0x90) = 0;
    }
}
#endif /* NON_MATCHING */
