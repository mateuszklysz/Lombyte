#include "types.h"
struct Level { u8 pad0[0x4F8]; s32 dest; s32 sectors; };
extern struct Level D_00137B80;
extern u8 D_1FF7FF0[];
extern s32 *D_0015EE4C;
extern void func_00216728(void *, s32, s32);
s32 FUN_002043b0(void) {
    D_0015EE4C = (s32 *)((s32)((u32)D_1FF7FF0 - (((D_00137B80.sectors << 11) + 0x1057) & 0xFFFFF000)) & -0x10);
    *D_0015EE4C = 0x60;
    func_00216728((u8 *)D_0015EE4C + *D_0015EE4C, D_00137B80.dest, D_00137B80.sectors);
    return 1;
}

extern __typeof__(FUN_002043b0) func_002043B0 __attribute__((alias("FUN_002043b0")));
