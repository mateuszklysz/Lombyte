#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void snd_continue_vag_stream(s32 arg0) __asm__("FUN_0012eca0");

void snd_continue_vag_stream(s32 arg0) {
    u8 sp_slot[0x10];
    *(s32 *)(sp_slot + 0) = arg0;
    func_0012E6E0(46, 4, sp_slot, 0, 0);
}

extern __typeof__(snd_continue_vag_stream) func_0012ECA0 __attribute__((alias("FUN_0012eca0")));

/* Recovered original symbol name. */
extern __typeof__(snd_continue_vag_stream) snd_ContinueVAGStream __attribute__((alias("FUN_0012eca0")));
