/*
STATE: C_NON_MATCHING
SYMBOL: _decodeOrSkipField
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _decodeOrSkipField; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_decodeOrSkipField/_decodeOrSkipField.s", _decodeOrSkipField);
#else
#include "rnc/assembly_sdk_library__decodeOrSkipField_types.h"
#include "types.h"




extern s32 _decPicture();
extern s32 _dispatchMpegCbNodata();
extern s32 _nextHeader();
extern s32 _outputFrame();
extern s32 _sceMpegFlush();
extern s32 _updateRefImage();
s32 _decodeOrSkipField(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    s32 var_19_7;
    s32 var_20_63;
    s32 var_2_56;
    struct M2c_temp_16_13 *temp_16_13;

    var_19_7 = 0;
    temp_16_13 = arg0->unk40;
    temp_16_13->unk120 = 0;
    if (arg2 == -1) {
        goto block_2;
    }
    if (arg1 >= arg2) {
        goto block_3;
    }
block_2:
    var_19_7 = 1;
block_3:
    if (temp_16_13->unk8 != 0) {
        goto block_5;
    }
    arg0->unk8 = 0;
    temp_16_13->unk8 = 1;
block_5:
    if (_updateRefImage(temp_16_13, 0) == 0) {
        goto block_8;
    }
    if (var_19_7 == 0) {
        goto block_9;
    }
    _decPicture(temp_16_13);
block_8:
block_9:
    temp_16_13->unk120 = 1;
    if (_nextHeader(temp_16_13) == 0) {
        goto block_11;
    }
    goto block_13;
block_11:
    _sceMpegFlush(arg0);
    temp_16_13->unk0 = 1;
    return 0;
block_13:
    var_2_56 = -1;
    if (temp_16_13->unk174 != (((temp_16_13->unkD4 ^ 1) != 0) ? 1 : 2)) {
        goto block_20;
    }
    var_20_63 = 0;
    if (((_updateRefImage(temp_16_13, 1) != 0) ? 1 : 0) == 0) {
        goto block_17;
    }
    if (var_19_7 == 0) {
        goto block_17;
    }
    var_20_63 = (_decPicture(temp_16_13) != 0) ? 1 : 0;
block_17:
    _outputFrame(temp_16_13, temp_16_13->unk118, temp_16_13->unk4);
    temp_16_13->unk120 = 0;
    arg0->unk8 = (s32) (temp_16_13->unk118 - temp_16_13->unkAC);
    temp_16_13->unk118 = (s32) (temp_16_13->unk118 + 1);
    temp_16_13->unk4 = (s32) (temp_16_13->unk4 + 1);
    if (var_19_7 != 0) {
        goto block_19;
    }
    _dispatchMpegCbNodata(arg0);
block_19:
    var_2_56 = var_20_63;
block_20:
    return var_2_56;
}
#endif /* NON_MATCHING */
