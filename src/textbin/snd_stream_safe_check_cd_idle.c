#include "types.h"
extern s32 func_0012E548();
void FUN_0012ed30(s32 arg0) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    func_0012E548(0x36, 4, sp_slot);
}

extern __typeof__(FUN_0012ed30) func_0012ED30 __attribute__((alias("FUN_0012ed30")));

/* Recovered original symbol name. */
extern __typeof__(FUN_0012ed30) snd_StreamSafeCheckCDIdle __attribute__((alias("FUN_0012ed30")));
