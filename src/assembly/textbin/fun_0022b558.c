#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022b558/FUN_0022b558.s", FUN_0022b558);
#else
#include "rnc/assembly_textbin_fun_0022b558_types.h"
#include "types.h"








extern s32 D_0015EE74[];
extern s32 D_0015EE78[];
extern struct M2c_D_00160470 *D_00160470[];
extern struct M2c_D_00160474 *D_00160474[];
extern struct M2c_D_00160F00 *D_00160F00[];
extern u8 D_0018A2B4[];
extern s32 func_0020B4A8();
extern s32 func_00233B68();
void FUN_0022b558(void) {
    struct M2c_temp_3_31 *temp_3_31;

    D_00160474[0] = D_00160F00[0];
    D_00160F00[0] += 0x10;
    D_00160470[0]->unk0 = 0x20000000;
    D_00160470[0]->unk4 = (s32 *) D_00160F00[0];
    D_00160470[0]->unk8 = 0;
    D_00160470[0]->unkC = 0;
    temp_3_31 = D_00160F00[0];
    if (*(s32 *)D_0018A2B4 != 0) {
        func_0020B4A8(D_00160470[0], D_0018A2B4);
        func_00233B68();
    }
    temp_3_31->unk0 = 0x20000000;
    D_00160F00[0]->unk4 = (void *) (D_00160470[0] + 0x10);
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0;
    D_00160F00[0] += 0x10;
    D_00160474[0]->unk0 = 0x20000000;
    D_00160474[0]->unk4 = (s32 *) D_00160F00[0];
    D_00160474[0]->unk8 = 0;
    D_00160474[0]->unkC = 0;
    D_0015EE74[0] = D_0015EE78[0];
}
#endif /* NON_MATCHING */
