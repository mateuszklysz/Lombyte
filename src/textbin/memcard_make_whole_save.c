#include "types.h"

extern u8 D_001A04C0[];
extern u8 D_001A07C0[];
extern s32 GetDmaPacketSpanBytes(u8 *);
extern s32 func_0020AD78(u8 *, s32, u8 *);

void FUN_0020abb0(u8 *arg0)
{
    s32 index;
    s32 size;

    *(s32 *)(arg0 + 0x0) = GetDmaPacketSpanBytes(D_001A04C0);
    *(s32 *)(arg0 + 0x4) = GetDmaPacketSpanBytes(D_001A07C0);
    arg0 += 8;
    arg0 += func_0020AD78(arg0, 0, D_001A04C0);
    index = 0;
    do
    {
        size = func_0020AD78(arg0, index, D_001A07C0);
        arg0 += size;
        index++;
    } while (index < 0x14);
}

extern __typeof__(FUN_0020abb0) func_0020ABB0 __attribute__((alias("FUN_0020abb0")));
