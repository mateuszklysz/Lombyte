/*
STATE: C_NON_MATCHING
SYMBOL: _motionVectors
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _motionVectors; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/motion_vectors/_motionVectors.s", _motionVectors);
#else
#include "rnc/assembly_sdk_library_motion_vectors_types.h"
#include "types.h"






extern s32 _motionVector();
extern s32 _nextBit();
void _motionVectors(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {    s32 arg_sp0;
    s32 arg_sp10;
    s32 arg_sp8;
    s32 sp0;
    s32 temp_17_41;
    s32 temp_2_29;
    struct M2c_temp_16_46 *temp_16_46;
    struct M2c_temp_16_84 *temp_16_84;
    struct M2c_temp_3_33 *temp_3_33;

    sp0 = arg3;
    if (arg5 == 1) {
        if ((arg6 == 0) && (arg_sp8 == 0)) {
            temp_2_29 = _nextBit(arg0, 1);
            temp_3_33 = (arg4 * 4) + sp0;
            temp_3_33->unk8 = temp_2_29;
            temp_3_33->unk0 = temp_2_29;
        }
        temp_16_84 = arg1 + (arg4 * 8);
        _motionVector(arg0, temp_16_84, arg2, arg7, arg_sp0, arg_sp8, arg_sp10, 0);
        temp_16_84->unk10 = (s32) temp_16_84->unk0;
        temp_16_84->unk14 = (s32) temp_16_84->unk4;
        return;
    }
    temp_17_41 = arg4 * 8;
    temp_16_46 = (arg4 * 4) + sp0;
    temp_16_46->unk0 = _nextBit(arg0, 1);
    _motionVector(arg0, arg1 + temp_17_41, arg2, arg7, arg_sp0, arg_sp8, arg_sp10, 0);
    temp_16_46->unk8 = _nextBit(arg0, 1);
    _motionVector(arg0, arg1 + (temp_17_41 + 0x10), arg2, arg7, arg_sp0, arg_sp8, arg_sp10, 0);
}
#endif /* NON_MATCHING */
