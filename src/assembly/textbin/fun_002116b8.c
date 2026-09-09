/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 31.1071%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002116b8/FUN_002116b8.s", FUN_002116b8);
#else
#include "rnc/assembly_textbin_fun_002116b8_types.h"
#include "types.h"








extern u32 D_0015FF38[];
extern u8 D_001C8100[];
void FUN_002116b8(void) {
    struct M2c_var_1_7 *var_1_7;
    s32 temp_4_10;
    s32 temp_9_19;
    s32 var_7_13;
    u8 var_9_16;
    struct M2c_var_5_11 *var_5_11;
    struct M2c_var_6_12 *var_6_12;
    struct M2c_var_8_15 *var_8_15;

    var_1_7 = D_001C8100;
    do {
        temp_4_10 = var_1_7->unk0;
        var_5_11 = var_1_7->unk4;
        var_6_12 = var_1_7->unk8;
        var_7_13 = var_1_7->unkC;
loop_2:
        var_8_15 = var_6_12->unk4;
        var_9_16 = var_5_11->unkF;
loop_3:
        var_8_15->unk0 = temp_4_10;
        temp_9_19 = var_9_16 - 1;
        if (temp_9_19 != 0) {
            var_8_15->unk4 = temp_4_10;
            var_9_16 = temp_9_19 - 1;
            var_8_15 = ((u8 *)var_8_15 + (4 ))+ 4;
            if ((s32) var_9_16 > 0) {
                goto loop_3;
            }
        }
        var_7_13 -= 1;
        var_6_12 += 8;
        var_5_11 += 0x10;
        if (var_7_13 > 0) {
            goto loop_2;
        }
        var_1_7 += 0x10;
    } while (var_1_7 != (D_001C8100 + D_0015FF38[0]));
}
#endif /* NON_MATCHING */
