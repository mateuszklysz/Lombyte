/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00212d68
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 29.6667%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00212d68/FUN_00212d68.s", FUN_00212d68);
#else
#include "types.h"
extern s32 D_0015FF00;
extern u8 D_001B3200[];
extern u8 D_001B3580[];
extern void RO_001E8B80();
void FUN_00212d68(s32 arg0) {
    s32 *var_3_24;
    s32 temp_2_26;
    s32 temp_5_36;
    s32 temp_6_38;
    s32 var_6_17;

    var_6_17 = 0;
    if ((RO_001E8B80 != -1) && (RO_001E8B80 != arg0)) {
        var_3_24 = &RO_001E8B80 + 0xC;
loop_3:
        temp_2_26 = *var_3_24;
        var_6_17 += 1;
        if (temp_2_26 != -1) {
            var_3_24 += 0xC;
            if (temp_2_26 != arg0) {
                goto loop_3;
            }
        }
    }
    temp_5_36 = var_6_17 * 0xC;
    temp_6_38 = D_0015FF00 * 4;
    *(temp_6_38 + D_001B3580) = *(s32 *)((u8 *)(&RO_001E8B80 + temp_5_36) + 0x4);
    if (*((D_0015FF00 * 4) + D_001B3200) != 0) {
        *(s32 *)((u8 *)(*(temp_6_38 + D_001B3200)) + 0x2C) = (s32) *(s32 *)((u8 *)(&RO_001E8B80 + temp_5_36) + 0x8);
    }
}
#endif /* NON_MATCHING */
