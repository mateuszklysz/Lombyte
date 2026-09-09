/* C_EXACT (byte-proven): staged and full-ELF gates PASSED
 * SYMBOL: FUN_002172c0 (alias func_002172C0)
 * UNIT: textbin/fun_002172c0 (retagged from assembly/textbin/fun_002172c0)
 * SCORE: code=100.0 functions=100.0 data=100.0 complete_data=100.0
 *   (fresh SN ee-gcc2.9-991111b/r4, -O2 -g2, objdiff vs validated oracle,
 *    campaign 2026-09-07-6)
 * COMPILER: SN (per-unit textbin routing: added to SN_COMPILER_UNITS in
 *   configure.py with evidence; the retail no-save function has no sq/lq
 *   fingerprint, and its branch-delay scheduling matches SN exactly while
 *   EE-GCC 2.9 produces an order-only nop/addiu swap)
 * DECISION: promoted (transactional --apply-exact, batch of 1)
 * GATE: staged object 100/100/100/100 + direct .text equality + full baseline
 *   PASS 2026-09-07T15:54:13Z (audit 300 / 23,652 B / 5.492%).
 * EVIDENCE: build/workspace/rnc-refval/campaigns/2026-09-07-6/promotion-fun002172c0/;
 *   the private evidence archive/source-quality-audit-2026-09-07.json;
 *   the private evidence archive/full-elf-gate.json
 * FIX HISTORY: retained partial winner stored the tail loop 16 bytes per step
 *   (`var_3_8 += 4` on a 4-byte struct) and a rotated store order; retail walks
 *   4 bytes per step (`addiu v1,v1,4`) and stores in a specific order. Final
 *   source uses `var_3_8 += 1` and the retail store order that SN reproduces.
 */
#include "types.h"
#include "rnc/assembly_textbin_fun_002172c0_types.h"

void FUN_002172c0(struct M2c_arg0 *arg0) {
    s32 var_5_10;
    struct M2c_var_3_8 *var_3_8;

    var_3_8 = ((u8 *)arg0 + (0x140));
    var_5_10 = 0xF;
    arg0->unk1A0 = 0;
    arg0->unk1A4 = 0;
    arg0->unk1A8 = 0;
    arg0->unk1D0 = 1;
    arg0->unk1B4 = 0;
    arg0->unk1B8 = 0;
    arg0->unk1C0 = 0;
    arg0->unk1C4 = 0;
    arg0->unk1C8 = 0;
    arg0->unk1D8 = 0;
    arg0->unk1D4 = 1;
    arg0->unk1B0 = 0;
    do {
        *(s32 *)((u8 *)var_3_8 - 0x40) = 0;
        var_5_10 -= 1;
        var_3_8->unk0 = 0;
        var_3_8 += 1;
    } while (var_5_10 >= 0);
}

extern void func_002172C0(struct M2c_arg0 *arg0) __attribute__((alias("FUN_002172c0")));