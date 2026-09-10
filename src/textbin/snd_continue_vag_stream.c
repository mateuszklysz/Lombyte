/* ROLE: recovered whole function `snd_ContinueVAGStream`. */
#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012eca0(s32 arg0) {
    u8 sp_slot[0x10];
    *(s32 *)(sp_slot + 0) = arg0;
    func_0012E6E0(46, 4, sp_slot, 0, 0);
}

extern __typeof__(FUN_0012eca0) func_0012ECA0 __attribute__((alias("FUN_0012eca0")));

/* Recovered original symbol name. */
extern __typeof__(FUN_0012eca0) snd_ContinueVAGStream __attribute__((alias("FUN_0012eca0")));
