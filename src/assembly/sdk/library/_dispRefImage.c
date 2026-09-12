/*
STATE: C_NON_MATCHING
SYMBOL: _dispRefImage
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _dispRefImage; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_dispRefImage/_dispRefImage.s", _dispRefImage);
#else
#include "rnc/assembly_sdk_library__dispRefImage_types.h"
#include "types.h"






extern u8 D_00132E98[];
extern s32 _cpr8();
extern s32 _csc_storeRefImage();
extern s32 _getPtsDtsFlags();
extern s32 _isOutSizeOK();
void _dispRefImage(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
    u32 temp_6_28;
    struct M2c_temp_7_14 *temp_7_14;
    s32 *temp_7_9;

    temp_7_9 = arg0->unk858;
    _getPtsDtsFlags(temp_7_9 + 0x10, temp_7_9 + 0x18, temp_7_9 + 0x20);
    temp_7_14 = arg0->unk858;
    arg0->unk80 = (s32) temp_7_14->unk10;
    temp_6_28 = *(((((s64) (temp_7_14->unk20 << 0x1B) >> 0x20) & 0xF) * 4) + D_00132E98);
    arg0->unkCC = (s32) arg1->unk5C;
    arg0->unk88 = (s64) temp_6_28;
    arg0->unkD0 = (s32) arg1->unk60;
    arg0->unkB4 = (s32) arg1->unk44;
    arg0->unkB8 = (s32) arg1->unk48;
    arg0->unkBC = (s32) arg1->unk4C;
    arg0->unkC0 = (s32) arg1->unk50;
    arg0->unkC4 = (s32) arg1->unk54;
    arg0->unkC8 = (s32) arg1->unk58;
    if (_isOutSizeOK(arg0, arg1, temp_6_28, temp_7_14) != 0) {
        if (arg1->unk28 == 1) {
            if (arg0->unkB0 != 0) {
                _csc_storeRefImage(arg0, arg1);
            } else {
                _cpr8(arg0, arg1);
            }
            func_00129B38(arg0);
        }
    }
}
#endif /* NON_MATCHING */
