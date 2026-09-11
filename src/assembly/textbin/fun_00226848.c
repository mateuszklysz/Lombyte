/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00226848
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00226848/FUN_00226848.s", FUN_00226848);
#else
#include "rnc/assembly_textbin_fun_00226848_types.h"
#include "types.h"




extern u8 D_001B3200[];
extern u8 D_001B3AC0[];
extern u8 D_001D59D8[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u8 D_001D5CA0[];
extern u8 D_001D5D38[];
extern s32 func_002032E0();
extern s32 func_0020B618();
extern s32 func_00225D88();
extern s32 func_00232F20();
extern s32 func_00233038();
void FUN_00226848(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 *temp_3_78;
    s32 temp_16_65;
    s32 temp_17_60;
    s32 temp_18_53;
    s32 temp_19_49;
    s32 temp_22_40;
    s32 temp_3_56;
    s32 var_16_34;
    s32 var_20_12;
    s32 var_23_28;
    u8 temp_30_36;
    struct M2c_var_21_29 *var_21_29;

    sp0 = arg1;
    var_20_12 = 0;
    D_001D5BF0.unkAC = sp0;
    D_001D5BF0.unkA8 = arg0;
    if (sp0 > 0) {
        var_23_28 = arg0 * 4;
        var_21_29 = (arg0 * 8) + D_001D59D8;
        do {
            var_16_34 = 0;
            temp_30_36 = *(var_21_29->unk0 + D_001B3AC0);
            temp_22_40 = var_21_29->unk4;
            if (sp0 == 2) {
                var_16_34 = ((var_20_12 ^ 1) != 0) ? 0 : 1;
            }
            var_21_29 += 8;
            temp_19_49 = *(var_23_28 + D_001D5D38);
            var_23_28 += 4;
            temp_18_53 = func_00233038(temp_19_49) * 0x10;
            temp_3_56 = (var_20_12 + var_16_34) * 4;
            var_20_12 += 1;
            temp_17_60 = *(temp_3_56 + D_001D5CA0);
            temp_16_65 = (temp_17_60 + func_00225D88(temp_17_60)) - temp_18_53;
            func_00232F20(temp_16_65, temp_19_49, 0, -1, 0);
            func_0020B618(temp_16_65, temp_17_60);
            temp_3_78 = (temp_30_36 * 4) + D_001B3200;
            *(s32 *)((u8 *)(*temp_3_78 + (temp_22_40 * 4)) + 0x48) = temp_17_60;
            func_002032E0(*temp_3_78, temp_22_40);
        } while (var_20_12 < sp0);
    }
}
#endif /* NON_MATCHING */
