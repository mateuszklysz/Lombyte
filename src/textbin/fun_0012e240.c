/* ROLE: recovered function `snd_SetPlaybackMode` starts here; this unit covers only its beginning. */
#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012e240(s32 arg0) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    func_0012E6E0(11, 4, sp_slot, 0, 0);
}
