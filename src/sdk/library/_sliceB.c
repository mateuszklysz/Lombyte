/*
STATE: C_EXACT
SYMBOL: _sliceB
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x1B4];
    s32 unk1B4;
};

extern s32 _extrainfo();
extern s32 _flushBuf();
extern s32 _nextBit();
s32 _sliceB(struct M2c_arg0 *arg0) {
    arg0->unk1B4 = _nextBit(arg0, 5);
    if (_nextBit(arg0, 1) != 0) {
        _nextBit(arg0, 1);
        _flushBuf(arg0, 7);
        _extrainfo(arg0);
    }
    return 0;
}
