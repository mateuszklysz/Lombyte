/* ROLE: recovered function `startDisplay__Fi` (movie/disp.cpp, 0x50 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 59.6316%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023b590/FUN_0023b590.s", FUN_0023b590);
#else
#include "types.h"
extern s32 D_001611E0;
extern s32 D_001611E4;
extern s32 func_00122298();
void FUN_0023b590(s32 arg0) {
    do {

    } while (func_00122298(0) == arg0);
    D_001611E0 = 1;
    D_001611E4 = 0;
}
#endif /* NON_MATCHING */
