/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00226718
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 72.0870%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00226718/FUN_00226718.s", FUN_00226718);
#else
#include "rnc/assembly_textbin_fun_00226718_types.h"
#include "types.h"


extern u32 D_001516D8[];
extern u32 D_00160350[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u32 D_001D608C[];
extern s32 func_002166E8();
s32 FUN_00226718(s32 arg0) {
    if (D_001516D8[0] != 0) {
        if (D_001D5BF0.unkCB != 0) {
            func_002166E8();
            D_001D5BF0.unkCB = 0U;
        }
    }
    D_001D608C[0] = 0;
    D_00160350[0] = 0;
    return 0;
}
#endif /* NON_MATCHING */
