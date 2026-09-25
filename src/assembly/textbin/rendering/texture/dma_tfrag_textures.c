#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/texture/dma_tfrag_textures/FUN_002331c0.s", FUN_002331c0);
#else
#include "rnc/assembly_textbin_fun_002331c0_types.h"
#include "types.h"










extern s32 D_0015EE74;
extern struct M2c_D_00160EBC *D_00160EBC[];
extern s32 D_00160EC4[];
extern struct M2c_D_00160F00 *D_00160F00[];
extern struct M2c_D_0018A2B0 D_0018A2B0;
extern u8 D_001E89B0[];
extern s32 DebugPrint();
extern s32 func_00233B68();
extern s32 func_00234BD8();
extern s32 func_00234D48();
void dma_tfrag_textures(void) __asm__("FUN_002331c0");

void dma_tfrag_textures(void) {
    struct M2c_temp_17_9 *temp_17_9;
    struct M2c_temp_3_31 *temp_3_31;
    s32 temp_16_40;

    temp_17_9 = D_00160F00[0];
    D_00160F00[0] = ((u8 *)temp_17_9 + (0x10));
    D_00160EBC[0]->unk0 = 0x20000000;
    D_00160EBC[0]->unk4 = (s32 *) D_00160F00[0];
    D_00160EBC[0]->unk8 = 0;
    D_00160EBC[0]->unkC = 0;
    temp_3_31 = D_00160F00[0];
    if (D_0018A2B0.unk10 != 0) {
        if (D_0018A2B0.unkC != 0) {
            func_00234BD8(D_00160EBC[0], 0x20000000, 0x20000000, &D_0018A2B0);
            temp_16_40 = func_00234D48(D_0015EE74);
            func_00233B68();
            if (temp_16_40 > 0x400000) {
                DebugPrint(D_001E89B0);
            }
            if (D_00160EC4[0] < temp_16_40) {
                D_00160EC4[0] = temp_16_40;
            }
        }
    }
    temp_3_31->unk0 = 0x20000000;
    D_00160F00[0]->unk4 = (void *) (D_00160EBC[0] + 0x10);
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0;
    D_00160F00[0] += 0x10;
    temp_17_9->unk0 = 0x20000000;
    temp_17_9->unkC = 0;
    temp_17_9->unk4 = (s32 *) D_00160F00[0];
    temp_17_9->unk8 = 0;
}
#endif /* NON_MATCHING */
