/*
STATE: C_EXACT
SYMBOL: _decodeOrSkip
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "types.h"

extern s32 _decodeOrSkipFrame();
extern s32 _decodeOrSkipField();

s32 _decodeOrSkip(s32 arg0) {
    register s32 arg __asm__("a3") = arg0;
    register s32 *p __asm__("a0") = *(s32 **)(arg + 0x40);
    s32 result;

    if (p[0x5D] != 3) {
        result = _decodeOrSkipField(arg);
    } else {
        result = _decodeOrSkipFrame(arg);
    }
    return result;
}
