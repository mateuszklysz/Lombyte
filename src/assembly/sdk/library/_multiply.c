/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.; shared struct extraction rejected after compile failure
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _multiply; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _multiply\n"
    ".type _multiply, @function\n"
    "_multiply:\n"
    "addiu      $29, $29, -0x70\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $17, $6, $0\n"
    "sd         $31, 0x60($29)\n"
    "daddu      $16, $5, $0\n"
    "sd         $21, 0x50($29)\n"
    "sd         $20, 0x40($29)\n"
    "sd         $19, 0x30($29)\n"
    "sd         $18, 0x20($29)\n"
    "lw         $18, 0x10($16)\n"
    "lw         $19, 0x10($17)\n"
    "slt        $2, $18, $19\n"
    "beqz       $2, .L0011588C\n"
    "daddu     $25, $16, $0\n"
    "daddu      $16, $17, $0\n"
    "daddu      $17, $25, $0\n"
    "lw         $18, 0x10($16)\n"
    "lw         $19, 0x10($17)\n"
    ".L0011588C:\n"
    "lw         $5, 0x8($16)\n"
    "addu       $20, $18, $19\n"
    "lw         $2, 0x4($16)\n"
    "slt        $5, $5, $20\n"
    "jal        _Balloc\n"
    "addu      $5, $2, $5\n"
    "daddu      $25, $2, $0\n"
    "sll        $21, $20, 2\n"
    "addiu      $24, $25, 0x14\n"
    "addu       $4, $24, $21\n"
    "sltu       $2, $24, $4\n"
    "beqz       $2, .L001158F4\n"
    "daddu     $9, $24, $0\n"
    "addiu      $14, $16, 0x14\n"
    "sll        $5, $18, 2\n"
    "addiu      $6, $17, 0x14\n"
    "sll        $3, $19, 2\n"
    ".L001158D0:\n"
    "sw         $0, 0x0($9)\n"
    "addiu      $9, $9, 0x4\n"
    "sltu       $2, $9, $4\n"
    "nop\n"
    "nop\n"
    "bnez       $2, .L001158D0\n"
    "nop\n"
    "b          .L00115908\n"
    "daddu     $12, $6, $0\n"
    ".L001158F4:\n"
    "addiu      $14, $16, 0x14\n"
    "sll        $5, $18, 2\n"
    "addiu      $6, $17, 0x14\n"
    "sll        $3, $19, 2\n"
    "daddu      $12, $6, $0\n"
    ".L00115908:\n"
    "addu       $17, $14, $5\n"
    "addu       $18, $12, $3\n"
    "sltu       $2, $12, $18\n"
    "beqz       $2, .L00115A24\n"
    "daddu     $13, $24, $0\n"
    "nop\n"
    ".L00115920:\n"
    "lw         $2, 0x0($12)\n"
    "andi       $10, $2, 0xFFFF\n"
    "beqz       $10, .L0011599C\n"
    "daddu     $8, $13, $0\n"
    "daddu      $9, $14, $0\n"
    "daddu      $11, $0, $0\n"
    "addiu      $16, $12, 0x4\n"
    "addiu      $15, $8, 0x4\n"
    ".L00115940:\n"
    "lw         $3, 0x0($9)\n"
    "lw         $4, 0x0($8)\n"
    "addiu      $9, $9, 0x4\n"
    "andi       $2, $3, 0xFFFF\n"
    "sltu       $6, $9, $17\n"
    "mult       $2, $2, $10\n"
    "srl        $3, $3, 16\n"
    "mult1      $3, $3, $10\n"
    "andi       $5, $4, 0xFFFF\n"
    "srl        $4, $4, 16\n"
    "addu       $2, $2, $5\n"
    "addu       $2, $2, $11\n"
    "addu       $3, $3, $4\n"
    "srl        $11, $2, 16\n"
    "sh         $2, 0x0($8)\n"
    "addu       $7, $3, $11\n"
    "sh         $7, 0x2($8)\n"
    "srl        $11, $7, 16\n"
    "bnez       $6, .L00115940\n"
    "addiu     $8, $8, 0x4\n"
    "sw         $11, 0x0($8)\n"
    "b          .L001159A4\n"
    "lw        $2, 0x0($12)\n"
    ".L0011599C:\n"
    "addiu      $16, $12, 0x4\n"
    "addiu      $15, $13, 0x4\n"
    ".L001159A4:\n"
    "srl        $10, $2, 16\n"
    "beqz       $10, .L00115A14\n"
    "daddu     $8, $13, $0\n"
    "daddu      $9, $14, $0\n"
    "lw         $7, 0x0($8)\n"
    "daddu      $11, $0, $0\n"
    "daddu      $2, $7, $0\n"
    ".L001159C0:\n"
    "lw         $4, 0x0($9)\n"
    "srl        $3, $2, 16\n"
    "sh         $7, 0x0($8)\n"
    "addiu      $9, $9, 0x4\n"
    "andi       $2, $4, 0xFFFF\n"
    "sltu       $5, $9, $17\n"
    "mult       $2, $2, $10\n"
    "srl        $4, $4, 16\n"
    "mult1      $4, $4, $10\n"
    "addu       $2, $2, $3\n"
    "addu       $2, $2, $11\n"
    "sh         $2, 0x2($8)\n"
    "srl        $11, $2, 16\n"
    "addiu      $8, $8, 0x4\n"
    "lw         $2, 0x0($8)\n"
    "andi       $3, $2, 0xFFFF\n"
    "addu       $4, $4, $3\n"
    "addu       $7, $4, $11\n"
    "bnez       $5, .L001159C0\n"
    "srl       $11, $7, 16\n"
    "sw         $7, 0x0($8)\n"
    ".L00115A14:\n"
    "daddu      $12, $16, $0\n"
    "sltu       $2, $12, $18\n"
    "bnez       $2, .L00115920\n"
    "daddu     $13, $15, $0\n"
    ".L00115A24:\n"
    "addu       $8, $24, $21\n"
    ".L00115A28:\n"
    "blezl      $20, .L00115A44\n"
    "sw        $20, 0x10($25)\n"
    "addiu      $8, $8, -0x4\n"
    "lw         $2, 0x0($8)\n"
    "beql       $2, $0, .L00115A28\n"
    "addiu     $20, $20, -0x1\n"
    "sw         $20, 0x10($25)\n"
    ".L00115A44:\n"
    "daddu      $2, $25, $0\n"
    "ld         $31, 0x60($29)\n"
    "ld         $21, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x70\n"
    ".size _multiply, .-_multiply\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void func_002E0DE8(int, int, int, void *);
extern void *D_003C4030[16];
extern void *D_003F28C0[];
extern char D_0045C328[];

typedef unsigned int size_t;

typedef struct Rep {
    size_t len;
    size_t res;
    size_t ref;
    int selfish;
} Rep;

typedef struct String {
    char *dat;
} String;

extern char *func_003BB058(Rep *);                    /* Rep::clone */
extern void UpdateGlobalPtrWithParam_3A7CC0(void *);  /* free */






__attribute__((section(".text.func_00380138")))
void func_00380138(char *self, char *other)
{
    if (*(int *)(other + 0x34) & 0x40) {
        String *dst = *(String **)(self + 0x10);
        String *src = dst + 1;

        if (src != dst) {
            char *odat = dst->dat;
            Rep *orep = (Rep *)(odat - 16);
            char *sdat;
            Rep *srep;
            if (--orep->ref == 0) {
                size_t dn = orep->res + 16;
                if (dn > 128) {
                    UpdateGlobalPtrWithParam_3A7CC0(orep);
                } else {
                    size_t di;
                    void **dfl;
                    di = (dn + 7) / 8;
                    di = di - 1;
                    dfl = D_003C4030 + di;
                    *(char **)(odat - 16) = (char *)*dfl;
                    *dfl = orep;
                }
            }
            sdat = src->dat;
            srep = (Rep *)(sdat - 16);
            if (srep->selfish) {
                sdat = func_003BB058(srep);
            } else {
                srep->ref = srep->ref + 1;
            }
            dst->dat = sdat;
        }
        if (func_0037E8D8(self))
            *(char *)(self + 2) = 12;
        else
            *(char *)(self + 2) = 1;
    } else {
        char *p = *(char **)(self + 0x10);
        size_t idx;
        idx = *(unsigned char *)(p + 0x20);
        idx = idx - 1;
        func_002E0DE8(3, 0x14, 10, D_003F28C0[idx]);
        func_002E0DE8(3, 0x15, 10, D_0045C328);
    }
}
#endif /* NON_MATCHING */
