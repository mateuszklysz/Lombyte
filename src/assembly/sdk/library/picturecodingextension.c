/*
STATE: C_NON_MATCHING
SYMBOL: _pictureCodingExtension
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _pictureCodingExtension; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/picturecodingextension/_pictureCodingExtension.s", _pictureCodingExtension);
#else
#include "rnc/assembly_sdk_library_picturecodingextension_types.h"
#include "types.h"


extern s32 _nextBit();
void _pictureCodingExtension(struct M2c_arg0 *arg0) {
    s32 temp_2_35;
    s32 temp_6_65;
    s32 temp_6_77;
    s32 temp_6_89;

    arg0->unk164 = _nextBit(arg0, 4);
    arg0->unk168 = _nextBit(arg0, 4);
    arg0->unk16C = _nextBit(arg0, 4);
    arg0->unk170 = _nextBit(arg0, 4);
    *(s32 *)0x10002010 = (*(s32 *)0x10002010 & 0xFFFCFFFF) | (_nextBit(arg0, 2) << 0x10);
    temp_2_35 = _nextBit(arg0, 2, 0xFFFCFFFF, 0x10002010);
    arg0->unk174 = temp_2_35;
    if (arg0->unkD4 == 0) {
        arg0->unkD4 = temp_2_35;
    }
    arg0->unk178 = _nextBit(arg0, 1);
    arg0->unk17C = _nextBit(arg0, 1);
    arg0->unk180 = _nextBit(arg0, 1);
    temp_6_65 = (*(volatile u32 *)0x10002010 & 0xFFBFFFFF) | (_nextBit(arg0, 1) << 0x16);
    *(volatile u32 *)0x10002010 = temp_6_65;
    temp_6_77 = (*(volatile u32 *)0x10002010 & 0xFFDFFFFF) | (_nextBit(arg0, 1, temp_6_65) << 0x15);
    *(volatile u32 *)0x10002010 = temp_6_77;
    temp_6_89 = (*(volatile u32 *)0x10002010 & 0xFFEFFFFF) | (_nextBit(arg0, 1, temp_6_77) << 0x14);
    *(volatile u32 *)0x10002010 = temp_6_89;
    arg0->unk184 = _nextBit(arg0, 1, temp_6_89);
    _nextBit(arg0, 1);
    arg0->unk188 = _nextBit(arg0, 1);
    if (_nextBit(arg0, 1) != 0) {
        _nextBit(arg0, 1);
        _nextBit(arg0, 3);
        _nextBit(arg0, 1);
        _nextBit(arg0, 7);
        _nextBit(arg0, 8);
    }
}
#endif /* NON_MATCHING */
