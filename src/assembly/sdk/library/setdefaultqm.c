/*
STATE: C_NON_MATCHING
SYMBOL: _setDefaultQM
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _setDefaultQM; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/setdefaultqm/_setDefaultQM.s", _setDefaultQM);
#else
#include "rnc/assembly_sdk_library_setdefaultqm_types.h"
#include "types.h"


extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 _dispatchMpegCallback();
extern s32 _sendIpuCommand();
extern s32 _waitIpuIdle();
void _setDefaultQM(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
u8 sp_slot[0x60];    s32 temp_2_23;

    _dispatchMpegCallback(arg0->unk858, sp_slot, 2);
    _waitIpuIdle(arg0);
    *(s32 *)0x10002000 = 0;
    _waitIpuIdle(arg0);
    temp_2_23 = DIntr();
    *(s32 *)0x1000B410 = arg2 & 0x0FFFFFFF;
    *(s32 *)0x1000B420 = 4;
    *(s32 *)0x1000B400 = 0x101;
    if (temp_2_23 != 0) {
        EnableInterrupts(0x101, 0x1000B420);
    }
    _sendIpuCommand(arg0, arg1);
    _waitIpuIdle(arg0);
    _dispatchMpegCallback(arg0->unk858, sp_slot, 3);
}
#endif /* NON_MATCHING */
