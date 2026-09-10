/* ROLE: recovered function `msg_string__Fi` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven): staged and full-ELF gates PASSED 2026-09-10.
 * SYMBOL: FUN_001fdd10 (alias func_001FDD10)
 * UNIT: textbin/fun_001fdd10 (retagged from assembly/textbin/fun_001fdd10)
 * SCORE: code=100.0 functions=100.0 data=100.0 complete_data=100.0
 *   (fresh SN ee-gcc2.9-991111b/r4, -O2 -g2)
 * COMPILER: SN (retail uses sq/lq saves). Default flags suffice; the positive
 *   arm is laid out first so the compiler reproduces `bgezl` with the base
 *   pointer load in the delay slot.
 * NOTE: retail loads the table base with `lw v0,-0x7560(gp)`; the build pins
 *   _gp = 0x166C00, so the global lives at 0x15F6A0 (D_0015F6A0). The negative
 *   path returns the absolute address 0x199968 (D_00199968).
 * GATE: full baseline PASS (built e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9
 *   vs retail e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9);
 *   baseline report 100% matched code/functions and complete data.
 * DECISION: promoted.
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-08-3/refinement/pathA/probe-1fdd10b/measurement.json
 */
#include "types.h"

extern void *D_0015F6A0;
extern u8 D_00199968[];
extern s32 func_001fdca0();

s32 FUN_001fdd10(void) {
    s32 index;
    index = func_001fdca0();
    if (index >= 0) {
        return *(s32 *) ((u8 *) D_0015F6A0 + (index * 16));
    }
    return (s32) D_00199968;
}

extern s32 func_001FDD10(void) __attribute__((alias("FUN_001fdd10")));
