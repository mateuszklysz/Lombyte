/* C_EXACT (byte-proven): staged and full-ELF gates PASSED 2026-09-10.
 * SYMBOL: FUN_00225530 (alias func_00225530)
 * UNIT: textbin/fun_00225530 (retagged from assembly/textbin/fun_00225530)
 * SCORE: code=100.0 functions=100.0 data=100.0 complete_data=100.0
 *   (fresh SN ee-gcc2.9-991111b/r4, -O2 -g2 -mno-split-addresses)
 * GATE: full baseline PASS (built e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9
 *   vs retail e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9);
 *   baseline report 100% matched code/functions and complete data.
 * COMPILER: SN (per-unit textbin routing; retail uses sq/lq saves) plus the
 *   per-unit flag SN_FLAG_UNITS["fun_00225530"] = -mno-split-addresses.
 *   Retail loads D_0015F60C with a non-split address pair
 *   (`lui v1,%hi; lw v1,%lo(v1)`); the SN default emits a split base register
 *   and scores 87.65%. The global is declared as a 4-element array so the
 *   compiler treats it as non-small-data and emits absolute addressing.
 * DECISION: promoted.
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-08-3/refinement/pathA/probe-225530n/measurement.json
 */
#include "types.h"

struct M2c_arg0 {
    u8 pad_0[0x38];
    s64 unk38;
};

extern s32 D_0015F60C[4];
extern s32 func_0020C828();

s32 FUN_00225530(struct M2c_arg0 *arg0) {
    if (arg0 == 0) {
        return 0;
    }
    func_0020C828();
    arg0->unk38 = (s64) D_0015F60C[0];
    return 0;
}
