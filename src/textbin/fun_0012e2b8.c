#include "types.h"
extern s32 func_0012E6E0(s32 cmd, s32 size, void *buf, s32 a, s32 b);
void FUN_0012e2b8(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp_slot[0x10];
    *(s32 *)(sp_slot + 0) = arg0;
    *(s32 *)(sp_slot + 4) = arg1;
    *(s32 *)(sp_slot + 8) = arg2;
    func_0012E6E0(78, 12, sp_slot, 0, 0);
}
