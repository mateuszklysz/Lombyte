/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00215390
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215390/FUN_00215390.s", FUN_00215390);
#else
#include "rnc/assembly_textbin_fun_00215390_types.h"
#include "types.h"


extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012DC80();
extern s32 func_0012EB20();
extern s32 func_00215420();
void FUN_00215390(void) {
    D_001516D0.unk22 = -1;
    D_001516D0.unk30 = 0x20;
    D_001516D0.unk0 = 0;
    D_001516D0.unk31 = 0;
    D_001516D0.unk32 = 0;
    D_001516D0.unk33 = 0;
    D_001516D0.unk34 = 0;
    D_001516D0.unk3E = 0;
    D_001516D0.unk50 = 0;
    D_001516D0.unk5A = 0;
    D_001516D0.unk6C = 0;
    D_001516D0.unk76 = 0;
    D_001516D0.unk1C = -1;
    func_0012EB20(4, 0xF000, 0, 1, -1);
loop_1:
    if (func_0012DC80() != 0) {
        goto loop_1;
    }
    func_00215420();
    return;
}
#endif /* NON_MATCHING */
