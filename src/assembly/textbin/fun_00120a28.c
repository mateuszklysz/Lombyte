#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00120a28/FUN_00120a28.s", FUN_00120a28);
#else
#include "types.h"
struct M2c_D_00132490 {
    u8 pad_0[0x24];
    s32 unk24;
};

extern s32 D_001312D0;
extern s32 D_001312DC;
extern s32 D_001312E8;
extern s32 D_001312F8;
extern struct M2c_D_00132490 D_00132490;
extern u8 D_00152EB0[];
extern u8 D_00152ED8[];
extern s32 D_00159750;
extern u8 D_00159758[];
extern u8 D_FFFFF[];
extern s32 PollSema();
extern void ReferThreadStatus();
extern void SignalSema();
extern void cmd_sem_init();
extern s32 sceCdSync();
extern void scePrintf();
extern s32 sceSifBindRpc();
extern void sceSifInitRpc();
s32 FUN_00120a28(s32 arg0) {
    s32 *var_2_55;
    s32 *var_2_78;
    cmd_sem_init();
    if (*(s32 *)0x1312E8 == PollSema(*(s32 *)0x1312E8)) {
        goto block_3;
    }
    if (D_001312D0 <= 0) {
        goto block_5;
    }
    scePrintf(D_00152EB0, arg0, *(s32 *)0x1312DC);
    return 0;
block_3:
    *(s32 *)0x1312DC = arg0;
    ReferThreadStatus(*(s32 *)0x159750, D_00159758);
    if (sceCdSync(1) == 0) {
        goto block_6;
    }
    SignalSema(*(s32 *)0x1312E8);
block_5:
    return 0;
block_6:
    sceSifInitRpc(0);
    if (D_001312F8 >= 0) {
        goto block_21;
    }
    goto loop_11;
block_9:
    var_2_55 = D_FFFFF;
loop_10:
    if (var_2_55 != (void *)-1) {
        goto loop_10;
    }
loop_11:
    if (sceSifBindRpc(&D_00132490, 0x80000595, 0) < 0) {
        goto block_13;
    }
    goto block_19;
block_13:
    var_2_78 = D_FFFFF;
    if (D_001312D0 <= 0) {
        goto block_16;
    }
    scePrintf(D_00152ED8);
    var_2_78 = (void *)0x100000;
block_16:
loop_17:
    if (var_2_78 != (void *)-1) {
        goto loop_17;
    }
    goto loop_11;
block_19:
    if (D_00132490.unk24 == 0) {
        goto block_9;
    }
    D_001312F8 = 0;
block_21:
    return 1;
}
#endif /* NON_MATCHING */
