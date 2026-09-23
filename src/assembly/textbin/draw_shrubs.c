#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/draw_shrubs/FUN_00228b38.s", FUN_00228b38);
#else
#include "types.h"
extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern u8 D_001603B0[];
extern u8 D_001603C0[];
extern s32 D_001603F0;
extern s32 D_00160F00;
extern s32 D_0018A2D0;
extern u8 D_001D8EB0[];
extern void FlushCache();
extern void WriteDmaChannel();
extern void func_001F21B0();
extern void func_001F21B8();
extern void func_002288F0();
extern void func_00228BE8();
void FUN_00228b38(void) {
    D_001603F0 = D_00160F00;
    D_0015EE74 = D_0015EE78;
    D_00160F00 += 0x10;
    func_001F21B8(D_001603B0, 1);
    if (D_0018A2D0 != 0) {
        FlushCache(0);
        func_00228BE8();
        WriteDmaChannel(D_001D8EB0, 0x3200, 0x40);
    }
    func_001F21B8(D_001603C0, 7);
    func_002288F0();
    func_001F21B0(D_001603C0, 7);
}
#endif /* NON_MATCHING */
