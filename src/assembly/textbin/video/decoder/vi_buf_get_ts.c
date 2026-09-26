#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/video/decoder/vi_buf_get_ts/FUN_0023c920.s", FUN_0023c920);
#else
#include "types.h"
#include "eetypes.h"
#define DGET(a) (*(volatile u32 *)(a))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
typedef struct { s64 pts; s64 dts; s32 pos; s32 len; } TimeStamp;
typedef struct {
    u128 *data; u128 *tag; s32 n; s32 dmaStart; s32 dmaN; s32 readBytes; s32 buffSize; u8 pad1C[0x1C];
    s32 x38; u8 pad3C[4]; s32 sema; s32 isActive; s64 totalBytes; TimeStamp *ts; s32 n_ts; s32 count_ts; s32 wt_ts;
} ViBuf;
extern s32 WaitSema(s32);
extern s32 SignalSema(s32);
static inline s32 IsInRegion(s32 tgt, s32 start, s32 len, s32 size) {
    return (tgt + size - start) % size < len;
}
s32 vi_buf_get_ts(ViBuf *f, TimeStamp *ts) __asm__("FUN_0023c920");

s32 vi_buf_get_ts(ViBuf *f, TimeStamp *ts) {
    u32 d4madr;
    u32 ipubp;
    s32 fifo;
    s32 bp;
    s32 datasize;
    u32 pos;
    s32 i;
    s32 rd;
    s32 isEnd;
    s32 start;
    s32 count;

    d4madr = DGET(0x1000B410);
    ipubp = DGET(0x10002020);
    bp = f->x38 & 0x7F;
    fifo = ((ipubp >> 16) & 0x3) + ((ipubp >> 8) & 0xF);
    datasize = f->n << 11;
    isEnd = 0;
    d4madr -= fifo << 4;
    WaitSema(f->sema);
    ts->pts = -1;
    ts->dts = -1;
    pos = (d4madr + (bp >> 3) + datasize - (u32)f->data) % datasize;
    count = f->count_ts;
    start = f->wt_ts - count;
    for (i = 0; i < count && !isEnd; i++) {
        rd = (start + f->n_ts + i) % f->n_ts;
        if (IsInRegion(pos, f->ts[rd].pos, f->ts[rd].len, datasize)) {
            isEnd = 1;
            ts->pts = f->ts[rd].pts;
            ts->dts = f->ts[rd].dts;
            f->ts[rd].pts = -1;
            f->ts[rd].dts = -1;
            f->count_ts -= MIN(1, f->count_ts);
        }
    }
    SignalSema(f->sema);
    return 1;
}
#endif /* NON_MATCHING */
