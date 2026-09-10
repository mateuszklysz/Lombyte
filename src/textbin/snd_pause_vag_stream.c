/* ROLE: recovered whole function `snd_PauseVAGStream`. */
#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012ec70(s32 arg0) {
    u8 sp_slot[0x10];
    *(s32 *)(sp_slot + 0) = arg0;
    func_0012E6E0(45, 4, sp_slot, 0, 0);
}

/* Recovered original symbol name. */
extern __typeof__(FUN_0012ec70) snd_PauseVAGStream __attribute__((alias("FUN_0012ec70")));
