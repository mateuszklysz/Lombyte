/* ROLE: recovered function `Transition_DrawSky__Fv` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 56.7727%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001e9ab8/FUN_001e9ab8.s", FUN_001e9ab8);
#else
#include "types.h"
extern s32 D_0015EE88;
extern s32 func_0022AE70();
extern s32 func_0022B4C8();
extern s32 func_0022B558();
extern s32 func_00233980();
void FUN_001e9ab8(void) {
    func_0022B4C8();
    func_0022AE70();
    func_0022B558();
    func_00233980(0x47, 0x5360B);
    func_00233980(0x4E, 0x01000000 | ((s32) D_0015EE88 >> 0xD));
}
#endif /* NON_MATCHING */
