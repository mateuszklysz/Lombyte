#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void snd_set_playback_mode(s32 arg0) __asm__("FUN_0012e240");

void snd_set_playback_mode(s32 arg0) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    func_0012E6E0(11, 4, sp_slot, 0, 0);
}
