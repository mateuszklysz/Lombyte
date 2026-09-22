#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/draw_mobys_setup/FUN_0020d278.s", FUN_0020d278);
#else
#include "types.h"
extern u8 D_00100080[];
extern u16 D_0010FA90;
extern u8 D_0010FAA0[];
extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern s32 D_0015F620;
extern s32 D_0015F638;
extern s32 D_0015F63C;
extern u8 D_0015FED0[];
extern s32 D_0015FF0C;
extern s32 D_0015FF14;
extern s32 D_0015FF40;
extern s32 D_00160F00;
extern s32 D_00160F08;
extern s32 func_001F21B8();
extern s32 func_002334D8();
extern s32 func_00233830();
extern s32 func_00233980();
void FUN_0020d278(void) {
    func_00233830(D_0010FAA0, D_0010FA90);
    D_0015F620 = 6;
    func_002334D8(D_00100080);
    func_00233980(0x47, 0x5360B);
    D_0015FF0C = D_00160F00;
    D_0015EE74 = D_0015EE78;
    D_00160F00 += 0x10;
    func_001F21B8(D_0015FED0, 1);
    D_0015FF40 = 0;
    D_00160F08 = D_0015F63C + 0xFFFF0000;
    D_0015FF14 = D_0015F638;
}
#endif /* NON_MATCHING */
