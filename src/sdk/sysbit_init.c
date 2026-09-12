/*
STATE: C_EXACT
SYMBOL: _sysbitInit
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"

typedef struct SysbitState {
    s64 bits;
    s32 field8;
    u32 bit_pointer;
    u32 cnt;
    u32 pad14;
    s64 total;
    u32 base;
    u32 limit;
    u32 wrap_base;
} SysbitState;

extern void _sysbitFlush(SysbitState *ctx, s32 amount);

void _sysbitInit(SysbitState *ctx, s32 arg1, s32 arg2, s32 arg3) {
    ctx->field8 = arg1;
    ctx->bit_pointer = arg1;
    ctx->bits = 0;
    ctx->cnt = 0;
    ctx->total = 0;
    ctx->base = arg2;
    ctx->limit = arg2 + arg3;
    ctx->wrap_base = arg3;
    _sysbitFlush(ctx, 0);
}
