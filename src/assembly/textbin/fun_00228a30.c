/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00228a30
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00228a30/FUN_00228a30.s", FUN_00228a30);
#else
#include "rnc/assembly_textbin_fun_00228a30_types.h"
#include "types.h"










extern u8 D_001D7F30[];
extern u8 D_001D88B0[];
extern u8 D_001D8DB0[];
void FUN_00228a30(void) {
    s16 temp_3_43;
    s16 temp_3_50;
    s32 *var_4_8;
    s32 var_2_23;
    s32 var_3_11;
    s32 var_4_20;
    s32 var_7_27;
    struct M2c_temp_3_28 *temp_3_28;
    struct M2c_temp_4_42 *temp_4_42;
    struct M2c_temp_8_29 *temp_8_29;
    struct M2c_temp_9_17 *temp_9_17;
    struct M2c_var_5_35 *var_5_35;

    var_4_8 = D_001D8DB0;
    if (*(s32 *)D_001D8DB0 >= 0) {
        var_3_11 = *(s32 *)D_001D8DB0;
loop_2:
        temp_9_17 = *((var_3_11 * 4) + D_001D7F30);
        var_4_20 = 0;
        if (temp_9_17->unk28 > 0) {
            var_2_23 = 0 * 8;
            do {
                var_7_27 = 0;
                temp_3_28 = *(s32 *)((u8 *)temp_9_17 + 0x40 + var_2_23);
                temp_8_29 = ((u8 *)temp_3_28 + (0x10));
                var_5_35 = ((u8 *)temp_8_29 + ((temp_8_29->unk4 * 0x10))) + 0x10;
                if (temp_3_28->unk10 > 0) {
                    do {
                        temp_4_42 = (var_5_35->unk13 * 4) + D_001D88B0;
                        temp_3_43 = temp_4_42->unk0;
                        if (temp_3_43 != 0) {
                            var_5_35->unk30 = (s32) ((var_5_35->unk30 & 0xFFFFC000) | temp_3_43);
                        }
                        temp_3_50 = temp_4_42->unk2;
                        if (temp_3_50 != 0) {
                            var_5_35->unk20 = (s32) ((var_5_35->unk20 & 0xFFFFC000) | temp_3_50);
                        }
                        var_7_27 += 1;
                        var_5_35 += 0x40;
                    } while (var_7_27 < temp_3_28->unk10);
                }
                var_4_20 += 1;
                var_2_23 = var_4_20 * 8;
            } while (var_4_20 < temp_9_17->unk28);
        }
        var_4_8 += 4;
        if (*var_4_8 >= 0) {
            var_3_11 = *var_4_8;
            goto loop_2;
        }
    }
}
#endif /* NON_MATCHING */
