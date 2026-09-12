/*
STATE: C_NON_MATCHING
SYMBOL: _nextStartCode
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _nextStartCode; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/nextstartcode/_nextStartCode.s", _nextStartCode);
#else
#include "types.h"
extern s32 _flushBuf(); extern s32 _peepBit(); extern s32 _waitIpuIdle();
void _nextStartCode(s32 arg0) {
    register s32 *ipu __asm__("v0");
    register s32 raw __asm__("v1");
    register s32 one __asm__("s1");
    register s32 amount __asm__("a1");
    register s32 input __asm__("s0") = arg0;
    ipu = (s32 *)0x10002020;
    one = 1;
    _waitIpuIdle();
    raw = *ipu;
    amount = (- (raw & 7)) & 7;
    if (amount == 0) goto loop_3;
    _flushBuf(input, amount);
    goto loop_3;
block_2:
    _flushBuf(input, 8);
loop_3:
    if (_peepBit(input, 0x18) != one) goto block_2;
}
#endif /* NON_MATCHING */
