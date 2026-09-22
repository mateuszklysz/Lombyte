#include "types.h"

void FUN_002032e0(u8 *a0, s32 idx, s32 on) {
    u8 *base = a0;
    u8 *p;
    u32 v;

    base += idx * 4;
    p = *(u8 **)(base + 72);
    v = *(u32 *)(p + 20);
    if (v != 0) {
        *(u32 *)(p + 20) = (u32)(p + v);
    }
    if (*(u8 *)(p + 16) != 0) {
        s32 i = 0;
        u32 *q = (u32 *)(p + 28);
        do {
            *q = (u32)(p + *q);
            i++;
            q++;
        } while (i < *(u8 *)(p + 16));
    }
}
