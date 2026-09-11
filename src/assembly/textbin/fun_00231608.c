/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00231608
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 73.3214%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00231608/FUN_00231608.s", FUN_00231608);
#else
#include "rnc/assembly_textbin_fun_00231608_types.h"
#include "types.h"






extern u8 D_00137B80[];
extern struct M2c_D_0013E550 D_0013E550;
extern s32 D_0015ED80;
extern s32 D_0015ED88;
extern s32 D_001940D4;
extern s32 func_00120558();
extern s32 func_00122298();
extern s32 func_00122E68();
extern s32 func_001F4A58();
extern s32 func_0023A3B8();
extern void func_0012F1C8();
void FUN_00231608(s32 arg0) {
    s32 var_5_16;
    s32 var_9_18;
    struct M2c_temp_4_14 *temp_4_14;
    struct M2c_temp_4_23 *temp_4_23;

    if (D_0015ED80 != 0) {
        temp_4_14 = D_00137B80 + (arg0 * 8);
        var_5_16 = temp_4_14->unk199C;
        var_9_18 = temp_4_14->unk1998;
    } else {
        temp_4_23 = D_00137B80 + (arg0 * 8);
        var_5_16 = temp_4_23->unk193C;
        var_9_18 = temp_4_23->unk1938;
    }
    D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 8);
    func_0023A3B8(var_9_18, var_5_16, (D_001940D4 + 0x3F) & ~0x3F, (D_001940D4 + 0x30003F) & ~0x3F, D_0015ED88, var_9_18);
    func_00122298(0);
    func_00120558(0, 0);
    func_00122E68(&func_0012F1C8);
    func_001F4A58(4);
    D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 0x10);
}
#endif /* NON_MATCHING */
