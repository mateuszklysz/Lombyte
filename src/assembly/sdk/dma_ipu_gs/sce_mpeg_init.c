/*
STATE: C_NON_MATCHING
SYMBOL: sceMpegInit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceMpegInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_mpeg_init/sceMpegInit.s", sceMpegInit);
#else
#include "types.h"
extern s32 DIntr();
extern s32 EnableInterrupts();
void sceMpegInit(void) {
    s32 temp_2_5;
    s32 temp_4_30;

    temp_2_5 = DIntr();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 &= 0xFFFFFEFF;
    *(s32 *)0x1000B400 &= 0xFFFFFEFF;
    temp_4_30 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    *(s32 *)0x1000F590 = temp_4_30;
    if (temp_2_5 != 0) {
        EnableInterrupts(temp_4_30, 0x1000B400, 0x1000B000, 0xFFFEFFFF, 0xFFFFFEFF, 0x1000F520, 0x1000F590);
    }
    *(s32 *)0x1000B020 = 0;
    *(s32 *)0x1000B420 = 0;
    sceIpuInit();
}
#endif /* NON_MATCHING */
