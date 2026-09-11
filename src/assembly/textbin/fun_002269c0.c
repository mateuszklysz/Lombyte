/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002269c0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002269c0/FUN_002269c0.s", FUN_002269c0);
#else
#include "rnc/assembly_textbin_fun_002269c0_types.h"
#include "types.h"


extern struct M2c_D_0013D290 D_0013D290;
extern u8 D_00141EC0[];
extern s32 D_0015ED84;
extern u8 D_0015EE98[];
extern s32 func_00121780();
extern s32 func_0012D6D8();
extern s32 func_00207B08();
extern s32 func_00208770();
extern s32 func_0020ABB0();
void FUN_002269c0(s32 arg0, s32 arg1) {
    func_00121780(D_0015EE98);
    func_0012D6D8(D_0015EE98);
    func_00208770();
    func_00207B08((D_0015ED84 << 0xB) + D_00141EC0);
    func_0020ABB0(arg0);
    D_0013D290.unkF4 = 1;
    D_0013D290.unkEC = arg0;
    D_0013D290.unk14 = arg1;
    D_0013D290.unkC0 = 0;
    if (D_0013D290.unkDC < 0) {
        D_0013D290.unkE0 = 0;
        D_0013D290.unkDC = 0x13;
    }
}
#endif /* NON_MATCHING */
