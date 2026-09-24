#include "types.h"
extern s32 WaitSema(s32);
extern s32 SignalSema(s32);
struct Stream { u8 pad0[0x14]; s32 pos; u8 pad18[0x28]; s32 sema; };
void FUN_0023c660(struct Stream *s) {
    WaitSema(s->sema);
    s->pos = (s->pos + 0x7FF) / 0x800 * 0x800;
    SignalSema(s->sema);
}

extern __typeof__(FUN_0023c660) func_0023C660 __attribute__((alias("FUN_0023c660")));
