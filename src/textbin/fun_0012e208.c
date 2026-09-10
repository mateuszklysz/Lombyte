/* ROLE: recovered function `snd_SetMasterVolume` (snd989, 0x38 bytes) starts here; this unit covers only its first fragment. */
#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012e208(s32 arg0, s32 arg1) {
    u8 sp_slot[0x10];
    *(s32 *)sp_slot = arg0;
    *(s32 *)(sp_slot + 4) = arg1;
    func_0012E6E0(9, 8, sp_slot, 0, 0);
}
