#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/video/decoder/vi_buf_add_dma/FUN_0023bf70.s", FUN_0023bf70);
#else
#include "types.h"
#include "eetypes.h"

#define DGET(a) (*(volatile u32 *)(a))

typedef struct {
    u128 *data; u128 *tag; s32 n; s32 dmaStart; s32 dmaN; s32 readBytes; s32 buffSize; u8 pad1C[0x24];
    s32 sema; s32 isActive;
} ViBuf;

extern u8 D_001E8B20[];
extern s32 WaitSema(s32);
extern s32 SignalSema(s32);
extern void func_0023AB78(s32);
extern s32 func_0023BAF8(ViBuf *, s32);
extern void func_0023BBB0(s32);
extern void func_0023BC20(u128 *, u32, s32, s32);

s32 vi_buf_add_dma(ViBuf *f) __asm__("FUN_0023bf70");

s32 vi_buf_add_dma(ViBuf *f) {
    s32 r;
    s32 len;
    s32 start;
    s32 total;
    s32 x;
    s32 blocks;
    s32 i;
    s32 flag;
    s32 chcr;
    s32 t;
    s32 t2;
    s32 last;
    s32 mode;
    s32 idx;

    flag = 0;
    WaitSema(f->sema);
    if (f->isActive == 0) {
        func_0023AB78(D_001E8B20);
        return 0;
    }
    func_0023BBB0(5);
    chcr = DGET(0x1000B400);
    r = (func_0023BAF8(f, DGET(0x1000B410)) + f->n - f->dmaStart) % f->n;
    len = f->dmaN - r;
    start = (f->dmaStart + r) % f->n;
    f->dmaN = len;
    f->dmaStart = start;
    total = start + len;
    x = total % f->n;
    t = f->readBytes;
    t2 = ((t > -1) ? t : t + 0x7FF);
    blocks = t2 >> 0xB;
    f->readBytes = t - (blocks << 0xB);
    if (blocks > 0) {
        idx = (total + (f->n - 1)) % f->n;
        func_0023BC20(f->tag + idx, (u32)f->data + (idx << 0xB), 3, 0x80);
        flag = 1;
    }
    last = blocks - 1;
    for (i = 0; i < blocks; i++) {
        mode = ((i ^ last) != 0) ? 3 : 0;
        func_0023BC20(f->tag + x, (u32)f->data + (x << 0xB), mode, 0x80);
        x = (x + 1) % f->n;
    }
    f->dmaN += blocks;
    if (f->dmaN != 0) {
        if (flag != 0) {
            chcr = (chcr & 0x0FFFFFFF) | 0x30000000;
        }
        func_0023BBB0(chcr | 0x100);
    }
    SignalSema(f->sema);
    return 1;
}
#endif /* NON_MATCHING */
