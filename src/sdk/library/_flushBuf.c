/* STATE: C_EXACT
 * SYMBOL: _flushBuf
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2 (-O2 -g2 -gstabs)
 * DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
 * BLOCKER: none
 */
/*
AUTO-DIAGNOSIS
symbol: _flushBuf
unit: assembly/sdk/library/_flushBuf
code_percent: 89.5500
function_percent: 89.5500
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "240", "object": "_flushBuf.c.o", "text_size": "240"}
current: {"code_percent": 89.55, "data_percent": 100.0, "function_percent": 89.55, "function_size": "232", "object": "candidate.o", "text_size": "232"}
diff: {"code_gap_percent": 10.45, "current_instruction_mismatch_count": 10, "data_gap_percent": 0.0, "function_gap_percent": 10.45, "instruction_mismatches": [{"current": null, "expected": "daddu v0, a3, zero", "kind": "DIFF_DELETE"}, {"current": "slti v0, a3, 0x1389", "expected": "slti v0, v0, 0x1389", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw a0, 0x858(s0)", "expected": null, "kind": "DIFF_INSERT"}, {"current": null, "expected": "lw a0, 0x858(s0)", "kind": "DIFF_DELETE"}, {"current": "daddu a1, s1, zero", "expected": "daddu a3, zero, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": "daddu a3, zero, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": null, "expected": "dsll32 v0, v0, 0", "kind": "DIFF_DELETE"}, {"current": null, "expected": "dsra32 v0, v0, 0", "kind": "DIFF_DELETE"}, {"current": "sw v0, 0x838(s0)", "expected": "sw v1, 0x83c(s0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sw v1, 0x83c(s0)", "expected": "sw v0, 0x838(s0)", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 10}
*/

/* _flushBuf f6: MPEG buffer flush with GS status polling and IPU idle wait. */
#include "types.h"

typedef struct FlushBufContext {
    u8 pad_0[0x818];
    s32 unk818;
    u8 pad_81C[0x1C];
    s32 unk838;
    s32 unk83C;
    u8 pad_840[0x18];
    s32 unk858;
} FlushBufContext;

extern s32 D_00132E70[];
extern s32 _dispatchMpegCbNodata();
extern s64 _waitIpuIdle64();

void _flushBuf(FlushBufContext *arg0, s32 arg1) {
    s32 value;
    s32 counter;
    u32 command;
    s32 table_value;
    s32 index;
    s64 idle_result;

    value = arg1;
    counter = 0;
    if ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        do {
            if (counter++ >= 0x1389) {
                _dispatchMpegCbNodata(arg0->unk858);
                counter = 0;
            }
        } while ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000);
    }

    command = value | 0x40000000;
    *(volatile u32 *)0x10002000 = command;
    index = command >> 0x1C;
    table_value = D_00132E70[index];
    arg0->unk818 = table_value;
    idle_result = _waitIpuIdle64(arg0, &D_00132E70[index]);
    arg0->unk838 = (s32)idle_result;
    arg0->unk83C = 0x20;
}
