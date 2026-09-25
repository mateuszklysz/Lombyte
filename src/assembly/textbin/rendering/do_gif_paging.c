#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/do_gif_paging/FUN_001f4398.s", FUN_001f4398);
#else
#include "rnc/assembly_textbin_fun_001f4398_types.h"
#include "types.h"








extern struct M2c_D_0015F450 *D_0015F450[];
extern struct M2c_D_0015F454 *D_0015F454[];
extern struct M2c_D_00160F00 *D_00160F00[];
extern u8 D_0018A2DC[];
extern s32 func_0020B4A8();
extern s32 func_00233B68();
void do_gif_paging(void) __asm__("FUN_001f4398");

void do_gif_paging(void) {
    struct M2c_temp_3_31 *temp_3_31;

    D_0015F454[0] = D_00160F00[0];
    D_00160F00[0] += 0x10;
    D_0015F450[0]->unk0 = 0x20000000;
    D_0015F450[0]->unk4 = (s32 *) D_00160F00[0];
    D_0015F450[0]->unk8 = 0;
    D_0015F450[0]->unkC = 0;
    temp_3_31 = D_00160F00[0];
    if (*(s32 *)D_0018A2DC != 0) {
        func_0020B4A8(D_0015F450[0], D_0018A2DC);
        func_00233B68();
    }
    temp_3_31->unk0 = 0x20000000;
    D_00160F00[0]->unk4 = (void *) (D_0015F450[0] + 0x10);
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0;
    D_00160F00[0] += 0x10;
    D_0015F454[0]->unk0 = 0x20000000;
    D_0015F454[0]->unk4 = (s32 *) D_00160F00[0];
    D_0015F454[0]->unk8 = 0;
    D_0015F454[0]->unkC = 0;
}
#endif /* NON_MATCHING */
