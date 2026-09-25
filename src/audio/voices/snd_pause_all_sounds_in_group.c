#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void snd_pause_all_sounds_in_group(s32 arg0) __asm__("FUN_0012e3e8");

void snd_pause_all_sounds_in_group(s32 arg0) {
    u8 sp_slot[0x10];
    *(s32 *)(sp_slot + 0) = arg0;
    func_0012E6E0(22, 4, sp_slot, 0, 0);
}

/* Recovered original symbol name. */
extern __typeof__(snd_pause_all_sounds_in_group) snd_PauseAllSoundsInGroup __attribute__((alias("FUN_0012e3e8")));
