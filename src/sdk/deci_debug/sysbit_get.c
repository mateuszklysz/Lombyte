/*
STATE: C_EXACT
SYMBOL: _sysbitGet
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern s32 SignExtendPackedValue();
extern s32 _sysbitFlush();

s32 _sysbitGet(s32 bitstream, s32 flush_flags)
{
    s32 decoded_value;

    decoded_value = SignExtendPackedValue();
    _sysbitFlush(bitstream, flush_flags);
    return decoded_value;
}
