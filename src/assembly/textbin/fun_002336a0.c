#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002336a0/FUN_002336a0.s", FUN_002336a0);
#else
#include "types.h"
struct M2c_D_00160F00 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

extern s32 D_00160EE0;
extern u8 D_00160EF8[];
extern struct M2c_D_00160F00 *D_00160F00;
extern s32 D_00160F0C;
extern s32 D_00160F10;
extern s32 D_00160F14[];
extern u8 D_001E89C8[];
extern s32 DebugPrint();
extern void FlushCache();
extern s32 sceDmaGetChan();
extern s32 sceDmaSend();
/* retail small-data globals, declared to GAS before the body */
__asm__(".extern D_00160EE0, 4");
__asm__(".extern D_00160F00, 4");
__asm__(".extern D_00160F0C, 4");
__asm__(".extern D_00160F14, 4");

void FUN_002336a0(void) {
    s32 *temp_2_48;
    s32 temp_5_15;
    s32 temp_6_22;
    s32 var_3_21;

    temp_5_15 = *((D_00160F10 * 4) + D_00160EF8);
    var_3_21 = 0;
    temp_6_22 = D_00160F00 - temp_5_15;
    D_00160EE0 |= 0x1F;
    if (D_00160F14[0] < temp_6_22) {
        D_00160F14[0] = temp_6_22;
        if (D_00160F0C < temp_6_22) {
            DebugPrint(D_001E89C8, temp_5_15, temp_6_22);
            var_3_21 = 1;
        }
    }
    if (var_3_21 == 0) {
        D_00160F00->unk0 = 0x70000000;
        D_00160F00->unk4 = 0;
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0;
        temp_2_48 = sceDmaGetChan(1, D_00160F00);
        *temp_2_48 |= 0xC0;
        FlushCache(0);
        sceDmaSend(temp_2_48, *((D_00160F10 * 4) + D_00160EF8));
        return;
    }
    D_00160EE0 = 0;
}
#endif /* NON_MATCHING */
