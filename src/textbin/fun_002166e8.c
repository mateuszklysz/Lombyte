/*
STATE: C_EXACT
SYMBOL: FUN_002166e8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
#include "asm.h"
#include "rnc/assembly_textbin_fun_002166e8_types.h"
#include "types.h"

#include "rnc/assembly_textbin_fun_002166e8_types.h"
#include "types.h"


extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012EEA8();
void FUN_002166e8(s32 arg0) {
    if (D_001516D0.unk8 != 0) {
        func_0012EEA8();
        D_001516D0.unkA = 1;
    }
}
