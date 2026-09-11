/*
STATE: C_EXACT
SYMBOL: FUN_00216950
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
#include "asm.h"
#include "rnc/assembly_textbin_fun_00216950_types.h"
#include "types.h"

#include "rnc/assembly_textbin_fun_00216950_types.h"
#include "types.h"


extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012EEF0();
void FUN_00216950(s32 arg0) {
    if (arg0 == 1) {
        D_001516D0.unk8 = 0;
        if (func_0012EEF0() != 0) {
            D_001516D0.unk8 = 2;
        }
    }
}
