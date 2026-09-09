/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.; shared struct extraction rejected after compile failure
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit malloc_extend_top; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl malloc_extend_top\n"
    ".type malloc_extend_top, @function\n"
    "malloc_extend_top:\n"
    "addiu      $29, $29, -0xA0\n"
    "lui        $2, %hi(D_0012F788)\n"
    "sd         $23, 0x70($29)\n"
    "addiu      $2, $2, %lo(D_0012F788)\n"
    "sd         $22, 0x60($29)\n"
    "lui        $6, %hi(D_0012FB98)\n"
    "sd         $21, 0x50($29)\n"
    "dsll32     $5, $5, 0\n"
    "sd         $19, 0x30($29)\n"
    "dsrl32     $5, $5, 0\n"
    "sd         $18, 0x20($29)\n"
    "lui        $22, %hi(D_0012FBA0)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $23, $4, $0\n"
    "sd         $31, 0x90($29)\n"
    "lui        $16, (0xFFFFFFFF >> 16)\n"
    "sd         $30, 0x80($29)\n"
    "ori        $16, $16, (0xFFFFFFFF & 0xFFFF)\n"
    "sd         $17, 0x10($29)\n"
    "sd         $20, 0x40($29)\n"
    "lw         $20, 0x8($2)\n"
    "ld         $3, %lo(D_0012FB98)($6)\n"
    "lui        $2, (0xFFFFFFFC >> 16)\n"
    "lw         $6, 0x4($20)\n"
    "ori        $2, $2, (0xFFFFFFFC & 0xFFFF)\n"
    "daddu      $5, $5, $3\n"
    "and        $19, $6, $2\n"
    "daddiu     $5, $5, 0x10\n"
    "lw         $2, %lo(D_0012FBA0)($22)\n"
    "dsll32     $18, $5, 0\n"
    "dsra32     $18, $18, 0\n"
    "beq        $2, $16, .L00114768\n"
    "addu      $21, $20, $19\n"
    "dsll32     $2, $18, 0\n"
    "addiu      $3, $0, -0x1000\n"
    "dsrl32     $2, $2, 0\n"
    "daddiu     $2, $2, 0xFFF\n"
    "and        $2, $2, $3\n"
    "dsll32     $18, $2, 0\n"
    "dsra32     $18, $18, 0\n"
    ".L00114768:\n"
    "daddu      $4, $23, $0\n"
    "jal        _sbrk_r\n"
    "daddu     $5, $18, $0\n"
    "daddu      $17, $2, $0\n"
    "beq        $17, $16, .L001148EC\n"
    "sltu      $2, $17, $21\n"
    "beqz       $2, .L00114794\n"
    "lui       $4, %hi(D_0012F788)\n"
    "addiu      $4, $4, %lo(D_0012F788)\n"
    "bne        $20, $4, .L001148F0\n"
    "ld        $31, 0x90($29)\n"
    ".L00114794:\n"
    "lui        $30, %hi(D_0012FBB8)\n"
    "lw         $2, %lo(D_0012FBB8)($30)\n"
    "addu       $3, $2, $18\n"
    "bne        $17, $21, .L001147C4\n"
    "sw        $3, %lo(D_0012FBB8)($30)\n"
    "lui        $5, %hi(D_0012F788)\n"
    "addu       $2, $18, $19\n"
    "addiu      $5, $5, %lo(D_0012F788)\n"
    "ori        $2, $2, 0x1\n"
    "lw         $3, 0x8($5)\n"
    "b          .L001148BC\n"
    "sw        $2, 0x4($3)\n"
    ".L001147C4:\n"
    "lw         $2, %lo(D_0012FBA0)($22)\n"
    "bne        $2, $16, .L001147D8\n"
    "subu      $2, $17, $21\n"
    "b          .L001147E0\n"
    "sw        $17, %lo(D_0012FBA0)($22)\n"
    ".L001147D8:\n"
    "addu       $2, $3, $2\n"
    "sw         $2, %lo(D_0012FBB8)($30)\n"
    ".L001147E0:\n"
    "addiu      $2, $17, 0x8\n"
    "andi       $5, $2, 0xF\n"
    "beqz       $5, .L001147FC\n"
    "addiu     $2, $0, 0x10\n"
    "subu       $16, $2, $5\n"
    "b          .L00114800\n"
    "addu      $17, $17, $16\n"
    ".L001147FC:\n"
    "daddu      $16, $0, $0\n"
    ".L00114800:\n"
    "addu       $2, $17, $18\n"
    "addiu      $3, $0, 0x1000\n"
    "andi       $2, $2, 0xFFF\n"
    "daddu      $4, $23, $0\n"
    "dsubu      $3, $3, $2\n"
    "dsll32     $3, $3, 0\n"
    "dsra32     $3, $3, 0\n"
    "addu       $16, $16, $3\n"
    "jal        _sbrk_r\n"
    "daddu     $5, $16, $0\n"
    "daddu      $4, $2, $0\n"
    "lui        $2, (0xFFFFFFFF >> 16)\n"
    "ori        $2, $2, (0xFFFFFFFF & 0xFFFF)\n"
    "beq        $4, $2, .L001148EC\n"
    "subu      $2, $4, $17\n"
    "lw         $3, %lo(D_0012FBB8)($30)\n"
    "addu       $2, $2, $16\n"
    "lui        $5, %hi(D_0012F788)\n"
    "addu       $3, $3, $16\n"
    "addiu      $4, $5, %lo(D_0012F788)\n"
    "ori        $2, $2, 0x1\n"
    "sw         $3, %lo(D_0012FBB8)($30)\n"
    "sw         $2, 0x4($17)\n"
    "beq        $20, $4, .L001148BC\n"
    "sw        $17, 0x8($4)\n"
    "sltiu      $2, $19, 0x10\n"
    "beqz       $2, .L00114878\n"
    "addiu     $2, $0, 0x1\n"
    "b          .L001148EC\n"
    "sw        $2, 0x4($17)\n"
    ".L00114878:\n"
    "lw         $3, 0x4($20)\n"
    "lui        $2, (0xFFFFFFF0 >> 16)\n"
    "addiu      $4, $19, -0xC\n"
    "ori        $2, $2, (0xFFFFFFF0 & 0xFFFF)\n"
    "and        $19, $4, $2\n"
    "andi       $3, $3, 0x1\n"
    "or         $3, $3, $19\n"
    "addu       $4, $20, $19\n"
    "sw         $3, 0x4($20)\n"
    "addiu      $2, $0, 0x5\n"
    "sw         $2, 0x8($4)\n"
    "sltiu      $3, $19, 0x10\n"
    "bnez       $3, .L001148BC\n"
    "sw        $2, 0x4($4)\n"
    "daddu      $4, $23, $0\n"
    "jal        _free_r\n"
    "addiu     $5, $20, 0x8\n"
    ".L001148BC:\n"
    "lui        $5, %hi(D_0012FBA8)\n"
    "lw         $3, %lo(D_0012FBB8)($30)\n"
    "ld         $2, %lo(D_0012FBA8)($5)\n"
    "sltu       $2, $2, $3\n"
    "beqz       $2, .L001148D8\n"
    "daddu     $4, $3, $0\n"
    "sd         $3, %lo(D_0012FBA8)($5)\n"
    ".L001148D8:\n"
    "lui        $3, %hi(D_0012FBB0)\n"
    "ld         $2, %lo(D_0012FBB0)($3)\n"
    "sltu       $2, $2, $4\n"
    "bnel       $2, $0, .L001148EC\n"
    "sd        $4, %lo(D_0012FBB0)($3)\n"
    ".L001148EC:\n"
    "ld         $31, 0x90($29)\n"
    ".L001148F0:\n"
    "ld         $30, 0x80($29)\n"
    "ld         $23, 0x70($29)\n"
    "ld         $22, 0x60($29)\n"
    "ld         $21, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0xA0\n"
    ".size malloc_extend_top, .-malloc_extend_top\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

/* newlib mallocr.c :: malloc_extend_top  -> func_003AC090 */

typedef unsigned int INTERNAL_SIZE_T;

struct malloc_chunk {
    INTERNAL_SIZE_T prev_size;
    INTERNAL_SIZE_T size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
};

typedef struct malloc_chunk *mchunkptr;
typedef struct malloc_chunk *mbinptr;

extern mbinptr D_003FA9D0[];      /* __malloc_av_ */
extern unsigned long D_003FADE0;  /* __malloc_top_pad */
extern char *D_003FADE8;          /* __malloc_sbrk_base */
extern unsigned long D_003FADF0;  /* __malloc_max_sbrked_mem */
extern unsigned long D_003FADF8;  /* __malloc_max_total_mem */
extern int D_003FAE00;            /* __malloc_current_mallinfo.arena */

extern void *func_003AE0C8(void *reent, int size); /* _sbrk_r */
extern void func_003ACA28(void *reent, void *mem); /* _free_r */

#define SIZE_SZ 4
#define MALLOC_ALIGNMENT 16
#define MALLOC_ALIGN_MASK 15
#define MINSIZE 16
#define PREV_INUSE 0x1
#define IS_MMAPPED 0x2
#define SIZE_BITS (PREV_INUSE | IS_MMAPPED)

#define av_ D_003FA9D0
#define bin_at(i) ((mbinptr)((char *)&(av_[2 * (i) + 2]) - 2 * SIZE_SZ))
#define top (av_[2])
#define initial_top ((mchunkptr)(bin_at(0)))
#define top_pad D_003FADE0
#define sbrk_base D_003FADE8
#define max_sbrked_mem D_003FADF0
#define max_total_mem D_003FADF8
#define sbrked_mem D_003FAE00

#define chunk2mem(p) ((void *)((char *)(p) + 2 * SIZE_SZ))
#define chunksize(p) ((p)->size & ~(SIZE_BITS))
#define chunk_at_offset(p, s) ((mchunkptr)(((char *)(p)) + (s)))
#define set_head(p, s) ((p)->size = (s))
#define set_head_size(p, s) ((p)->size = (((p)->size & PREV_INUSE) | (s)))

#define MORECORE(x) func_003AE0C8(RARG, (x))
#define MORECORE_FAILURE (-1)

__attribute__((section(".text.func_003AC090")))
void func_003AC090(void *RARG, INTERNAL_SIZE_T nb)
{
    char *brk;
    INTERNAL_SIZE_T front_misalign;
    INTERNAL_SIZE_T correction;
    char *new_brk;
    INTERNAL_SIZE_T top_size;

    mchunkptr old_top = top;
    INTERNAL_SIZE_T old_top_size = chunksize(old_top);
    char *old_end = (char *)(chunk_at_offset(old_top, old_top_size));

    INTERNAL_SIZE_T sbrk_size = nb + top_pad + MINSIZE;
    unsigned long pagesz = 4096;

    if (sbrk_base != (char *)(-1))
        sbrk_size = (sbrk_size + (pagesz - 1)) & ~(pagesz - 1);

    brk = (char *)(MORECORE(sbrk_size));

    if (brk == (char *)(MORECORE_FAILURE) ||
        (brk < old_end && old_top != initial_top))
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

        front_misalign = (unsigned long)chunk2mem(brk) & MALLOC_ALIGN_MASK;
        if (front_misalign > 0) {
            correction = (MALLOC_ALIGNMENT) - front_misalign;
            brk += correction;
        } else
            correction = 0;

        correction += pagesz - ((unsigned long)(brk + sbrk_size) & (pagesz - 1));

        new_brk = (char *)(MORECORE(correction));
        if (new_brk == (char *)(MORECORE_FAILURE))
            return;

        sbrked_mem += correction;

        top = (mchunkptr)brk;
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
            chunk_at_offset(old_top, old_top_size + SIZE_SZ)->size = SIZE_SZ | PREV_INUSE;

            if (old_top_size >= MINSIZE)
                func_003ACA28(RARG, chunk2mem(old_top));
        }
    }

    if ((unsigned long)sbrked_mem > (unsigned long)max_sbrked_mem)
        max_sbrked_mem = sbrked_mem;

    if ((unsigned long)sbrked_mem > (unsigned long)max_total_mem)
        max_total_mem = sbrked_mem;
}
#endif /* NON_MATCHING */
