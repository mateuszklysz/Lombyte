#include "types.h"
#include "rnc/d_001516d0.h"

extern u8 D_0013A664[];
extern s32 D_0015ED88;
// D_002169C0 is a code address retail passes as a pointer, not a data symbol;
// config/us/undefined_syms.txt binds its absolute value so this extern links.
extern u8 D_002169C0[];
extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012EC08();
extern void FUN_00215440(s32, s32, s32);
extern void FUN_00215518(s32, s32, s32);
extern void FUN_00215600(s32, s32, s32);
extern void FUN_002156d8(s32, s32, s32);
extern void FUN_002157d0(s32, s32, s32);
extern void FUN_002158a0(s32, s32, s32);

void FUN_00215970(s32 arg0, s32 arg1, s32 arg2) {
    s32 handle;

    if (arg0 > 0xEA5F) {
        FUN_00215440(arg0, arg1, arg2);
    } else if (arg0 > 0xC34F) {
        FUN_00215518(arg0, arg1, arg2);
    } else if (arg0 > 0x9C3F) {
        FUN_00215600(arg0, arg1, arg2);
    } else if (arg0 >= 0x7530) {
        FUN_002156d8(arg0, arg1, arg2);
    } else if (arg0 >= 0x4E20) {
        FUN_002157d0(arg0, arg1, arg2);
    } else if (arg0 >= 0x2710) {
        FUN_002158a0(arg0, arg1, arg2);
    } else {
        handle = *((s32 *)((u8 *)D_0013A664 + arg0 * 0x250) + D_0015ED88);
        if (handle != 0) {
            if (D_001516D0.unk50 == 0) {
                *(u32 *)&D_001516D0.unk50 = 0xFFFFFFFF;
                D_001516D0.unk5A = 1;
                D_001516D0.unk54 = arg0;
                D_001516D0.unk58 = arg1;
                D_001516D0.unk64 = 10;
                D_001516D0.unk68 = 48000;
                D_001516D0.unk56 = arg2;
                D_001516D0.unk60 = 0;
                func_0012EC08(handle, 0, 0, 0, (s16) arg2, 0, 2, 0, 0x21, D_002169C0, (u64) ((s64) (((u8 *)&D_001516D0 + 0x50)) << 0x20) >> 0x20);
            }
        }
    }
}

extern __typeof__(FUN_00215970) func_00215970 __attribute__((alias("FUN_00215970")));
