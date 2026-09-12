/*
STATE: C_NON_MATCHING
SYMBOL: _lastFrame
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _lastFrame; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_lastFrame/_lastFrame.s", _lastFrame);
#else
#include "rnc/assembly_sdk_library__lastFrame_types.h"
#include "types.h"


extern u8 D_00153AB8[];
extern s32 _Error();
extern s32 _dispRefImage();
extern s32 _dispRefImageField();
void _lastFrame(struct M2c_arg0 *arg0) {
    register s32 temp_6_9 __asm__("a2");
    s32 temp_7_19;

    temp_6_9 = arg0->unk118;
    if (arg0->unk120 != 0) {
        _Error(arg0, D_00153AB8, temp_6_9);
    } else {
        temp_7_19 = temp_6_9 - 1;
        if (arg0->unk174 == 3) {
            temp_6_9 -= 1;
            _dispRefImage(arg0, arg0->unk1BC, temp_6_9, temp_7_19);
        } else {
            _dispRefImageField(arg0, arg0->unk1CC, arg0->unk1DC, temp_7_19);
        }
    }
    arg0->unk120 = 0;
}
#endif /* NON_MATCHING */
