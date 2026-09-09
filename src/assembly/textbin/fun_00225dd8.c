/*
STATE: C_EXACT
SYMBOL: FUN_00225dd8
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: EE-GCC 2.9-991111-01 -O2 -g2 -gstabs (Himuro routing; unit under assembly/textbin)
DECISION: promoted (pipeline-2026-09-08-3, wrapper-branch wide scan)
BLOCKER: none
EVIDENCE: campaign wrapper-scan probes/wide/assembly_textbin_fun_00225dd8 (himuro-O2 100/100/100)
NOTE: existing NON_MATCHING #else branch (a2-pinned register loop) compiled byte-identical under Himuro; oracle wrapper stripped.
*/
#include "rnc/assembly_textbin_fun_00225dd8_types.h"
#include "types.h"


extern u8 D_001D60B8[];
s32 FUN_00225dd8(s32 arg0) {
    register s32 var_6_6 __asm__("a2") = 0;
    u8 *base = D_001D60B8;
    u8 *var_5_8 = base + 4;
loop_1:
    var_6_6 += 1;
    if (*(s32 *)(var_5_8 - 4) == arg0) {
        *(s32 *)var_5_8 |= 4;
        return 0;
    }
    var_5_8 += 8;
    if (var_6_6 >= 5) {
        return 1;
    }
    goto loop_1;
}
