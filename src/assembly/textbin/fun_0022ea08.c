/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0022ea08
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 39.3250%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022ea08/FUN_0022ea08.s", FUN_0022ea08);
#else
#include "types.h"
extern s32 D_0013E504;
extern s32 D_00160588;
extern s32 func_001F5450();
extern s32 func_00233980();
void FUN_0022ea08(s32 arg0) {
    func_00233980(0x47, 0x31801);
    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
    func_001F5450(0x20, D_0013E504 - 0x58, 0x100, 0x20, 0, 0, 0x100, 0x20, (arg0 << 0x18) | 0x808080, D_00160588);
    func_00233980(0x47, 0x5360B);
}
#endif /* NON_MATCHING */
