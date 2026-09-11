/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00226a70
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 74.9474%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00226a70/FUN_00226a70.s", FUN_00226a70);
#else
#include "rnc/assembly_textbin_fun_00226a70_types.h"
#include "types.h"


extern struct M2c_D_0013D290 D_0013D290;
extern u8 D_0015EE98[];
extern s32 func_00121780();
extern s32 func_0012D6D8();
extern s32 func_00209370();
extern s32 func_0020ABB0();
void FUN_00226a70(s32 arg0, s32 arg1) {
    func_00209370();
    func_00121780(D_0015EE98);
    func_0012D6D8(D_0015EE98);
    func_0020ABB0(arg0);
    D_0013D290.unkC0 = 0;
    D_0013D290.unk14 = arg1;
    *(s32 *)((u8 *)((arg1 * 0x1C) + &D_0013D290) + 0x20) = 0;
    D_0013D290.unkF4 = 1;
    D_0013D290.unkEC = arg0;
    if (D_0013D290.unkDC < 0) {
        D_0013D290.unkE0 = 0;
        D_0013D290.unkDC = 0x13;
    }
}
#endif /* NON_MATCHING */
