/*
STATE: C_EXACT
SYMBOL: InitThread
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: InitThread
unit: assembly/sdk/library/InitThread
code_percent: 99.8491
function_percent: 99.8491
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "212", "object": "InitThread.c.o", "text_size": "212"}
current: {"code_percent": 99.84906, "data_percent": 100.0, "function_percent": 99.84906, "function_size": "212", "object": "candidate.o", "text_size": "212"}
diff: {"code_gap_percent": 0.15094, "current_instruction_mismatch_count": 8, "data_gap_percent": 0.0, "function_gap_percent": 0.15094, "instruction_mismatches": [{"current": "addiu sp, sp, -0x70", "expected": "addiu sp, sp, -0x80", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sd s0, 0x40(sp)", "expected": "sd s0, 0x50(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sd ra, 0x60(sp)", "expected": "sd ra, 0x70(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sd s1, 0x50(sp)", "expected": "sd s1, 0x60(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld ra, 0x60(sp)", "expected": "ld ra, 0x70(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld s1, 0x50(sp)", "expected": "ld s1, 0x60(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld s0, 0x40(sp)", "expected": "ld s0, 0x50(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "addiu sp, sp, 0x70", "expected": "addiu sp, sp, 0x80", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 8}
*/

/* InitThread i4: create the kernel patch sema and top-level thread. */

#include "types.h"

struct SemaArgsInit {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 padC[0x14];
};

struct ThreadArgsInit {
    u8 pad0[4];
    void (*entry)();
    void *stack;
    s32 stackSize;
    void *gp;
    s32 priority;
    u8 pad18[0x18];
};

extern s32 CreateSema();
extern s32 CreateThread();
extern s32 DeleteSema(s32 sema);
extern s32 _StartThread(s32 id, void *arg);
extern s32 GetThreadId();
extern s32 ChangeThreadPriority(s32 id, s32 priority);
extern void topThread();

extern s32 D_0012FBF8[];
extern s32 D_00154500[];
extern u32 D_00154508[];
extern s32 D_00154100[];
extern s32 D_00166C00[];

s32 InitThread(void) {
    struct ThreadArgsInit th;
    struct SemaArgsInit se;

    if (D_0012FBF8[0] > 0)
        return -1;

    se.unk8 = 0;
    se.unk4 = 0xFF;
    D_00154500[0] = CreateSema(&se);
    if (D_00154500[0] < 0)
        return -1;

    th.entry = topThread;
    th.stack = D_00154100;
    th.stackSize = 0x400;
    th.gp = D_00166C00;
    th.priority = 0;
    D_0012FBF8[0] = CreateThread(&th);
    if (D_0012FBF8[0] < 0) {
        DeleteSema(D_00154500[0]);
        return -1;
    }

    D_00154508[0] = 0;
    D_00154508[1] = 0;
    _StartThread(D_0012FBF8[0], D_00154508);
    ChangeThreadPriority(GetThreadId(), 1);

    return D_0012FBF8[0];
}
