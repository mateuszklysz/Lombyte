/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 72.6613%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002156d8/FUN_002156d8.s", FUN_002156d8);
#else
#include "rnc/assembly_textbin_fun_002156d8_types.h"
#include "types.h"


extern struct M2c_D_001516D0 D_001516D0;
extern u8 D_00151720[];
extern s32 D_0015ED88;
extern s32 D_0015EE1C;
extern s32 func_0012EC08();
extern void T_0011C178();
extern void func_002169C0();
void FUN_002156d8(u16 arg0, u16 arg1, u16 arg2) {
    s16 var_8_44;
    s32 *temp_11_17;

    temp_11_17 = (arg0 * 4) + (D_0015ED88 * 0x258) + &T_0011C178;
    if (*temp_11_17 != 0) {
        if (D_001516D0.unk50 == 0) {
            D_001516D0.unk50 = 0xFFFFFFFF;
            D_001516D0.unk5A = 1;
            D_001516D0.unk54 = arg0;
            D_001516D0.unk58 = arg1;
            D_001516D0.unk64 = 0xA;
            D_001516D0.unk68 = 0xBB80;
            D_001516D0.unk60 = 0;
            D_001516D0.unk56 = arg2;
            if (D_0015EE1C != 0) {
                var_8_44 = arg2;
            } else {
                var_8_44 = 0;
            }
            func_0012EC08(*temp_11_17, 0, 0, 0, var_8_44, 0, 2, 0, 0x21, &func_002169C0, (u64) ((s64) D_00151720 << 0x20) >> 0x20);
        }
    }
}
#endif /* NON_MATCHING */
