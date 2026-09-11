/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00214720
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.1667%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214720/FUN_00214720.s", FUN_00214720);
#else
#include "types.h"
extern s32 D_00160034;
extern s32 func_001F9A28();
extern s32 func_001F9CF8();
extern void sp10();
s32 FUN_00214720(s32 arg0, s32 arg1) {    s32 sp14;
u8 sp_slot[0x40];    s32 sp18;
    f32 sp10;
    s32 temp_16_14;
    s32 var_2_30;

    if (arg1 != -1) {
        temp_16_14 = D_00160034 + (arg1 << 7);
        func_001F9A28(sp_slot, arg0, temp_16_14 + 0x30);
        func_001F9CF8(&sp10, sp_slot, temp_16_14 + 0x40, 0);
        var_2_30 = 0;
        if ((sp10 >= -1.0f) && (sp10 <= 1.0f)) {
            if ((sp14 >= -1.0f) && (sp14 <= 1.0f)) {
                if (sp18 >= -1.0f) {
                    var_2_30 = 1;
                    if (!(sp18 <= 1.0f)) {
                        goto block_7;
                    }
                }
            }
        }
    } else {
block_7:
        var_2_30 = 0;
    }
    return var_2_30;
}
#endif /* NON_MATCHING */
