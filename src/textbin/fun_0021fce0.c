/*
STATE: C_EXACT
SYMBOL: FUN_0021fce0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
#include "rnc/assembly_textbin_fun_0021fce0_types.h"

extern s32 FUN_00225c18();
s32 FUN_0021fce0(struct M2c_arg0 *arg0) {
    arg0->unk44 = 0;
    arg0->unk48 = FUN_00225c18(arg0->unk34 & 0x200);
    arg0->unk4C = FUN_00225c18(arg0->unk34 & 0x200);
    if (!(arg0->unk34 & 0x200)) {
        if (arg0->unk48 == 0) {
            arg0->unk48 = FUN_00225c18(1);
        }
        if (arg0->unk4C == 0) {
            arg0->unk4C = FUN_00225c18(1);
        }
    }
    arg0->unk5C = 0;
    arg0->unk50 = -1;
    arg0->unk54 = -1;
    return 0;
}

extern s32 func_0021FCE0(struct M2c_arg0 *arg0) __attribute__((alias("FUN_0021fce0")));
