/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0020d060
SCORE: code=14.358025 functions=14.358025 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020d060/FUN_0020d060.s", FUN_0020d060);
#else
#include "rnc/assembly_textbin_fun_0020d060_types.h"
#include "types.h"








extern u8 D_0015FEC0[];
extern s32 D_0015FF3C;
extern struct M2c_D_0015FF40 *D_0015FF40[];
extern struct M2c_D_00160F00 *D_00160F00[];
extern u8 D_001C8680[];
extern s32 func_001F21B0();
extern s32 func_00227548();
extern s32 func_00227740();
void FUN_0020d060(void) {
    struct M2c_temp_16_30 *temp_16_30;
    struct M2c_temp_6_66 *temp_6_66;

    if (D_0015FF3C == 0) {
        D_0015FF40[0]->unk0 = 0x10000000;
        D_0015FF40[0]->unk4 = NULL;
        D_0015FF40[0]->unk8 = 0;
        D_0015FF40[0]->unkC = 0;
        return;
    }
    temp_16_30 = D_00160F00[0];
    D_00160F00[0] += 0x10;
    D_0015FF40[0]->unk0 = 0x20000000;
    D_0015FF40[0]->unk4 = (void *) D_00160F00[0];
    D_0015FF40[0]->unk8 = 0;
    D_0015FF40[0]->unkC = 0;
    func_00227740(D_0015FF40[0]);
    func_00227548(D_001C8680);
    D_00160F00[0]->unk0 = 0x20000000;
    D_00160F00[0]->unk4 = (void *) (D_0015FF40[0] + 0x10);
    D_00160F00[0]->unk8 = 0;
    temp_6_66 = D_00160F00[0];
    temp_6_66->unkC = 0;
    D_00160F00[0] += 0x10;
    temp_16_30->unk0 = 0x20000000;
    temp_16_30->unkC = 0;
    temp_16_30->unk8 = 0;
    temp_16_30->unk4 = (void *) D_00160F00[0];
    func_001F21B0(D_0015FEC0, 8, temp_6_66);
}
#endif /* NON_MATCHING */
