/*
STATE: C_EXACT
SYMBOL: FUN_0023aa68
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc2.95.2 cc1 + Ps2EeAs (cc_sn_padless); register pin v0 on the second D_0016120C pointer load
DECISION: promoted
BLOCKER: none
*/

/* ROLE: recovered function `termAll__Fv` starts here; this unit covers only its beginning. */


#include "types.h"
struct M2c_D_0016120C {
    u8 pad_0[0xD90F8];
    s32 unkD90F8;
    s32 unkD90FC;
};
extern struct M2c_D_0016120C *D_0016120C;
extern s32 D_00161210;
extern s32 DeleteThread();
extern s32 RemoveDmacHandler();
extern s32 RemoveIntcHandler();
extern s32 TerminateThread();
extern s32 func_00119028();
extern s32 func_001190F8();
extern s32 func_0023AC90();
extern s32 func_0023B958();
extern s32 func_0023BA58();
extern s32 func_0023CC38();
extern s32 func_0023D1E0();
extern s32 sceCdSync();
void FUN_0023aa68(void) {
    register struct M2c_D_0016120C *p2 asm("v0");
    sceCdSync(0);
    func_0023B958(D_0016120C);
    p2 = D_0016120C;
    func_0023D1E0((u8 *)p2 + 0xD9168);

    TerminateThread(D_00161210);
    DeleteThread(D_00161210);
    func_001190F8(2);
    RemoveDmacHandler(2, *(s32 *)((u8 *)D_0016120C + 0xD90F8));
    func_00119028(2);
    RemoveIntcHandler(2, *(s32 *)((u8 *)D_0016120C + 0xD90FC));
(void) 0;
    func_0023CC38((u8 *)D_0016120C + 0xD9048);
    func_0023AC90((u8 *)D_0016120C + 0xD9100);
    func_0023BA58((u8 *)D_0016120C + 0xD9040);
    sceCdSync(0);
    *(s32 *)0x1000E000 &= 0xFFFFFFFD;
}

extern __typeof__(FUN_0023aa68) func_0023AA68 __attribute__((alias("FUN_0023aa68")));
