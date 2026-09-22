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
    struct M2c_var_12_7 *var_12_7;
    s16 *var_14_23;
    s16 *var_15_22;
    s16 *var_6_24;
    s16 *var_7_25;
    s16 var_10_29;
    s16 var_9_38;
    s32 *var_13_26;
    s32 *var_8_27;
    s32 var_24_28;
    struct M2c_temp_2_54 *temp_2_54;
    struct M2c_var_11_31 *var_11_31;

    var_12_7 = D_001D61B8;
    var_15_22 = ((u8 *)D_001CECA0 - (u8 *)0x72);
    var_14_23 = ((u8 *)D_001CEC80 - (u8 *)0x54);
    var_6_24 = ((u8 *)D_001CEC60 - (u8 *)0x36);
    var_7_25 = D_001CEC20 + 6;
    var_13_26 = D_001D6280;
    var_8_27 = D_001D6248;
    var_24_28 = 0;
    var_10_29 = 0;
    var_11_31 = D_001D61B8 + 6;
    do {
        if (var_10_29 < 6) {
            var_9_38 = *var_7_25;
        } else if (var_10_29 < 9) {
            var_9_38 = *var_6_24;
        } else if (var_10_29 >= 0xC) {
            var_9_38 = *var_15_22;
        } else {
            var_9_38 = *var_14_23;
        }
        if (*(var_9_38 + D_0013D4C0) != 0) {
            var_24_28 += 1;
            temp_2_54 = (var_9_38 * 0x4C) + D_001863D0;
            var_12_7->unk0 = (u16) temp_2_54->unk38;
            var_11_31->unk0 = var_9_38;
            *(s32 *)((u8 *)var_11_31 - 0x4) = 0;
            *(s32 *)((u8 *)var_11_31 - 0x2) = 0;
            *var_8_27 = (s32) temp_2_54->unk40;
            var_11_31 += 0xA;
            *var_13_26 = (s32) temp_2_54->unk44;
            var_8_27 += 4;
            var_12_7->unk8 = var_10_29;
            var_13_26 += 4;
            var_12_7 += 0xA;
        }
        var_10_29 += 1;
        var_15_22 += 0xA;
        var_14_23 += 0xA;
        var_6_24 += 0xA;
        var_7_25 += 0xA;
    } while (var_10_29 < 0xE);
    D_001D1088.unk40 = var_24_28;
    return 0;
}
#endif /* NON_MATCHING */
