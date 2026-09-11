/*
STATE: C_EXACT
SYMBOL: topThread
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
BLOCKER: none
*/

/* topThread t1: kernel thread dispatcher loop. */

#include "types.h"

typedef struct ThreadEntry {
    u8 type;
    u8 id;
} ThreadEntry;

typedef struct TopThreadCtx {
    s32 counter;
    u32 pad;
    ThreadEntry entries[0x200];
} TopThreadCtx;

extern s32 D_00154500[];
extern u8 D_001526E8[];

extern s32 WaitSema(s32 sema);
extern s32 WakeupThread(s32 id);
extern s32 RotateThreadReadyQueue(s32 priority);
extern s32 SuspendThread(s32 id);
extern s32 kprintf(const char *fmt, ...);

void topThread(TopThreadCtx *ctx) {
    s32 i;
    u8 type;

    for (;;) {
        WaitSema(D_00154500[0]);
        i = ctx->counter & 0x1FF;
        ctx->counter = i + 1;
        type = ctx->entries[i].type;
        switch (type) {
        case 0:
            WakeupThread(ctx->entries[i].id);
            break;
        case 1:
            RotateThreadReadyQueue(ctx->entries[i].id);
            break;
        case 2:
            SuspendThread(ctx->entries[i].id);
            break;
        default:
            kprintf((const char *)D_001526E8);
            break;
        }
    }
}
