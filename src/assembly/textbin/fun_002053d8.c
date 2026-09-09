/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 94.3200%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/textbin/fun_002053d8/FUN_002053d8.s", FUN_002053d8);
#else
#include "types.h"

void FUN_002053d8(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    s32 var_3_11;
    s32 var_3_5;
    s32 var_8_9;
    u8 *var_4_0;
    u8 *var_5_0;
    u8 *var_6_0;
    u8 *var_7_0;
    u8 var_2_19;

    var_4_0 = arg0;
    var_5_0 = arg1;
    var_6_0 = arg2;
    var_7_0 = arg3;
    var_3_5 = 0;
    do {
        var_8_9 = 1;
        var_3_11 = 7;
loop_2:
        var_3_11 -= 1;
        var_8_9 *= 2;
        if (*var_7_0 & var_8_9) {
            var_2_19 = *var_5_0;
        } else {
            var_2_19 = *var_6_0;
        }
        *var_4_0 = var_2_19;
        var_5_0 += 1;
        var_6_0 += 1;
        var_4_0 += 1;
        if (var_3_11 >= 0) {
            goto loop_2;
        }
        var_3_5 += 1;
        var_7_0 += 1;
    } while (var_3_5 <= 0x7FFF);
}
#endif /* NON_MATCHING */
