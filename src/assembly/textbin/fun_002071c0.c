/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002071c0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 77.8889%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002071c0/FUN_002071c0.s", FUN_002071c0);
#else
#include "types.h"
extern u32 D_001A03B4[];
extern s32 func_00208818();
s32 FUN_002071c0(s32 arg0, s32 arg1) {
    s32 temp_18_18;
    s32 temp_4_25;
    s32 var_2_29;

    temp_18_18 = func_00208818(0x99, 0xED, 0x160, 0x117);
    temp_4_25 = func_00208818(arg0, arg1, 0x10E, 0xF7, 0x13D, 0x119);
    var_2_29 = 0;
    if (D_001A03B4[0] != 0) {
        var_2_29 = 1;
        if (temp_18_18 == 0) {
            var_2_29 = 0;
            if (temp_4_25 != 0) {
                var_2_29 = 1;
            }
        }
    }
    return var_2_29;
}
#endif /* NON_MATCHING */
