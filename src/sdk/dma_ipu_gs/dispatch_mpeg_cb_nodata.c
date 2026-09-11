/*
STATE: C_EXACT
SYMBOL: _dispatchMpegCbNodata
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern void DispatchMpegCallback(void *callback, u32 *callback_data)
    __asm__("_dispatchMpegCallback");

void DispatchMpegCallbackNoData(void *callback)
    __asm__("_dispatchMpegCbNodata");

void DispatchMpegCallbackNoData(void *callback)
{
    u32 callback_data[8];
    callback_data[0] = 1;
    DispatchMpegCallback(callback, callback_data);
}
