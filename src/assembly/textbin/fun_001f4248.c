/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f4248
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 61.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4248/FUN_001f4248.s", FUN_001f4248);
#else
#include "types.h"
extern s32 D_0015F434;
extern s32 D_0015F618;
extern s32 func_001F39D0();
extern s32 func_001FB368();
void FUN_001f4248(void) {
    if (D_0015F618 == 0) {
        func_001FB368();
        D_0015F434 = 0x7F;
        func_001F39D0();
    }
}
#endif /* NON_MATCHING */
