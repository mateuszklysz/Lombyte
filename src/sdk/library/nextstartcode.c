/*
STATE: C_EXACT
SYMBOL: _nextStartCode
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
extern void _waitIpuIdle(s32 *ctx);
extern s32 _peepBit(s32 *ctx, s32 count);
extern void _flushBuf(s32 *ctx, s32 count);
void _nextStartCode(s32 *arg0) {
    s32 raw;
    s32 amount;
    _waitIpuIdle(arg0);
    raw = *(volatile s32 *)0x10002020;
    amount = (-(raw & 7)) & 7;
    if (amount != 0) {
        _flushBuf(arg0, amount);
    }
    while (_peepBit(arg0, 0x18) != 1) {
        _flushBuf(arg0, 8);
    }
}
