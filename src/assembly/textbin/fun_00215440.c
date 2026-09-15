/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00215440
SCORE: code=64.28302 functions=64.28302 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215440/FUN_00215440.s", FUN_00215440);
#else
#include "rnc/assembly_textbin_fun_00215440_types.h"
#include "types.h"


extern u8 D_00137B80[];
extern struct M2c_D_001516D0 D_001516D0;
extern u8 D_002169C0[];
extern s32 func_0012EC08();
void FUN_00215440(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_4_14;

    temp_4_14 = *(s32 *)((u8 *)(D_00137B80 + ((arg0 + 0xFFFF15A0) * 8)) + 0x1618);
    if (temp_4_14 != 0) {
        if (D_001516D0.unk50 == 0) {
            D_001516D0.unk5A = 1;
            D_001516D0.unk64 = 0xA;
            D_001516D0.unk68 = 0xBB80;
            D_001516D0.unk50 = 0xFFFFFFFF;
            D_001516D0.unk54 = arg0;
            D_001516D0.unk58 = arg1;
            D_001516D0.unk56 = arg2;
            D_001516D0.unk60 = 0;
            func_0012EC08(temp_4_14, 0, 0, 0, arg2, 0, 2, 0, 0x21, D_002169C0, (u64) ((s64) (((u8 *)&D_001516D0 + 0x50)) << 0x20) >> 0x20);
        }
    }
}
#endif /* NON_MATCHING */
