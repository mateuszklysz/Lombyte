/*
STATE: C_NON_MATCHING
SYMBOL: _pictureData0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _pictureData0; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_pictureData0/_pictureData0.s", _pictureData0);
#else
#include "rnc/assembly_sdk_library__pictureData0_types.h"
#include "types.h"


extern u8 D_001537E0[];
extern s32 _Error();
extern s32 _doMC();
extern s32 _slice0();
extern s32 _waitBdecOut();
extern s32 _waitIpuIdle();
s32 _pictureData0(struct M2c_arg0 *arg0) {
    s32 temp_16_39;
    s32 temp_17_17;
    s32 temp_17_21;
    s32 temp_19_42;
    s32 temp_2_26;
    s32 var_2_52;
    u32 temp_17_41;

    arg0->unk810 = 0;
    temp_17_17 = arg0->unk12C * arg0->unk130;
    arg0->unk814 = 0;
    temp_17_21 = ((arg0->unk174 ^ 3) != 0) ? (temp_17_17 >> 1) : temp_17_17;
    do {
loop_2:
        temp_2_26 = _slice0(arg0, temp_17_21);
        if (temp_2_26 == 1) {
            goto loop_2;
        }
    } while (temp_2_26 == 3);
    _waitIpuIdle(arg0);
    temp_16_39 = (_waitBdecOut(arg0) == 0) ? 2 : temp_2_26;
    temp_17_41 = temp_16_39 - 1;
    temp_19_42 = temp_16_39 == 0;
    do {

    } while (((u32) *(u32 *)0x1000D400 >> 8) & 1);
    var_2_52 = temp_17_41 < 2U;
    if (temp_16_39 == 0) {
        _doMC(arg0, arg0->unk810 == 0);
        var_2_52 = temp_17_41 < 2U;
    }
    if (var_2_52 != 0) {
        _Error(arg0, D_001537E0);
    }
    return temp_19_42;
}
#endif /* NON_MATCHING */
