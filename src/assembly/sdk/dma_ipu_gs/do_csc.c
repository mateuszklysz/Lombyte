/*
STATE: C_NON_MATCHING
SYMBOL: _doCSC
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _doCSC; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/do_csc/_doCSC.s", _doCSC);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_do_csc_types.h"
#include "types.h"


extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 _dispatchMpegCallback();
extern s32 _sendIpuCommand();
void _doCSC(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
u8 sp_slot[0x70];    s32 temp_2_23;

    do {

    } while (*(s32 *)0x10002010 < 0);
    temp_2_23 = DIntr();
    *(s32 *)0x1000B010 = arg1 & 0x0FFFFFFF;
    *(s32 *)0x1000B020 = arg2 << 6;
    *(u32 *)0x1000B000 = 0x100;
    if (temp_2_23 != 0) {
        EnableInterrupts(0x100, 0x1000B010);
    }
    _sendIpuCommand(arg0, arg2 | 0x70000000);
    _dispatchMpegCallback(arg0->unk858, sp_slot, 4);
    do {

    } while (((u32) *(volatile u32 *)0x1000B000 >> 8) & 1);
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
}
#endif /* NON_MATCHING */
