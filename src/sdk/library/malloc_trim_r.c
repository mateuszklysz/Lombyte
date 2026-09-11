/*
STATE: C_EXACT
SYMBOL: _malloc_trim_r
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: _malloc_trim_r
unit: assembly/sdk/library/malloc_trim_r
code_percent: 88.5714
function_percent: 88.5714
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "364", "object": "malloc_trim_r.c.o", "text_size": "364"}
current: {"code_percent": 88.57143, "data_percent": 100.0, "function_percent": 88.57143, "function_size": "352", "object": "candidate.o", "text_size": "352"}
diff: {"code_gap_percent": 11.42857, "current_instruction_mismatch_count": 20, "data_gap_percent": 0.0, "function_gap_percent": 11.42857, "instruction_mismatches": [{"current": "lui v0, %hi(D_0012F788-0x6)", "expected": "lui v0, %hi(D_0012F788)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "addiu s4, v0, %lo(D_0012F788-0x6)", "expected": "addiu s4, v0, %lo(D_0012F788)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw a1, 0x8(s4)", "expected": "lw a2, 0x8(s4)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "daddu a0, v0, zero", "expected": "daddu a1, v0, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": "subu s1, a0, a1", "expected": "subu s1, a1, a2", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui a0, %hi(D_0012FBA0)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu v0, zero, 0x1", "kind": "DIFF_DELETE"}, {"current": "lw v1, %gp_rel(D_0012FBA0)(gp)", "expected": "lw v1, %lo(D_0012FBA0)(a0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "addiu v0, zero, 0x1", "expected": null, "kind": "DIFF_INSERT"}, {"current": "subu v1, a0, v1", "expected": "lui a0, %hi(D_0012FBB8)", "kind": "DIFF_REPLACE"}, {"current": null, "expected": "subu v1, a1, v1", "kind": "DIFF_DELETE"}, {"current": "sw v1, %gp_rel(D_0012FBB8)(gp)", "expected": "sw v1, %lo(D_0012FBB8)(a0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sw v0, 0x4(a1)", "expected": "sw v0, 0x4(a2)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw v1, %gp_rel(D_0012FBB8)(gp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": null, "expected": "lui v1, %hi(D_0012FBB8)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "daddu a0, s2, zero", "kind": "DIFF_DELETE"}, {"current": null, "expected": "lw v0, %lo(D_0012FBB8)(v1)", "kind": "DIFF_DELETE"}, {"current": "subu v1, v1, s3", "expected": "subu v0, v0, s3", "kind": "DIFF_ARG_MISMATCH"}, {"current": "daddu a0, s2, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "sw v1, %gp_rel(D_0012FBB8)(gp)", "expected": "sw v0, %lo(D_0012FBB8)(v1)", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 20}
*/

/* _malloc_trim_r t2: newlib mallocr.c malloc_trim with array externs (absolute addressing). */

#include "types.h"

struct _reent;

extern void func_001154C0(struct _reent *);
extern void func_001154C8(struct _reent *);
extern void *_sbrk_r(struct _reent *ptr, s32 delta);

extern u32 D_0012F788[];  /* __malloc_av_ bins (pointer array) */
extern u32 D_0012FBA0[]; /* sbrk_base */
extern u32 D_0012FBB8[]; /* current_mallinfo.arena / sbrked_mem */

struct malloc_chunk {
    u32 prev_size;
    u32 size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
};

#define SIZE_SZ 4
#define MINSIZE 16
#define DEFAULT_TRIM_THRESHOLD ((unsigned long)(64 * 1024))
#define malloc_getpagesize 4096
#define MORECORE(x) _sbrk_r(ptr, (x))
#define MORECORE_FAILURE ((void *)-1)
#define chunksize(p) ((p)->size & ~(SIZE_SZ - 1))
#define set_head(p, s) ((p)->size = (s))
#define check_chunk(p) ((void)0)

#define av_ D_0012F788
#define bin_at(i) ((struct malloc_chunk *)((u8 *)&(av_[2 * (i) + 2]) - 2 * SIZE_SZ))
#define top (bin_at(0)->fd)

#define sbrk_base (D_0012FBA0[0])
#define sbrked_mem (D_0012FBB8[0])

s32 _malloc_trim_r(struct _reent *ptr, u32 pad)
{
    s64 top_size;
    s64 extra;
    u8 *current_brk;
    u8 *new_brk;
    u64 pagesz = malloc_getpagesize;

    func_001154C0(ptr);

    top_size = chunksize(top);
    extra = ((top_size - pad - MINSIZE + (pagesz - 1)) / pagesz - 1) * pagesz;

    if (extra < (s64)pagesz) {
        func_001154C8(ptr);
        return 0;
    } else {
        current_brk = (u8 *)MORECORE(0);
        if (current_brk != (u8 *)(top) + top_size) {
            func_001154C8(ptr);
            return 0;
        } else {
            new_brk = (u8 *)MORECORE(-extra);
            if (new_brk == (u8 *)MORECORE_FAILURE) {
                current_brk = (u8 *)MORECORE(0);
                top_size = current_brk - (u8 *)(top);
                if (top_size >= (s64)MINSIZE) {
                    sbrked_mem = (u32)(current_brk - (u8 *)sbrk_base);
                    set_head(top, top_size | 1);
                }
                check_chunk(top);
                func_001154C8(ptr);
                return 0;
            } else {
                set_head(top, (top_size - extra) | 1);
                sbrked_mem -= (u32)extra;
                check_chunk(top);
                func_001154C8(ptr);
                return 1;
            }
        }
    }
}
