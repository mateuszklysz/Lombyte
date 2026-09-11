/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00215518
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 62.1897%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215518/FUN_00215518.s", FUN_00215518);
#else
#include "rnc/assembly_textbin_fun_00215518_types.h"
#include "types.h"


extern u8 D_00137B80[];
extern struct M2c_D_001516D0 D_001516D0;
extern s32 D_0015ED88;
extern s32 func_0012EC08();
extern void func_002169C0();
void FUN_00215518(u16 arg0, u16 arg1, u16 arg2) {
    s32 temp_4_21;

    temp_4_21 = *(s32 *)((u8 *)(D_00137B80 + ((D_0015ED88 * 4) + ((arg0 + 0xFFFF3CB0) * 0x18))) + 0xF00);
    if (temp_4_21 != 0) {
        if (D_001516D0.unk50 == 0) {
            D_001516D0.unk5A = 1;
            D_001516D0.unk64 = 0xA;
            D_001516D0.unk68 = 0xBB80;
            D_001516D0.unk50 = 0xFFFFFFFF;
            D_001516D0.unk54 = arg0;
            D_001516D0.unk58 = arg1;
            D_001516D0.unk56 = arg2;
            D_001516D0.unk60 = 0;
            func_0012EC08(temp_4_21, 0, 0, 0, arg2, 0, 2, 0, 0x21, &func_002169C0, (u64) ((s64) (((u8 *)&D_001516D0 + 0x50)) << 0x20) >> 0x20);
        }
    }
}
#endif /* NON_MATCHING */
