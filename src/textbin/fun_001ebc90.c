/*
STATE: C_EXACT
SYMBOL: BackupCurrentCam
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `BackupCurrentCam` starts here; this unit covers only its beginning. */

#include "types.h"
struct M2c_D_00189210 {
    u8 pad_0[0x70];
    s32 unk70;
};

extern u32 D_001870C0[];
extern struct M2c_D_00189210 D_00189210;
extern u8 D_001898D0[];
extern s32 FUN_001f98d0();
void FUN_001ebc90(void) {
    FUN_001f98d0(&D_00189210, D_001870C0[0], 0xA0);
    FUN_001f98d0(D_001898D0, ((u8 *)D_001898D0 - (u8 *)0x500), 0x280);
    D_00189210.unk70 = D_001898D0;
}
