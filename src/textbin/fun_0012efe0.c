/* ROLE: recovered function `snd_AutoReverb` starts here; this unit covers only its beginning. */
#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012efe0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp_slot[0x10];
    *(s32 *)(sp_slot + 0) = arg0;
    *(s32 *)(sp_slot + 4) = arg1;
    *(s32 *)(sp_slot + 8) = arg2;
    *(s32 *)(sp_slot + 12) = arg3;
    func_0012E6E0(16, 16, sp_slot, 0, 0);
}
