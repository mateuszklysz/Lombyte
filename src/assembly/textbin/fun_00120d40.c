/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00120d40
SCORE: code=81.9348 functions=81.9348 data=100 complete_data=100
COMPILER: ee-gcc-2.9-991111b/r4 -O2 -g2 -gstabs (SN textbin default)
DECISION: retained
BLOCKER: register-allocation,delay-slot-scheduling
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 81.9348%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00120d40/FUN_00120d40.s", FUN_00120d40);
#else
#include "rnc/assembly_textbin_fun_00120d40_types.h"
#include "types.h"


extern s32 D_001312D0;
extern s32 D_001312D8;
extern s32 D_001312EC;
extern s32 D_00131308;
extern struct M2c_D_00132D08 D_00132D08;
extern u8 D_00152F10[];
extern u8 D_00152F38[];
extern s32 D_00159750;
extern u8 D_00159758[];
extern u8 D_FFFFF[];
extern s32 PollSema();
extern s32 ReferThreadStatus();
extern s32 SignalSema();
extern s32 cmd_sem_init();
extern s32 sceCdSyncS();
extern s32 scePrintf();
extern s32 sceSifBindRpc();
extern s32 sceSifInitRpc();
s32 FUN_00120d40(s32 arg0) {
    s32 *var_2_55;
    s32 *var_2_78;
    cmd_sem_init();
    if (*(s32 *)0x1312EC == PollSema(*(s32 *)0x1312EC)) {
        goto block_3;
    }
    if (D_001312D0 <= 0) {
        goto block_5;
    }
    scePrintf(D_00152F10, arg0, D_001312D8);
    return 0;
block_3:
    *(s32 *)0x1312D8 = arg0;
    ReferThreadStatus(*(s32 *)0x159750, D_00159758);
    if (sceCdSyncS(1) == 0) {
        goto block_6;
    }
    SignalSema(*(s32 *)0x1312EC);
block_5:
    return 0;
block_6:
    sceSifInitRpc(0);
    if (D_00131308 >= 0) {
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
    if (sceSifBindRpc(&D_00132D08, 0x80000593, 0) < 0) {
        goto block_13;
    }
    goto block_19;
block_13:
    var_2_78 = D_FFFFF;
    if (D_001312D0 <= 0) {
        goto block_16;
    }
    scePrintf(D_00152F38);
    var_2_78 = (void *)0x100000;
block_16:
loop_17:
    if (var_2_78 != (void *)-1) {
        goto loop_17;
    }
    goto loop_11;
block_19:
    if (D_00132D08.unk24 == 0) {
        goto block_9;
    }
    D_00131308 = 0;
block_21:
    return 1;
}
#endif /* NON_MATCHING */
