#include "types.h"
extern u8 D_0013CC90[];
extern u8 *D_00160F00;
extern void func_00233980(s32, u64);
void FUN_001f5210(s32 r, s32 g, s32 b, s32 a) {
    func_00233980(1, (u64)r | ((u64)g << 8) | ((u64)b << 16) | ((u64)a << 24));
    *(u32 *)(D_00160F00 + 0) = 0x30000014;
    *(u32 *)(D_00160F00 + 4) = (u32)D_0013CC90;
    *(u32 *)(D_00160F00 + 8) = 0;
    *(u32 *)(D_00160F00 + 12) = 0x50000014;
    D_00160F00 += 0x10;
}

extern __typeof__(FUN_001f5210) func_001F5210 __attribute__((alias("FUN_001f5210")));
