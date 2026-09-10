/* C_EXACT (byte-proven): staged and full-ELF gates PASSED 2026-09-10.
 * SYMBOL: GetRpcPacket
 * UNIT: sdk/get_rpc_packet (retagged from assembly/sdk/get_rpc_packet)
 * SCORE: code=100.0 functions=100.0 data=100.0 complete_data=100.0
 * COMPILER: Himuro -O2 -g2 (production routing, no per-unit flags)
 * DECISION: promoted; BLOCKER: none.
 * GATE: full baseline PASS (built e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9
 *   vs retail e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9);
 *   baseline report 100% matched code/functions and complete data.
 * ROLE: ring-buffer packet slot lookup: advances the packet index modulo the
 *   window and returns the base pointer plus slot*64.
 * NOTE: the two pointer aliases preserve the retail register allocation
 *   (dividend a1 / divisor v1 / remainder v0); removing them regresses.
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-10-4/tasks/assembly_sdk_get_rpc_packet/
 *   (permuter zero-penalty candidate; independent 100/100/100 recompile; linked .text byte-equal)
 */
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x14];
    s32 unk14;
    s32 unk18;
    u8 pad_1C[0x8];
    s32 unk24;
};
s32 GetRpcPacket(struct M2c_arg0 *arg0) {
    struct M2c_arg0 *alias;
    struct M2c_arg0 *store;
    s32 remainder;
    s32 scaled;
    alias = arg0;
    remainder = (s32) arg0->unk24 % (s32) alias->unk18;
    scaled = remainder << 6;
    store = arg0;
    store->unk24 = (s32) (remainder + 1);
    return store->unk14 + scaled;
}
