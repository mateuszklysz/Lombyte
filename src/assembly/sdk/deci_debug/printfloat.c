/*
STATE: C_NON_MATCHING
SYMBOL: printfloat
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit printfloat; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/deci_debug/printfloat/printfloat.s", printfloat);
#else
#include "types.h"
extern u8 D_00152780[];
extern u8 D_00152788[];
extern u8 D_00152790[];
extern s32 D_00152798;
extern s32 D_001527A0;
extern s32 D_001527A8;
extern s32 __fixunsdfdi();
extern s32 dpcmp();
extern s32 dpdiv();
extern s32 dpmul();
extern s32 dpsub();
extern s32 ftoi();
extern s32 kprintf();
extern s32 D_0012FC00();
void printfloat(s32 arg0) {
    s32 var_16_8;
    s32 var_17_10;

    var_16_8 = arg0;
    var_17_10 = 0;
    if (dpcmp(0) >= 0) {
        goto block_2;
    }
    var_16_8 = dpsub(0, var_16_8);
    D_0012FC00(0x2D);
block_2:
    if (dpcmp(var_16_8, D_00152798) >= 0) {
        goto block_8;
    }
    goto loop_6;
block_5:
    var_17_10 -= 1;
    var_16_8 = dpmul(var_16_8, 0x8048 << 0x2F);
loop_6:
    if (dpcmp(var_16_8, D_001527A0) < 0) {
        goto block_5;
    }
    goto block_13;
block_8:
    if (dpcmp(var_16_8, 0xFFC0 << 0x2E) < 0) {
        goto block_13;
    }
    goto loop_12;
block_11:
    var_17_10 += 1;
    var_16_8 = dpdiv(var_16_8, 0x8048 << 0x2F);
loop_12:
    if (dpcmp(var_16_8, 0xFFC0 << 0x2E) >= 0) {
        goto block_11;
    }
block_13:
    kprintf(D_00152780, ftoi(__fixunsdfdi(dpmul(var_16_8, D_001527A8))));
    if (var_17_10 < 0) {
        goto block_16;
    }
    kprintf(D_00152788, var_17_10);
    return;
block_16:
    kprintf(D_00152790, var_17_10);
    return;
}
#endif /* NON_MATCHING */
