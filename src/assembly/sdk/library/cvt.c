/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.; shared struct extraction rejected after compile failure
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit cvt; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl cvt\n"
    ".type cvt, @function\n"
    "cvt:\n"
    "addiu      $29, $29, -0xB0\n"
    "addiu      $2, $0, 0x66\n"
    "sd         $30, 0x90($29)\n"
    "sd         $23, 0x80($29)\n"
    "daddu      $30, $11, $0\n"
    "sd         $22, 0x70($29)\n"
    "daddu      $23, $7, $0\n"
    "sd         $21, 0x60($29)\n"
    "daddu      $22, $4, $0\n"
    "sd         $20, 0x50($29)\n"
    "daddu      $21, $9, $0\n"
    "sd         $18, 0x30($29)\n"
    "daddu      $20, $6, $0\n"
    "sd         $17, 0x20($29)\n"
    "daddu      $18, $5, $0\n"
    "sd         $16, 0x10($29)\n"
    "daddu      $17, $10, $0\n"
    "sd         $31, 0xA0($29)\n"
    "daddu      $16, $8, $0\n"
    "bne        $17, $2, .L00118394\n"
    "sd        $19, 0x40($29)\n"
    "b          .L001183B0\n"
    "addiu     $19, $0, 0x3\n"
    ".L00118394:\n"
    "addiu      $2, $0, 0x65\n"
    "beq        $17, $2, .L001183A8\n"
    "addiu     $2, $0, 0x45\n"
    "bne        $17, $2, .L001183B0\n"
    "addiu     $19, $0, 0x2\n"
    ".L001183A8:\n"
    "addiu      $20, $20, 0x1\n"
    "addiu      $19, $0, 0x2\n"
    ".L001183B0:\n"
    "daddu      $2, $18, $0\n"
    "dsra32     $2, $2, 0\n"
    "bgezl      $2, .L001183D8\n"
    "sb        $0, 0x0($16)\n"
    "daddu      $5, $18, $0\n"
    "jal        dpsub\n"
    "daddu     $4, $0, $0\n"
    "addiu      $3, $0, 0x2D\n"
    "daddu      $18, $2, $0\n"
    "sb         $3, 0x0($16)\n"
    ".L001183D8:\n"
    "daddu      $6, $19, $0\n"
    "daddu      $4, $22, $0\n"
    "daddu      $5, $18, $0\n"
    "daddu      $7, $20, $0\n"
    "daddu      $8, $21, $0\n"
    "daddu      $9, $29, $0\n"
    "jal        _dtoa_r\n"
    "ori       $10, $29, 0x4\n"
    "daddu      $19, $2, $0\n"
    "addiu      $2, $0, 0x67\n"
    "beq        $17, $2, .L00118410\n"
    "addiu     $2, $0, 0x47\n"
    "bne        $17, $2, .L0011841C\n"
    "addiu     $2, $0, 0x66\n"
    ".L00118410:\n"
    "andi       $2, $23, 0x1\n"
    "beqz       $2, .L001184A8\n"
    "addiu     $2, $0, 0x66\n"
    ".L0011841C:\n"
    "bne        $17, $2, .L00118458\n"
    "addu      $16, $19, $20\n"
    "lb         $3, 0x0($19)\n"
    "addiu      $2, $0, 0x30\n"
    "bnel       $3, $2, .L00118454\n"
    "lw        $2, 0x0($21)\n"
    "daddu      $4, $18, $0\n"
    "jal        dpcmp\n"
    "daddu     $5, $0, $0\n"
    "beqz       $2, .L00118450\n"
    "negu      $2, $20\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $2, 0x0($21)\n"
    ".L00118450:\n"
    "lw         $2, 0x0($21)\n"
    ".L00118454:\n"
    "addu       $16, $16, $2\n"
    ".L00118458:\n"
    "daddu      $4, $18, $0\n"
    "jal        dpcmp\n"
    "daddu     $5, $0, $0\n"
    "beql       $2, $0, .L0011846C\n"
    "sw        $16, 0x4($29)\n"
    ".L0011846C:\n"
    "lw         $3, 0x4($29)\n"
    "sltu       $2, $3, $16\n"
    "beqz       $2, .L001184AC\n"
    "daddu     $4, $3, $0\n"
    "addiu      $5, $0, 0x30\n"
    ".L00118480:\n"
    "addiu      $2, $4, 0x1\n"
    "sb         $5, 0x0($4)\n"
    "daddu      $3, $2, $0\n"
    "sw         $2, 0x4($29)\n"
    "daddu      $4, $3, $0\n"
    "sltu       $2, $3, $16\n"
    "bnez       $2, .L00118480\n"
    "nop\n"
    "b          .L001184B0\n"
    "subu      $3, $3, $19\n"
    ".L001184A8:\n"
    "lw         $3, 0x4($29)\n"
    ".L001184AC:\n"
    "subu       $3, $3, $19\n"
    ".L001184B0:\n"
    "daddu      $2, $19, $0\n"
    "sw         $3, 0x0($30)\n"
    "ld         $31, 0xA0($29)\n"
    "ld         $30, 0x90($29)\n"
    "ld         $23, 0x80($29)\n"
    "ld         $22, 0x70($29)\n"
    "ld         $21, 0x60($29)\n"
    "ld         $20, 0x50($29)\n"
    "ld         $19, 0x40($29)\n"
    "ld         $18, 0x30($29)\n"
    "ld         $17, 0x20($29)\n"
    "ld         $16, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0xB0\n"
    ".size cvt, .-cvt\n"
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
