/* ROLE: recovered function `isAudioOK` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 39.4545%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023a790/FUN_0023a790.s", FUN_0023a790);
#else
#include "types.h"
extern s32 D_0016120C;
extern s32 func_0023AEE0();
void FUN_0023a790(void) {
    func_0023AEE0(D_0016120C + 0xD9100);
}
#endif /* NON_MATCHING */
