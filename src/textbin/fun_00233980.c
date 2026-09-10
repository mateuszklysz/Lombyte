/* ROLE: recovered function `VU1_addGSregister__FUiUlb` (vuchain.cpp, 0xc0 bytes) starts here; this unit covers only its first fragment. */
/* C_EXACT (byte-proven): staged and full-ELF gates PASSED 2026-09-10.
 * SYMBOL: FUN_00233980 (alias func_00233980)
 * UNIT: textbin/fun_00233980 (retagged from assembly/textbin/fun_00233980)
 * SCORE: code=100.0 functions=100.0 data=100.0 complete_data=100.0
 *   (fresh SN ee-gcc2.9-991111b/r4, -O2 -g2 -mno-split-addresses)
 * COMPILER: SN plus the per-unit flag SN_FLAG_UNITS["fun_00233980"]. The retail
 *   code loads the bump pointer with absolute addressing
 *   (`lui v1,0x16; lw v1,0xF00(v1)`) after every store, but updates the same
 *   global with a gp-relative store (`sw v0,-0x5D00(gp)`); the build pins
 *   _gp = 0x166C00, so 0x160F00 == D_00160F00 for both forms. The absolute
 *   loads need the non-small `s32 *D_00160F00[4]` declaration, the final store
 *   needs a small alias of the same assembler symbol (D_00160F00_store,
 *   defined at 0x00160F00).
 * GATE: full baseline PASS (built e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9
 *   vs retail e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9);
 *   baseline report 100% matched code/functions and complete data.
 * DECISION: promoted.
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-08-3/refinement/pathA/probe-233980c/measurement.json
 */
#include "types.h"

extern s32 *D_00160F00[4];
extern s32 *D_00160F00_store;

#define BASE D_00160F00[0]

void FUN_00233980(s32 a0, s64 a1) {
    BASE[0] = 0x10000002;
    BASE[1] = 0;
    BASE[2] = 0;
    BASE[3] = 0x50000002;
    BASE[4] = 0x8001;
    BASE[5] = 0x10000000;
    BASE[6] = 14;
    BASE[7] = 0;
    *(volatile s64 *) (BASE + 8) = a1;
    BASE[10] = a0;
    BASE[11] = 0;
    D_00160F00_store = BASE + 12;
}

extern s32 func_00233980(s32 a0, s64 a1) __attribute__((alias("FUN_00233980")));
