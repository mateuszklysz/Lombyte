/* ROLE: recovered function `snd_SoundIsStillPlaying_CB` starts here; this unit covers only its beginning. */
#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012e448(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    func_0012E6E0(25, 4, sp_slot, arg1, arg2);
}
