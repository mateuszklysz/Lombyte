/*
STATE: C_NON_MATCHING
SYMBOL: _dispRefImageField
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _dispRefImageField; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/disprefimagefield/_dispRefImageField.s", _dispRefImageField);
#else
#include "rnc/assembly_sdk_library_disprefimagefield_types.h"
#include "types.h"














extern s32 _cpr8();
extern s32 _csc_storeRefImage();
extern s32 _getPtsDtsFlags();
extern s32 _isOutSizeOK();
void _dispRefImageField(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1, struct M2c_arg2 *arg2) {
    s32 temp_3_73;
    s32 temp_6_59;
    s32 var_22_7;
    s32 *temp_7_27;
    struct M2c_temp_7_35 *temp_7_35;
    struct M2c_temp_7_45 *temp_7_45;
    struct M2c_var_19_19 *var_19_19;
    struct M2c_var_20_20 *var_20_20;

    var_22_7 = 0;
    if (arg0->unk174 == 2) {
        var_19_19 = arg1;
        var_20_20 = arg2;
        var_22_7 = 0x40;
    } else {
        var_19_19 = arg2;
        var_20_20 = arg1;
    }
    temp_7_27 = arg0->unk858;
    _getPtsDtsFlags(arg0, var_19_19, temp_7_27 + 0x10, temp_7_27 + 0x18, temp_7_27 + 0x20);
    temp_7_35 = arg0->unk858;
    arg0->unk88 = 1;
    arg0->unk80 = (s32) temp_7_35->unk10;
    _getPtsDtsFlags(arg0, var_20_20, ((u8 *)temp_7_35 + (0x28)), ((u8 *)temp_7_35 + (0x30)), ((u8 *)temp_7_35 + (0x38)));
    temp_7_45 = arg0->unk858;
    arg0->unk88 = 1;
    arg0->unk80 = (s32) temp_7_45->unk28;
    arg0->unkCC = (s32) var_19_19->unk5C;
    temp_7_45->unk20 = (s64) (temp_7_45->unk20 | var_22_7);
    temp_6_59 = var_19_19->unk60;
    temp_7_45->unk38 = (s64) (temp_7_45->unk38 | var_22_7);
    arg0->unkD0 = temp_6_59;
    arg0->unkB4 = (s32) var_19_19->unk44;
    arg0->unkB8 = (s32) var_20_20->unk48;
    arg0->unkC0 = (s32) var_19_19->unk50;
    arg0->unkC4 = (s32) var_20_20->unk54;
    if (_isOutSizeOK(arg0, arg1, temp_6_59, temp_7_45, var_22_7) != 0) {
        temp_3_73 = arg1->unk28;
        if (temp_3_73 == 1) {
            if (arg2->unk28 == temp_3_73) {
                arg1->unk10 = (s32) (arg1->unk10 * 2);
                if (arg0->unkB0 != 0) {
                    _csc_storeRefImage(arg0, arg1);
                } else {
                    _cpr8(arg0, arg1);
                }
                arg1->unk10 = (s32) ((s32) arg1->unk10 >> 1);
                func_00129B38(arg0);
            }
        }
    }
}
#endif /* NON_MATCHING */
