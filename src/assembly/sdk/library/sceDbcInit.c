/*
STATE: C_NON_MATCHING
SYMBOL: sceDbcInit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceDbcInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceDbcInit/sceDbcInit.s", sceDbcInit);
#else
#include "rnc/assembly_sdk_library_sceDbcInit_types.h"
#include "types.h"




extern u8 D_001534D8[];
extern u8 D_001534F0[];
extern u8 D_00153518[];
extern u8 D_00153540[];
extern struct M2c_D_0015B008 D_0015B008;
extern struct M2c_D_0015B030 D_0015B030;
extern u8 D_0015B480[];
extern u8 D_0015B500[];
extern u8 D_FFFF[];
extern s32 exit();
extern s32 func_00124A20();
extern s32 sceDbcGetModVersion();
extern s32 sceDbcSetWorkAddr();
extern s32 scePrintf();
extern s32 sceSifBindRpc();
extern s32 sceSifInitRpc();
s32 sceDbcInit(void) {
    s32 *var_3_15;
    s32 *var_3_45;
    s32 *var_2_91;
    s32 temp_16_73;
    s32 temp_2_69;
    s32 var_2_30;
    s32 var_2_60;
    s32 var_3_89;

    sceSifInitRpc(0);
    goto loop_3;
block_1:
loop_2:
    if (var_3_15 != (void *)-1) {
        goto loop_2;
    }
loop_3:
    if (sceSifBindRpc(&D_0015B008, 0x80000900, 0) < 0) {
        goto block_5;
    }
    var_2_30 = D_0015B008.unk24;
    goto block_7;
block_5:
    func_00124A20(D_001534D8);
    var_2_30 = exit(-1);
block_7:
    var_3_15 = D_FFFF;
    if (var_2_30 == 0) {
        goto block_1;
    }
    goto loop_11;
block_9:
loop_10:
    if (var_3_45 != (void *)-1) {
        goto loop_10;
    }
loop_11:
    if (sceSifBindRpc(&D_0015B030, 0x8000091B, 0) < 0) {
        goto block_13;
    }
    var_2_60 = D_0015B030.unk24;
    goto block_15;
block_13:
    func_00124A20(D_001534D8);
    var_2_60 = exit(-1);
block_15:
    var_3_45 = D_FFFF;
    if (var_2_60 == 0) {
        goto block_9;
    }
    temp_2_69 = sceDbcGetModVersion();
    temp_16_73 = temp_2_69 >> 8;
    if (temp_16_73 == 2) {
        goto block_18;
    }
    scePrintf(D_001534F0);
    scePrintf(D_00153518, 2, 0, temp_16_73, temp_2_69 & 0xFF);
    return 0;
block_18:
    var_3_89 = 0xF;
    var_2_91 = D_0015B500 + 0x3C;
loop_19:
    *var_2_91 = 0;
    var_3_89 -= 1;
    var_2_91 -= 4;
    if (var_3_89 >= 0) {
        goto loop_19;
    }
    func_00124A20(D_00153540, D_0015B480);
    sceDbcSetWorkAddr(D_0015B480);
    return 1;
}
#endif /* NON_MATCHING */
