/* STATE: C_EXACT
 * SYMBOL: malloc_extend_top
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2 (-O2 -g2 -gstabs)
 * DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
 * BLOCKER: none
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-11-6/final-report-batch1-promotion.json
 *           the private evidence archive/source-quality-audit-2026-09-11-pipeline6.json
 */
/*
AUTO-DIAGNOSIS
symbol: malloc_extend_top
unit: assembly/sdk/library/malloc_extend_top
code_percent: 96.4430
function_percent: 96.4430
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "596", "object": "malloc_extend_top.c.o", "text_size": "596"}
current: {"code_percent": 96.442955, "data_percent": 100.0, "function_percent": 96.442955, "function_size": "600", "object": "candidate.o", "text_size": "600"}
diff: {"code_gap_percent": 3.557045, "current_instruction_mismatch_count": 15, "data_gap_percent": 0.0, "function_gap_percent": 3.557045, "instruction_mismatches": [{"current": "andi v1, v0, 0xf", "expected": "andi a1, v0, 0xf", "kind": "DIFF_ARG_MISMATCH"}, {"current": "beqz v1, 0x13c", "expected": "beqz a1, 0x134", "kind": "DIFF_ARG_MISMATCH"}, {"current": "dsubu v0, v0, v1", "expected": "subu s0, v0, a1", "kind": "DIFF_REPLACE"}, {"current": "dsll32 s0, v0, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsra32 s0, s0, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "lui a0, %hi(D_0012FBA8)", "expected": "lui a1, %hi(D_0012FBA8)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lwu v1, %lo(D_0012FBB8)(s8)", "expected": "lw v1, %lo(D_0012FBB8)(s8)", "kind": "DIFF_REPLACE"}, {"current": "ld v0, %lo(D_0012FBA8)(a0)", "expected": "ld v0, %lo(D_0012FBA8)(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "bnezl v0, 0x214", "expected": "beqz v0, 0x210", "kind": "DIFF_REPLACE"}, {"current": null, "expected": "daddu a0, v1, zero", "kind": "DIFF_DELETE"}, {"current": "sd v1, %lo(D_0012FBA8)(a0)", "expected": "sd v1, %lo(D_0012FBA8)(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lui a0, %hi(D_0012FBB0)", "expected": "lui v1, %hi(D_0012FBB0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld v0, %lo(D_0012FBB0)(a0)", "expected": "ld v0, %lo(D_0012FBB0)(v1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sltu v0, v0, v1", "expected": "sltu v0, v0, a0", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sd v1, %lo(D_0012FBB0)(a0)", "expected": "sd a0, %lo(D_0012FBB0)(v1)", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 15}
*/

/* malloc_extend_top e2: newlib mallocr.c malloc_extend_top adapted to the game ABI. */
#include "types.h"

struct _reent;

extern void func_001154C0(struct _reent *);
extern void func_001154C8(struct _reent *);
extern void *_sbrk_r(struct _reent *ptr, s32 delta);
extern void _free_r(struct _reent *ptr, void *mem);

extern u32 D_0012F788[];  /* __malloc_av_ bins (top at +8) */
extern u64 D_0012FB98[];  /* top_pad */
extern u32 D_0012FBA0[];  /* sbrk_base */
extern u64 D_0012FBA8[];  /* max_sbrked_mem */
extern u64 D_0012FBB0[];  /* max_total_mem */
extern s32 D_0012FBB8[];  /* current_mallinfo.arena (sbrked_mem, int) */

struct malloc_chunk {
    u32 prev_size;
    u32 size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
};

typedef unsigned long POINTER_UINT;

#define SIZE_SZ 4
#define MINSIZE 16
#define PREV_INUSE 1
#define MALLOC_ALIGNMENT 16
#define MALLOC_ALIGN_MASK (MALLOC_ALIGNMENT - 1)
#define malloc_getpagesize 4096
#define MORECORE(x) _sbrk_r(ptr, (x))
#define MORECORE_FAILURE ((void *)-1)
#define chunksize(p) ((p)->size & ~(SIZE_SZ - 1))
#define set_head(p, s) ((p)->size = (s))
#define set_head_size(p, s) ((p)->size = (((p)->size & PREV_INUSE) | (s)))
#define chunk2mem(p) ((void *)((char *)(p) + 2 * SIZE_SZ))
#define chunk_at_offset(p, s) ((struct malloc_chunk *)(((char *)(p)) + (s)))

#define av_ D_0012F788
#define bin_at(i) ((struct malloc_chunk *)((u8 *)&(av_[2 * (i) + 2]) - 2 * SIZE_SZ))
#define top (bin_at(0)->fd)
#define initial_top ((struct malloc_chunk *)(bin_at(0)))

#define top_pad (D_0012FB98[0])
#define sbrk_base ((char *)D_0012FBA0[0])
#define sbrked_mem (D_0012FBB8[0])
#define max_sbrked_mem (D_0012FBA8[0])
#define max_total_mem (D_0012FBB0[0])

void malloc_extend_top(struct _reent *ptr, u32 nb)
{
    char *brk;
    u32 front_misalign;
    u32 correction;
    char *new_brk;
    u32 top_size;

    struct malloc_chunk *old_top = top;
    u32 old_top_size = chunksize(old_top);
    char *old_end = (char *)(chunk_at_offset(old_top, old_top_size));

    u32 sbrk_size = nb + top_pad + MINSIZE;
    unsigned long pagesz = malloc_getpagesize;

    if (sbrk_base != (char *)(-1))
        sbrk_size = (sbrk_size + (pagesz - 1)) & ~(pagesz - 1);

    brk = (char *)(MORECORE(sbrk_size));

    if (brk == (char *)(MORECORE_FAILURE) || (brk < old_end && old_top != initial_top))
        return;

    sbrked_mem += sbrk_size;

    if (brk == old_end) {
        top_size = sbrk_size + old_top_size;
        set_head(top, top_size | PREV_INUSE);
    } else {
        if (sbrk_base == (char *)(-1))
            sbrk_base = brk;
        else
            sbrked_mem += brk - (char *)old_end;

        front_misalign = (POINTER_UINT)chunk2mem(brk) & MALLOC_ALIGN_MASK;
        if (front_misalign > 0) {
            correction = (MALLOC_ALIGNMENT)-front_misalign;
            brk += correction;
        } else
            correction = 0;

        correction += pagesz - ((POINTER_UINT)(brk + sbrk_size) & (pagesz - 1));

        new_brk = (char *)(MORECORE(correction));
        if (new_brk == (char *)(MORECORE_FAILURE))
            return;

        sbrked_mem += correction;

        top = (struct malloc_chunk *)brk;
        top_size = new_brk - brk + correction;
        set_head(top, top_size | PREV_INUSE);

        if (old_top != initial_top) {
            if (old_top_size < MINSIZE) {
                set_head(top, PREV_INUSE);
                return;
            }

            old_top_size = (old_top_size - 3 * SIZE_SZ) & ~MALLOC_ALIGN_MASK;
            set_head_size(old_top, old_top_size);
            chunk_at_offset(old_top, old_top_size)->size = SIZE_SZ | PREV_INUSE;
            chunk_at_offset(old_top, old_top_size + SIZE_SZ)->size =
                SIZE_SZ | PREV_INUSE;
            if (old_top_size >= MINSIZE)
                _free_r(ptr, chunk2mem(old_top));
        }
    }

    if ((unsigned long)sbrked_mem > (unsigned long)max_sbrked_mem)
        max_sbrked_mem = sbrked_mem;

    if ((unsigned long)(sbrked_mem) > (unsigned long)max_total_mem)
        max_total_mem = sbrked_mem;
}
