/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00213358
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 18.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00213358/FUN_00213358.s", FUN_00213358);
#else
#include "types.h"
extern s32 func_002132A8();
extern s32 func_00213308();
extern s32 func_00214DB0();
void FUN_00213358(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f22_18;
    f32 temp_f23_17;

    temp_f23_17 = func_00213308();
    temp_f22_18 = func_00213308();
    func_00214DB0(arg0, func_002132A8(fparg0, fparg1), temp_f23_17, temp_f22_18);
}
#endif /* NON_MATCHING */
