#include "types.h"

s32 AddMpegCallback(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *base = *(u8 **)(arg0 + 0x40);
    u8 *q = base + 0xC;
    s32 off = arg1 << 3;
    s32 old;

    q += off;
    base += off;
    ((u32 *)base)[4] = arg3;
    old = ((u32 *)q)[0];
    ((u32 *)q)[0] = arg2;
    return old;
}
