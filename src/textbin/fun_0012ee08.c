/* ROLE: recovered function `snd_StreamSafeCdSync` starts here; this unit covers only its beginning. */
/* STATE: C_EXACT
 * SYMBOL: FUN_0012ee08 (alias func_0012EE08)
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: SN -O2 -g2 -fno-gcse
 * DECISION: promoted; BLOCKER: none.
 * GATE: staged and authoritative full baseline PASS 2026-09-10 (final-gate.log);
 *   built ELF == retail e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9.
 * EVIDENCE: build/workspace/patha-execution-20260910/final-gate.log,
 *   linked/12ee08/receipt.json (byte-equal linked retail slice).
 */
#include "types.h"
extern s32 D_00137B00[4];
extern s32 D_0015EC8C;
extern s32 D_0015EC98;
extern void FlushCache(s32);
extern void func_0012DC80(void);
extern s32 sceCdSync(s32);

s32 FUN_0012ee08(s32 mode) {
    s32 ready;
    s32 next_ready;
    if (D_0015EC8C == 0) {
        return sceCdSync(mode);
    }
    FlushCache(0);
    ready = D_00137B00[0] == 0;
    D_0015EC98 = ready;
    if (ready != 1) {
        if (mode == 1) {
            return 1;
        }
        if (ready == 0) {
            do {
                func_0012DC80();
                FlushCache(0);
                next_ready = D_00137B00[0] == 0;
                D_0015EC98 = next_ready;
            } while (next_ready == 0);
        }
        return 0;
    }
    return 0;
}

extern s32 func_0012EE08(s32 mode) __attribute__((alias("FUN_0012ee08")));
