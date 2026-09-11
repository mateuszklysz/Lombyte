/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0023a3b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 80.3571%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023a3b8/FUN_0023a3b8.s", FUN_0023a3b8);
#else
#include "types.h"
extern s32 D_00161208;
extern s32 D_0016120C;
extern s32 func_001188A0();
extern s32 func_001188E0();
extern s32 func_0023A460();
extern s32 func_0023A7C0();
extern s32 func_0023AA68();
s32 FUN_0023a3b8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_00161208 = arg2;
    D_0016120C = arg3;
    func_001188A0(func_001188E0(), 1);
    if (func_0023A7C0(arg0, arg1, arg4) != 0) {
        func_0023A460(D_0016120C + 0xD9048, D_0016120C, D_0016120C + 0xD9040);
    }
    func_0023AA68();
    D_00161208 = 0;
    D_0016120C = 0;
    return 0;
}
#endif /* NON_MATCHING */
