/*
STATE: C_NON_MATCHING
SYMBOL: _nextHeader
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _nextHeader; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/next_header/_nextHeader.s", _nextHeader);
#else
#include "rnc/assembly_sdk_library_next_header_types.h"
#include "types.h"


extern s32 _dispatchMpegCallback();
extern s32 _groupOfPicturesHeader();
extern s32 _nextBit();
extern s32 _nextStartCode();
extern s32 _pictureHeader();
extern s32 _sequenceHeader();
s32 _nextHeader(struct M2c_arg0 *arg0) {
u8 sp_slot[0xA0];    s64 sp8;
    s64 sp10;
    s32 var_2_36;
    u32 temp_2_23;

loop_1:
    _nextStartCode(arg0);
    temp_2_23 = _nextBit(arg0, 0x20);
    if (temp_2_23 == 0x1B3) {
        goto block_8;
    }
    if (temp_2_23 >= 0x1B4U) {
        goto block_5;
    }
    if (temp_2_23 == 0x100) {
        goto block_10;
    }
    goto loop_1;
block_5:
    var_2_36 = 0;
    if (temp_2_23 == 0x1B7) {
        goto block_11;
    }
    if (temp_2_23 == 0x1B8) {
        goto block_9;
    }
    goto loop_1;
block_8:
    _sequenceHeader(arg0);
    goto loop_1;
block_9:
    _groupOfPicturesHeader(arg0);
    goto loop_1;
block_10:
    _pictureHeader(arg0);
    sp10 = -1;
    sp8 = -1;
    _dispatchMpegCallback(arg0->unk858, sp_slot, 5);
    arg0->unk830 = sp10;
    arg0->unk828 = sp8;
    var_2_36 = arg0->unk150;
block_11:
    return var_2_36;
}
#endif /* NON_MATCHING */
