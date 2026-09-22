#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001206d8/FUN_001206d8.s", FUN_001206d8);
#else
#include "types.h"
extern s32 D_001312D4[];
extern s32 D_001312E0;
extern s32 D_001312E8;
extern s32 D_001312F0[];
extern s32 D_00131314[];
extern s32 D_00131318[];
extern s32 D_00159740;
extern s32 iSignalSema();
void FUN_001206d8(s32 *arg0) {
    D_00131314[0] = *arg0;
    D_00131318[0] = D_00131314[0];
    if (D_00131314[0] == 0xB) {
        D_00131314[0] = 0;
        D_001312F0[0] = 0;
        return;
    }
    iSignalSema(D_001312E8, 0xB);
    if ((D_001312D4[0] != 0) && (D_00159740 != 0)) {
        iSignalSema(D_001312E0);
    } else {
        D_001312F0[0] = 0;
    }
    D_00131314[0] = 0;
}
#endif /* NON_MATCHING */
