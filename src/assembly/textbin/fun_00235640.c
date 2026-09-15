/*
STATE: C_NON_MATCHING
SYMBOL: DmaTieTextures__Fv
SCORE: code=46.83544 functions=46.83544 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00235640/FUN_00235640.s", FUN_00235640);
#else
#include "rnc/assembly_textbin_fun_00235640_types.h"
#include "types.h"










extern s32 D_0015EE74;
extern struct M2c_D_00160F00 *D_00160F00[];
extern struct M2c_D_00160F68 *D_00160F68[];
extern s32 D_00160F74[];
extern struct M2c_D_0018A2B0 D_0018A2B0;
extern u8 D_001E8A50[];
extern s32 DebugPrint();
extern s32 func_00233B68();
extern s32 func_002370C0();
void FUN_00235640(void) {
    struct M2c_temp_17_9 *temp_17_9;
    struct M2c_temp_3_31 *temp_3_31;
    s32 temp_16_38;

    temp_17_9 = D_00160F00[0];
    D_00160F00[0] = ((u8 *)temp_17_9 + (0x10));
    D_00160F68[0]->unk0 = 0x20000000;
    D_00160F68[0]->unk4 = (s32 *) D_00160F00[0];
    D_00160F68[0]->unk8 = 0;
    D_00160F68[0]->unkC = 0;
    temp_3_31 = D_00160F00[0];
    if (D_0018A2B0.unk18 != 0) {
        if (D_0018A2B0.unk14 != 0) {
            temp_16_38 = func_002370C0(D_0015EE74, 0x20000000, 0x20000000, &D_0018A2B0);
            func_00233B68();
            if (temp_16_38 > 0x400000) {
                DebugPrint(D_001E8A50);
            }
            if (D_00160F74[0] < temp_16_38) {
                D_00160F74[0] = temp_16_38;
            }
        }
    }
    temp_3_31->unk0 = 0x20000000;
    D_00160F00[0]->unk4 = (void *) (D_00160F68[0] + 0x10);
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0;
    D_00160F00[0] += 0x10;
    temp_17_9->unk0 = 0x20000000;
    temp_17_9->unkC = 0;
    temp_17_9->unk4 = (s32 *) D_00160F00[0];
    temp_17_9->unk8 = 0;
}
#endif /* NON_MATCHING */
