/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 32.6071%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002116b8/FUN_002116b8.s", FUN_002116b8);
#else
#include "rnc/assembly_textbin_fun_002116b8_types.h"
#include "types.h"








extern s32 D_0015FF38;
extern u8 D_001C8100[];
void FUN_002116b8(void) {
    struct M2c_var_1_6 *var_1_6;
    register s32 temp_4_9 asm("a0");
    s32 temp_9_18;
    s32 var_7_12;
    u8 var_9_15;
    struct M2c_var_5_10 *var_5_10;
    struct M2c_var_6_11 *var_6_11;
    struct M2c_var_8_14 *var_8_14;

    var_1_6 = D_001C8100;
    do {
        temp_4_9 = var_1_6->unk0;
        var_5_10 = var_1_6->unk4;
        var_6_11 = var_1_6->unk8;
        var_7_12 = var_1_6->unkC;
loop_2:
        var_8_14 = var_6_11->unk4;
        var_9_15 = var_5_10->unkF;
loop_3:
        var_8_14->unk0 = temp_4_9;
        temp_9_18 = var_9_15 - 1;
        if (temp_9_18 != 0) {
            var_8_14->unk4 = temp_4_9;
            var_9_15 = temp_9_18 - 1;
            var_8_14 = ((u8 *)var_8_14 + (4 ))+ 4;
            if ((s32) var_9_15 > 0) {
                goto loop_3;
            }
        }
        var_7_12 -= 1;
        var_6_11 += 8;
        var_5_10 += 0x10;
        if (var_7_12 > 0) {
            goto loop_2;
        }
        var_1_6 += 0x10;
    } while (var_1_6 != (D_001C8100 + *(s32 *)0x15FF38));
}
#endif /* NON_MATCHING */
