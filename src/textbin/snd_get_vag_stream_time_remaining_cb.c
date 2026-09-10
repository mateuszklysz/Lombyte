/* ROLE: recovered whole function `snd_GetVAGStreamTimeRemaining_CB`. */
#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012ecd0(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    func_0012E6E0(50, 4, sp_slot, arg1, arg2);
}

/* Recovered original symbol name. */
extern __typeof__(FUN_0012ecd0) snd_GetVAGStreamTimeRemaining_CB __attribute__((alias("FUN_0012ecd0")));
