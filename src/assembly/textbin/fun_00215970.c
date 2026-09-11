/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00215970
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.4078%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215970/FUN_00215970.s", FUN_00215970);
#else
#include "rnc/assembly_textbin_fun_00215970_types.h"
#include "types.h"


extern u8 D_0013A664[];
extern struct M2c_D_001516D0 D_001516D0;
extern s32 D_0015ED88;
extern s32 func_0012EC08();
extern s32 func_00215440();
extern s32 func_00215518();
extern s32 func_00215600();
extern s32 func_002156D8();
extern s32 func_002157D0();
extern s32 func_002158A0();
extern void func_002169C0();
void FUN_00215970(u16 arg0, u16 arg1, u16 arg2) {
    s32 temp_4_73;

    if (arg0 > 0xEA5F) {
        func_00215440();
    } else if (arg0 > 0xC34F) {
        func_00215518(arg0, arg1, arg2);
    } else if (arg0 > 0x9C3F) {
        func_00215600(arg0, arg1, arg2);
    } else if (arg0 >= 0x7530) {
        func_002156D8(arg0, arg1, arg2);
    } else if (arg0 >= 0x4E20) {
        func_002157D0(arg0, arg1, arg2);
    } else if (arg0 >= 0x2710) {
        func_002158A0(arg0, arg1, arg2);
    } else {
        temp_4_73 = *((arg0 * 0x250) + (D_0015ED88 * 4) + D_0013A664);
        if (temp_4_73 != 0) {
            if (D_001516D0.unk50 == 0) {
                D_001516D0.unk5A = 1;
                D_001516D0.unk64 = 0xA;
                D_001516D0.unk68 = 0xBB80;
                D_001516D0.unk50 = 0xFFFFFFFF;
                D_001516D0.unk54 = arg0;
                D_001516D0.unk58 = arg1;
                D_001516D0.unk56 = arg2;
                D_001516D0.unk60 = 0;
                func_0012EC08(temp_4_73, 0, 0, 0, arg2, 0, 2, 0, 0x21, &func_002169C0, (u64) ((s64) (((u8 *)&D_001516D0 + 0x50)) << 0x20) >> 0x20);
            }
        }
    }
}
#endif /* NON_MATCHING */
