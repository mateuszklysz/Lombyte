/* STATE: C_EXACT
 * SYMBOL: InitializeGlobalStateEntry
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: Himuro -O2 -g2 -mno-split-addresses -fno-schedule-insns
 * DECISION: promoted; BLOCKER: none.
 * GATE: staged and authoritative full baseline PASS 2026-09-10 (final-gate.log);
 *   built ELF == retail e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9.
 * EVIDENCE: build/workspace/patha-execution-20260910/final-gate.log,
 *   linked/igse/receipt.json (byte-equal linked retail slice).
 */
#include "types.h"
extern s32 D_0015F600[4];
extern s32 D_0015F618[4];
extern s32 D_0015F5B0;

void InitializeGlobalStateEntry(s32 value) {
    D_0015F600[0] = value;
    D_0015F618[0] = 1;
    D_0015F5B0 = 1;
}
