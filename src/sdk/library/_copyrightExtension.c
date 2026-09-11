/*
STATE: C_EXACT
SYMBOL: _copyrightExtension
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s32 _nextBit();
void _copyrightExtension(s32 arg0) {
    _nextBit(arg0, 1);
    _nextBit(arg0, 8);
    _nextBit(arg0, 1);
    _nextBit(arg0, 7);
    _nextBit(arg0, 1);
    _nextBit(arg0, 0x14);
    _nextBit(arg0, 1);
    _nextBit(arg0, 0x16);
    _nextBit(arg0, 1);
    _nextBit(arg0, 0x16);
}
