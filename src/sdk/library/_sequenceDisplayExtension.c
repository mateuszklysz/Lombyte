/*
STATE: C_EXACT
SYMBOL: _sequenceDisplayExtension
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x144];
    s32 unk144;
    s32 unk148;
    s32 unk14C;
};

extern s32 _nextBit();
void _sequenceDisplayExtension(struct M2c_arg0 *arg0) {
    _nextBit(arg0, 3);
    if (_nextBit(arg0, 1) != 0) {
        _nextBit(arg0, 8);
        _nextBit(arg0, 8);
        arg0->unk144 = _nextBit(arg0, 8);
    }
    arg0->unk148 = _nextBit(arg0, 0xE);
    _nextBit(arg0, 1);
    arg0->unk14C = _nextBit(arg0, 0xE);
}
