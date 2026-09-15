/*
STATE: C_EXACT
SYMBOL: FUN_0020d3b0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `DrawMobysCleanUp` starts here; this unit covers only its beginning. */


#include "types.h"

struct M2c_D_0018A2B0 {
    u8 pad_0[0x28];
    s32 unk28;
};

extern u8 D_0015FEE0[];
extern u8 D_0015FEF0[];
extern s32 D_0015FF38[];
extern s32 D_0015FF40;
extern struct M2c_D_0018A2B0 D_0018A2B0;
extern s32 func_001F21B0();
extern s32 func_001F21B8();
extern s32 FUN_0020cdf0();
extern s32 FUN_0020d060();
extern s32 FUN_0020d1a8();
extern s32 FUN_002116b8();

void FUN_0020d3b0(void) {
    register s32 f __asm__("v0");
    register struct M2c_D_0018A2B0 *base __asm__("v0");
    register s32 q __asm__("v1");
    func_001F21B8(D_0015FEE0, 3);
    FUN_0020cdf0();
    func_001F21B0(D_0015FEE0, 5);
    base = &D_0018A2B0;
    q = base->unk28;
    if (q != 0) {
        FUN_0020d1a8();
        f = *(s32 *)0x15FF38;
        if (f != 0) {
            FUN_002116b8();
        }
    }
    func_001F21B0(D_0015FEF0, 3);
    base = &D_0018A2B0;
    q = base->unk28;
    if (q != 0) {
        if (D_0015FF40 != 0) {
            FUN_0020d060();
        }
    }
}
