/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00231608
SCORE: code=79.6429 functions=79.6429 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00231608/FUN_00231608.s", FUN_00231608);
#else
#include "rnc/assembly_textbin_fun_00231608_types.h"
#include "types.h"






extern u8 D_0012F1C8[];
extern u8 D_00137B80[];
extern struct M2c_D_0013E550 D_0013E550;

extern struct M2c_singleton D_0015ED80;
extern struct M2c_singleton D_0015ED88;
extern s32 D_001940D4[];
extern s32 func_00120558();
extern s32 func_001F4A58();
extern s32 func_0023A3B8();
extern s32 sceGsSyncV();
extern s32 sceGsSyncVCallback();
void FUN_00231608(s32 arg0) {
    s32 var_5_14;
    s32 var_9_16;
    struct M2c_temp_4_12 *temp_4_12;
    struct M2c_temp_4_21 *temp_4_21;

    if (D_0015ED80.x != 0) {
        temp_4_12 = D_00137B80 + (arg0 * 8);
        var_5_14 = temp_4_12->unk199C;
        var_9_16 = temp_4_12->unk1998;
    } else {
        temp_4_21 = D_00137B80 + (arg0 * 8);
        var_5_14 = temp_4_21->unk193C;
        var_9_16 = temp_4_21->unk1938;
    }
    D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 8);
    func_0023A3B8(var_9_16, var_5_14, (D_001940D4[0] + 0x3F) & ~0x3F, (D_001940D4[0] + 0x30003F) & ~0x3F, D_0015ED88.x, var_9_16);
    sceGsSyncV(0);
    func_00120558(0, 0);
    sceGsSyncVCallback(D_0012F1C8);
    func_001F4A58(4);
    D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 0x10);
}
#endif /* NON_MATCHING */
