/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002216c0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 48.1169%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002216c0/FUN_002216c0.s", FUN_002216c0);
#else
#include "rnc/assembly_textbin_fun_002216c0_types.h"
#include "types.h"








extern u8 D_0013D4C0[];
extern u8 D_001863D0[];
extern u8 D_001CEC20[];
extern u8 D_001CEC60[];
extern u8 D_001CEC80[];
extern u8 D_001CECA0[];
extern struct M2c_D_001D1088 D_001D1088;
extern u8 D_001D61B8[];
extern u8 D_001D6248[];
extern u8 D_001D6280[];
s32 FUN_002216c0(void) {
    struct M2c_var_12_9 *var_12_9;
    s16 *var_14_25;
    s16 *var_15_24;
    s16 *var_6_26;
    s16 *var_7_27;
    s16 var_10_31;
    s16 var_9_40;
    s32 *var_13_28;
    s32 *var_8_29;
    s32 var_24_30;
    struct M2c_temp_2_56 *temp_2_56;
    struct M2c_var_11_33 *var_11_33;

    var_12_9 = D_001D61B8;
    var_15_24 = ((u8 *)D_001CECA0 - (u8 *)0x72);
    var_14_25 = ((u8 *)D_001CEC80 - (u8 *)0x54);
    var_6_26 = ((u8 *)D_001CEC60 - (u8 *)0x36);
    var_7_27 = D_001CEC20 + 6;
    var_13_28 = D_001D6280;
    var_8_29 = D_001D6248;
    var_24_30 = 0;
    var_10_31 = 0;
    var_11_33 = D_001D61B8 + 6;
    do {
        if (var_10_31 < 6) {
            var_9_40 = *var_7_27;
        } else if (var_10_31 < 9) {
            var_9_40 = *var_6_26;
        } else if (var_10_31 >= 0xC) {
            var_9_40 = *var_15_24;
        } else {
            var_9_40 = *var_14_25;
        }
        if (*(var_9_40 + D_0013D4C0) != 0) {
            var_24_30 += 1;
            temp_2_56 = (var_9_40 * 0x4C) + D_001863D0;
            var_12_9->unk0 = (u16) temp_2_56->unk38;
            var_11_33->unk0 = var_9_40;
            *(s32 *)((u8 *)var_11_33 - 0x4) = 0;
            *(s32 *)((u8 *)var_11_33 - 0x2) = 0;
            *var_8_29 = (s32) temp_2_56->unk40;
            var_11_33 += 0xA;
            *var_13_28 = (s32) temp_2_56->unk44;
            var_8_29 += 4;
            var_12_9->unk8 = var_10_31;
            var_13_28 += 4;
            var_12_9 += 0xA;
        }
        var_10_31 += 1;
        var_15_24 += 0xA;
        var_14_25 += 0xA;
        var_6_26 += 0xA;
        var_7_27 += 0xA;
    } while (var_10_31 < 0xE);
    D_001D1088.unk40 = var_24_30;
    return 0;
}
#endif /* NON_MATCHING */
