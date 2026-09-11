/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002073b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 76.8571%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002073b8/FUN_002073b8.s", FUN_002073b8);
#else
#include "rnc/assembly_textbin_fun_002073b8_types.h"
#include "types.h"


extern struct M2c_D_0013F350 D_0013F350;
extern s32 func_00208818();
s32 FUN_002073b8(s32 arg0, s32 arg1, f32 fparg2) {
    s32 var_2_26;
    s32 var_4_17;

    var_4_17 = 0;
    if (((u32) (D_0013F350.unk208C - 0x11) < 2U) || (D_0013F350.unk12E4 == 1)) {
        var_4_17 = 1;
    }
    var_2_26 = 0;
    if (var_4_17 == 0) {
        if (!(fparg2 < 71.5f)) {
            if (func_00208818(arg0, arg1, 0x131, 0xE2, 0xC6, 0x93) != 0) {
                var_2_26 = 0;
            } else {
                var_2_26 = func_00208818(arg0, arg1, 0x190, 0x89, 0xD1, 0xFB) == 0;
            }
        }
    }
    return var_2_26;
}
#endif /* NON_MATCHING */
