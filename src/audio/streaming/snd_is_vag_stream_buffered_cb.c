#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void snd_is_vag_stream_buffered_cb(s32 arg0, s32 arg1, s32 arg2) __asm__("FUN_0012ed00");

void snd_is_vag_stream_buffered_cb(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    func_0012E6E0(79, 4, sp_slot, arg1, arg2);
}

/* Recovered original symbol name. */
extern __typeof__(snd_is_vag_stream_buffered_cb) snd_IsVAGStreamBuffered_CB __attribute__((alias("FUN_0012ed00")));
