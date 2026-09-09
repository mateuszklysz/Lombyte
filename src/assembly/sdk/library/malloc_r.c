/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 54.7845%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _malloc_r; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _malloc_r\n"
    ".type _malloc_r, @function\n"
    "_malloc_r:\n"
    "addiu      $29, $29, -0x60\n"
    "addiu      $3, $5, 0x13\n"
    "sd         $19, 0x30($29)\n"
    "sltiu      $2, $3, 0x1F\n"
    "sd         $31, 0x50($29)\n"
    "daddu      $19, $4, $0\n"
    "sd         $20, 0x40($29)\n"
    "sd         $18, 0x20($29)\n"
    "sd         $17, 0x10($29)\n"
    "bnez       $2, .L0011495C\n"
    "sd        $16, 0x0($29)\n"
    "lui        $2, (0xFFFFFFF0 >> 16)\n"
    "ori        $2, $2, (0xFFFFFFF0 & 0xFFFF)\n"
    "b          .L00114960\n"
    "and       $17, $3, $2\n"
    ".L0011495C:\n"
    "addiu      $17, $0, 0x10\n"
    ".L00114960:\n"
    "jal        func_001154C0\n"
    "daddu     $4, $19, $0\n"
    "sltiu      $2, $17, 0x1F8\n"
    "beqz       $2, .L001149C8\n"
    "lui       $20, %hi(D_0012F788)\n"
    "addiu      $2, $20, %lo(D_0012F788)\n"
    "addu       $9, $17, $2\n"
    "lw         $16, 0xC($9)\n"
    "beq        $16, $9, .L001149C0\n"
    "srl       $11, $17, 3\n"
    "lw         $3, 0x4($16)\n"
    "lui        $2, (0xFFFFFFFC >> 16)\n"
    "ori        $2, $2, (0xFFFFFFFC & 0xFFFF)\n"
    "lw         $10, 0xC($16)\n"
    "and        $8, $3, $2\n"
    "lw         $9, 0x8($16)\n"
    "addu       $3, $16, $8\n"
    "daddu      $4, $19, $0\n"
    "lw         $2, 0x4($3)\n"
    "sw         $10, 0xC($9)\n"
    "ori        $2, $2, 0x1\n"
    "sw         $9, 0x8($10)\n"
    "b          .L0011506C\n"
    "sw        $2, 0x4($3)\n"
    ".L001149C0:\n"
    "b          .L00114AB0\n"
    "addiu     $11, $11, 0x2\n"
    ".L001149C8:\n"
    "srl        $3, $17, 9\n"
    "bnez       $3, .L001149DC\n"
    "sltiu     $2, $3, 0x5\n"
    "b          .L00114A38\n"
    "srl       $11, $17, 3\n"
    ".L001149DC:\n"
    "beqz       $2, .L001149EC\n"
    "srl       $2, $17, 6\n"
    "b          .L00114A38\n"
    "addiu     $11, $2, 0x38\n"
    ".L001149EC:\n"
    "sltiu      $2, $3, 0x15\n"
    "bnez       $2, .L00114A38\n"
    "addiu     $11, $3, 0x5B\n"
    "sltiu      $2, $3, 0x55\n"
    "beqz       $2, .L00114A0C\n"
    "srl       $2, $17, 12\n"
    "b          .L00114A38\n"
    "addiu     $11, $2, 0x6E\n"
    ".L00114A0C:\n"
    "sltiu      $2, $3, 0x155\n"
    "beqz       $2, .L00114A20\n"
    "srl       $2, $17, 15\n"
    "b          .L00114A38\n"
    "addiu     $11, $2, 0x77\n"
    ".L00114A20:\n"
    "sltiu      $2, $3, 0x555\n"
    "beqz       $2, .L00114A34\n"
    "srl       $2, $17, 18\n"
    "b          .L00114A38\n"
    "addiu     $11, $2, 0x7C\n"
    ".L00114A34:\n"
    "addiu      $11, $0, 0x7E\n"
    ".L00114A38:\n"
    "lui        $20, %hi(D_0012F788)\n"
    "sll        $3, $11, 3\n"
    "addiu      $2, $20, %lo(D_0012F788)\n"
    "lui        $4, (0xFFFFFFFC >> 16)\n"
    "addu       $5, $3, $2\n"
    "ori        $4, $4, (0xFFFFFFFC & 0xFFFF)\n"
    "b          .L00114A64\n"
    "lw        $16, 0xC($5)\n"
    ".L00114A58:\n"
    "bgez       $7, .L00114F88\n"
    "addu      $3, $16, $8\n"
    "lw         $16, 0xC($16)\n"
    ".L00114A64:\n"
    "beql       $16, $5, .L00114AB0\n"
    "addiu     $11, $11, 0x1\n"
    "lw         $2, 0x4($16)\n"
    "and        $8, $2, $4\n"
    "sltu       $3, $8, $17\n"
    "beqz       $3, .L00114A90\n"
    "subu      $2, $17, $8\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $2, $2, 0\n"
    "b          .L00114A9C\n"
    "dsubu     $7, $0, $2\n"
    ".L00114A90:\n"
    "subu       $2, $8, $17\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $7, $2, 0\n"
    ".L00114A9C:\n"
    "slti       $2, $7, 0x10\n"
    "bnez       $2, .L00114A58\n"
    "nop\n"
    "addiu      $11, $11, -0x1\n"
    "addiu      $11, $11, 0x1\n"
    ".L00114AB0:\n"
    "lui        $14, %hi(D_0012F790)\n"
    "addiu      $2, $14, %lo(D_0012F790)\n"
    "lw         $16, 0x8($2)\n"
    "beq        $16, $2, .L00114CF8\n"
    "addiu     $6, $11, 0x3\n"
    "lw         $2, 0x4($16)\n"
    "lui        $3, (0xFFFFFFFC >> 16)\n"
    "ori        $3, $3, (0xFFFFFFFC & 0xFFFF)\n"
    "and        $8, $2, $3\n"
    "sltu       $4, $8, $17\n"
    "beqz       $4, .L00114AF0\n"
    "subu      $2, $17, $8\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $2, $2, 0\n"
    "b          .L00114AFC\n"
    "dsubu     $7, $0, $2\n"
    ".L00114AF0:\n"
    "subu       $2, $8, $17\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $7, $2, 0\n"
    ".L00114AFC:\n"
    "slti       $2, $7, 0x10\n"
    "bnez       $2, .L00114B54\n"
    "addiu     $5, $14, %lo(D_0012F790)\n"
    "addiu      $2, $0, 0x1\n"
    "dsll32     $6, $7, 0\n"
    "dsra32     $6, $6, 0\n"
    "or         $2, $7, $2\n"
    "ori        $4, $17, 0x1\n"
    "addu       $7, $16, $17\n"
    "addiu      $3, $14, %lo(D_0012F790)\n"
    "sw         $4, 0x4($16)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "sw         $7, 0xC($3)\n"
    "addu       $5, $7, $6\n"
    "sw         $7, 0x8($3)\n"
    "daddu      $4, $19, $0\n"
    "sw         $2, 0x4($7)\n"
    "sw         $6, 0x0($5)\n"
    "sw         $3, 0x8($7)\n"
    "b          .L0011506C\n"
    "sw        $3, 0xC($7)\n"
    ".L00114B54:\n"
    "sw         $5, 0xC($5)\n"
    "bltz       $7, .L00114B78\n"
    "sw        $5, 0x8($5)\n"
    "addu       $3, $16, $8\n"
    "daddu      $4, $19, $0\n"
    "lw         $2, 0x4($3)\n"
    "ori        $2, $2, 0x1\n"
    "b          .L0011506C\n"
    "sw        $2, 0x4($3)\n"
    ".L00114B78:\n"
    "sltiu      $2, $8, 0x200\n"
    "beqz       $2, .L00114BDC\n"
    "srl       $6, $8, 3\n"
    "addiu      $2, $0, -0x1\n"
    "addiu      $5, $5, -0x8\n"
    "slt        $2, $2, $6\n"
    "sll        $4, $6, 3\n"
    "addiu      $3, $6, 0x3\n"
    "addu       $10, $4, $5\n"
    "movn       $3, $6, $2\n"
    "lw         $9, 0x8($10)\n"
    "sra        $3, $3, 2\n"
    "addiu      $2, $0, 0x1\n"
    "lw         $4, 0x4($5)\n"
    "dsllv      $2, $2, $3\n"
    "sw         $10, 0xC($16)\n"
    "sw         $9, 0x8($16)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "or         $4, $4, $2\n"
    "sw         $16, 0x8($10)\n"
    "sw         $16, 0xC($9)\n"
    "addiu      $6, $11, 0x3\n"
    "b          .L00114CF8\n"
    "sw        $4, 0x4($5)\n"
    ".L00114BDC:\n"
    "srl        $3, $8, 9\n"
    "bnez       $3, .L00114BF0\n"
    "sltiu     $2, $3, 0x5\n"
    "b          .L00114C4C\n"
    "srl       $6, $8, 3\n"
    ".L00114BF0:\n"
    "beqz       $2, .L00114C00\n"
    "srl       $2, $8, 6\n"
    "b          .L00114C4C\n"
    "addiu     $6, $2, 0x38\n"
    ".L00114C00:\n"
    "sltiu      $2, $3, 0x15\n"
    "bnez       $2, .L00114C4C\n"
    "addiu     $6, $3, 0x5B\n"
    "sltiu      $2, $3, 0x55\n"
    "beqz       $2, .L00114C20\n"
    "srl       $2, $8, 12\n"
    "b          .L00114C4C\n"
    "addiu     $6, $2, 0x6E\n"
    ".L00114C20:\n"
    "sltiu      $2, $3, 0x155\n"
    "beqz       $2, .L00114C34\n"
    "srl       $2, $8, 15\n"
    "b          .L00114C4C\n"
    "addiu     $6, $2, 0x77\n"
    ".L00114C34:\n"
    "sltiu      $2, $3, 0x555\n"
    "beqz       $2, .L00114C48\n"
    "srl       $2, $8, 18\n"
    "b          .L00114C4C\n"
    "addiu     $6, $2, 0x7C\n"
    ".L00114C48:\n"
    "addiu      $6, $0, 0x7E\n"
    ".L00114C4C:\n"
    "sll        $2, $6, 3\n"
    "addiu      $7, $20, %lo(D_0012F788)\n"
    "addu       $10, $2, $7\n"
    "lw         $9, 0x8($10)\n"
    "bnel       $9, $10, .L00114C9C\n"
    "lw        $3, 0x4($9)\n"
    "addiu      $2, $0, -0x1\n"
    "addiu      $3, $6, 0x3\n"
    "slt        $2, $2, $6\n"
    "addiu      $4, $0, 0x1\n"
    "movn       $3, $6, $2\n"
    "lw         $5, 0x4($7)\n"
    "sra        $3, $3, 2\n"
    "addiu      $6, $11, 0x3\n"
    "dsllv      $4, $4, $3\n"
    "dsll32     $4, $4, 0\n"
    "dsra32     $4, $4, 0\n"
    "or         $5, $5, $4\n"
    "b          .L00114CE8\n"
    "sw        $5, 0x4($7)\n"
    ".L00114C9C:\n"
    "lui        $2, (0xFFFFFFFC >> 16)\n"
    "ori        $2, $2, (0xFFFFFFFC & 0xFFFF)\n"
    "and        $3, $3, $2\n"
    "sltu       $3, $8, $3\n"
    "beqz       $3, .L00114CE4\n"
    "addiu     $6, $11, 0x3\n"
    "lw         $9, 0x8($9)\n"
    ".L00114CB8:\n"
    "beql       $9, $10, .L00114CE8\n"
    "lw        $10, 0xC($9)\n"
    "lw         $3, 0x4($9)\n"
    "lui        $2, (0xFFFFFFFC >> 16)\n"
    "ori        $2, $2, (0xFFFFFFFC & 0xFFFF)\n"
    "and        $3, $3, $2\n"
    "sltu       $3, $8, $3\n"
    "bnel       $3, $0, .L00114CB8\n"
    "lw        $9, 0x8($9)\n"
    "b          .L00114CE8\n"
    "lw        $10, 0xC($9)\n"
    ".L00114CE4:\n"
    "lw         $10, 0xC($9)\n"
    ".L00114CE8:\n"
    "sw         $10, 0xC($16)\n"
    "sw         $9, 0x8($16)\n"
    "sw         $16, 0x8($10)\n"
    "sw         $16, 0xC($9)\n"
    ".L00114CF8:\n"
    "addiu      $2, $0, -0x1\n"
    "addiu      $3, $20, %lo(D_0012F788)\n"
    "slt        $2, $2, $11\n"
    "lwu        $5, 0x4($3)\n"
    "movn       $6, $11, $2\n"
    "addiu      $4, $0, 0x1\n"
    "sra        $2, $6, 2\n"
    "dsllv      $4, $4, $2\n"
    "sltu       $3, $5, $4\n"
    "bnez       $3, .L00114EA4\n"
    "addiu     $3, $20, %lo(D_0012F788)\n"
    "and        $2, $4, $5\n"
    "bnez       $2, .L00114D70\n"
    "lui       $2, %hi(D_0012F788)\n"
    "addiu      $2, $0, -0x4\n"
    "dsll       $4, $4, 1\n"
    "and        $2, $11, $2\n"
    "and        $3, $4, $5\n"
    "bnez       $3, .L00114D6C\n"
    "addiu     $11, $2, 0x4\n"
    "daddu      $3, $5, $0\n"
    "nop\n"
    ".L00114D50:\n"
    "dsll       $4, $4, 1\n"
    "addiu      $11, $11, 0x4\n"
    "and        $2, $4, $3\n"
    "nop\n"
    "nop\n"
    "beqz       $2, .L00114D50\n"
    "nop\n"
    ".L00114D6C:\n"
    "lui        $2, %hi(D_0012F788)\n"
    ".L00114D70:\n"
    "addiu      $12, $2, %lo(D_0012F788)\n"
    "daddu      $13, $12, $0\n"
    "sll        $2, $11, 3\n"
    "nop\n"
    ".L00114D80:\n"
    "daddu      $10, $11, $0\n"
    "addu       $9, $2, $12\n"
    "daddu      $5, $9, $0\n"
    "lw         $16, 0xC($5)\n"
    ".L00114D90:\n"
    "beq        $16, $5, .L00114DF8\n"
    "slti      $2, $11, 0x3F\n"
    "lui        $6, (0xFFFFFFFC >> 16)\n"
    "ori        $6, $6, (0xFFFFFFFC & 0xFFFF)\n"
    "lw         $2, 0x4($16)\n"
    "nop\n"
    ".L00114DA8:\n"
    "and        $8, $2, $6\n"
    "sltu       $3, $8, $17\n"
    "beqz       $3, .L00114DC8\n"
    "subu      $2, $17, $8\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $2, $2, 0\n"
    "b          .L00114DD4\n"
    "dsubu     $7, $0, $2\n"
    ".L00114DC8:\n"
    "subu       $2, $8, $17\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $7, $2, 0\n"
    ".L00114DD4:\n"
    "slti       $2, $7, 0x10\n"
    "beql       $2, $0, .L00114FB4\n"
    "lw        $10, 0xC($16)\n"
    "bgez       $7, .L00115014\n"
    "addu      $3, $16, $8\n"
    "lw         $16, 0xC($16)\n"
    "bnel       $16, $5, .L00114DA8\n"
    "lw        $2, 0x4($16)\n"
    "slti       $2, $11, 0x3F\n"
    ".L00114DF8:\n"
    "beqz       $2, .L00114E08\n"
    "addiu     $5, $5, 0x8\n"
    "addiu      $5, $5, 0x8\n"
    "addiu      $11, $11, 0x1\n"
    ".L00114E08:\n"
    "addiu      $11, $11, 0x1\n"
    "andi       $2, $11, 0x3\n"
    "bnel       $2, $0, .L00114D90\n"
    "lw        $16, 0xC($5)\n"
    "dsll       $5, $4, 1\n"
    "nop\n"
    ".L00114E20:\n"
    "andi       $2, $10, 0x3\n"
    "beqz       $2, .L00114E84\n"
    "addiu     $9, $9, -0x8\n"
    "lw         $2, 0x8($9)\n"
    "beq        $2, $9, .L00114E20\n"
    "addiu     $10, $10, -0x1\n"
    ".L00114E38:\n"
    "lwu        $3, 0x4($13)\n"
    "daddu      $4, $5, $0\n"
    "sltu       $2, $3, $4\n"
    "bnel       $2, $0, .L00114EA4\n"
    "addiu     $3, $20, %lo(D_0012F788)\n"
    "beqz       $4, .L00114EA0\n"
    "and       $2, $4, $3\n"
    "bnez       $2, .L00114D80\n"
    "sll       $2, $11, 3\n"
    "nop\n"
    ".L00114E60:\n"
    "dsll       $4, $4, 1\n"
    "addiu      $11, $11, 0x4\n"
    "and        $2, $4, $3\n"
    "nop\n"
    "nop\n"
    "beqz       $2, .L00114E60\n"
    "nop\n"
    "b          .L00114D80\n"
    "sll       $2, $11, 3\n"
    ".L00114E84:\n"
    "lw         $3, 0x4($12)\n"
    "dsll32     $2, $4, 0\n"
    "dsra32     $2, $2, 0\n"
    "nor        $2, $0, $2\n"
    "and        $3, $3, $2\n"
    "b          .L00114E38\n"
    "sw        $3, 0x4($12)\n"
    ".L00114EA0:\n"
    "addiu      $3, $20, %lo(D_0012F788)\n"
    ".L00114EA4:\n"
    "lui        $2, (0xFFFFFFFC >> 16)\n"
    "lw         $4, 0x8($3)\n"
    "ori        $2, $2, (0xFFFFFFFC & 0xFFFF)\n"
    "lw         $3, 0x4($4)\n"
    "and        $2, $3, $2\n"
    "sltu       $4, $2, $17\n"
    "beql       $4, $0, .L00114ED8\n"
    "subu      $2, $2, $17\n"
    "subu       $2, $17, $2\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $2, $2, 0\n"
    "b          .L00114EE0\n"
    "dsubu     $7, $0, $2\n"
    ".L00114ED8:\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $7, $2, 0\n"
    ".L00114EE0:\n"
    "addiu      $18, $20, %lo(D_0012F788)\n"
    "lui        $16, (0xFFFFFFFC >> 16)\n"
    "lw         $3, 0x8($18)\n"
    "ori        $16, $16, (0xFFFFFFFC & 0xFFFF)\n"
    "lw         $2, 0x4($3)\n"
    "and        $2, $2, $16\n"
    "sltu       $2, $2, $17\n"
    "bnez       $2, .L00114F10\n"
    "daddu     $4, $19, $0\n"
    "slti       $2, $7, 0x10\n"
    "beqz       $2, .L00115040\n"
    "addiu     $6, $20, %lo(D_0012F788)\n"
    ".L00114F10:\n"
    "jal        malloc_extend_top\n"
    "daddu     $5, $17, $0\n"
    "lw         $2, 0x8($18)\n"
    "lw         $3, 0x4($2)\n"
    "and        $3, $3, $16\n"
    "sltu       $2, $3, $17\n"
    "beqz       $2, .L00114F40\n"
    "subu      $2, $17, $3\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $2, $2, 0\n"
    "b          .L00114F4C\n"
    "dsubu     $7, $0, $2\n"
    ".L00114F40:\n"
    "subu       $2, $3, $17\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $7, $2, 0\n"
    ".L00114F4C:\n"
    "addiu      $2, $20, %lo(D_0012F788)\n"
    "lui        $3, (0xFFFFFFFC >> 16)\n"
    "lw         $4, 0x8($2)\n"
    "ori        $3, $3, (0xFFFFFFFC & 0xFFFF)\n"
    "lw         $2, 0x4($4)\n"
    "and        $2, $2, $3\n"
    "sltu       $2, $2, $17\n"
    "bnez       $2, .L00114F78\n"
    "slti      $2, $7, 0x10\n"
    "beqz       $2, .L00115040\n"
    "addiu     $6, $20, %lo(D_0012F788)\n"
    ".L00114F78:\n"
    "jal        func_001154C8\n"
    "daddu     $4, $19, $0\n"
    "b          .L00115078\n"
    "daddu     $2, $0, $0\n"
    ".L00114F88:\n"
    "lw         $10, 0xC($16)\n"
    "lw         $9, 0x8($16)\n"
    "daddu      $4, $19, $0\n"
    "lw         $2, 0x4($3)\n"
    "sw         $10, 0xC($9)\n"
    "ori        $2, $2, 0x1\n"
    "sw         $9, 0x8($10)\n"
    "jal        func_001154C8\n"
    "sw        $2, 0x4($3)\n"
    "b          .L00115078\n"
    "addiu     $2, $16, 0x8\n"
    ".L00114FB4:\n"
    "addiu      $2, $0, 0x1\n"
    "lw         $9, 0x8($16)\n"
    "dsll32     $6, $7, 0\n"
    "dsra32     $6, $6, 0\n"
    "or         $2, $7, $2\n"
    "ori        $4, $17, 0x1\n"
    "sw         $10, 0xC($9)\n"
    "addu       $7, $16, $17\n"
    "addiu      $3, $14, %lo(D_0012F790)\n"
    "sw         $9, 0x8($10)\n"
    "sw         $4, 0x4($16)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "sw         $7, 0xC($3)\n"
    "addu       $5, $7, $6\n"
    "sw         $7, 0x8($3)\n"
    "daddu      $4, $19, $0\n"
    "sw         $2, 0x4($7)\n"
    "sw         $6, 0x0($5)\n"
    "sw         $3, 0x8($7)\n"
    "jal        func_001154C8\n"
    "sw        $3, 0xC($7)\n"
    "b          .L00115078\n"
    "addiu     $2, $16, 0x8\n"
    ".L00115014:\n"
    "lw         $10, 0xC($16)\n"
    "lw         $2, 0x4($3)\n"
    "daddu      $4, $19, $0\n"
    "lw         $9, 0x8($16)\n"
    "ori        $2, $2, 0x1\n"
    "sw         $10, 0xC($9)\n"
    "sw         $2, 0x4($3)\n"
    "jal        func_001154C8\n"
    "sw        $9, 0x8($10)\n"
    "b          .L00115078\n"
    "addiu     $2, $16, 0x8\n"
    ".L00115040:\n"
    "addiu      $2, $0, 0x1\n"
    "lw         $16, 0x8($6)\n"
    "or         $2, $7, $2\n"
    "ori        $3, $17, 0x1\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "addu       $5, $16, $17\n"
    "sw         $3, 0x4($16)\n"
    "sw         $2, 0x4($5)\n"
    "daddu      $4, $19, $0\n"
    "sw         $5, 0x8($6)\n"
    ".L0011506C:\n"
    "jal        func_001154C8\n"
    "nop\n"
    "addiu      $2, $16, 0x8\n"
    ".L00115078:\n"
    "ld         $31, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x60\n"
    ".size _malloc_r, .-_malloc_r\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_malloc_r_types.h"
#include "types.h"


























































extern struct M2c_D_0012F788 D_0012F788;
extern struct M2c_D_0012F790 D_0012F790;
extern s32 func_001154C0();
extern s32 func_001154C8();
extern s32 malloc_extend_top();
s32 *_malloc_r(s32 arg2, s32 arg3, s32 arg0, s32 arg1) {
    struct M2c_temp_10_345 *temp_10_345;
    struct M2c_temp_10_467 *temp_10_467;
    struct M2c_temp_10_504 *temp_10_504;
    struct M2c_temp_5_522 *temp_5_522;
    struct M2c_temp_7_147 *temp_7_147;
    struct M2c_temp_7_486 *temp_7_486;
    struct M2c_temp_9_182 *temp_9_182;
    struct M2c_var_16_28 *var_16_28;
    struct M2c_var_9_235 *var_9_235;
    s32 *temp_5_493;
    struct M2c_temp_5_87 *temp_5_87;
    struct M2c_var_5_320 *var_5_320;
    struct M2c_var_9_319 *var_9_319;
    s32 var_10_318;
    s32 var_11_47;
    s32 var_2_315;
    s32 var_2_324;
    s32 var_2_327;
    s32 var_6_122;
    s32 var_6_284;
    s64 temp_6_144;
    s64 temp_6_482;
    u32 temp_2_407;
    u32 temp_3_198;
    u32 temp_3_437;
    u32 temp_3_49;
    u32 temp_3_4;
    u32 temp_6_174;
    u32 temp_8_126;
    u32 temp_8_330;
    u32 temp_8_99;
    u32 var_11_53;
    u32 var_17_17;
    u32 var_6_202;
    u64 var_4_287;
    u64 var_7_106;
    u64 var_7_133;
    u64 var_7_337;
    u64 var_7_415;
    struct M2c_temp_10_180 *temp_10_180;
    struct M2c_temp_10_34 *temp_10_34;
    struct M2c_temp_3_165 *temp_3_165;
    struct M2c_temp_3_347 *temp_3_347;
    struct M2c_temp_3_37 *temp_3_37;
    struct M2c_temp_3_93 *temp_3_93;
    struct M2c_temp_5_176 *temp_5_176;
    struct M2c_temp_9_27 *temp_9_27;
    struct M2c_temp_9_36 *temp_9_36;
    struct M2c_temp_9_468 *temp_9_468;
    struct M2c_temp_9_480 *temp_9_480;
    struct M2c_temp_9_507 *temp_9_507;
    struct M2c_var_10_234 *var_10_234;
    struct M2c_phi_6_112 *phi_6_112;
    temp_3_4 = arg1 + 0x13;
    if (temp_3_4 < 0x1FU) {
        goto block_2;
    }
    var_17_17 = temp_3_4 & 0xFFFFFFF0;
    goto block_3;
block_2:
    var_17_17 = 0x10;
block_3:
    func_001154C0(arg0);
    if (var_17_17 >= 0x1F8U) {
        goto block_7;
    }
    temp_9_27 = var_17_17 + &D_0012F788;
    var_16_28 = temp_9_27->unkC;
    if (var_16_28 == temp_9_27) {
        goto block_6;
    }
    temp_10_34 = var_16_28->unkC;
    temp_9_36 = var_16_28->unk8;
    temp_3_37 = ((u8 *)var_16_28 + ((var_16_28->unk4 & 0xFFFFFFFC)));
    temp_9_36->unkC = temp_10_34;
    temp_10_34->unk8 = temp_9_36;
    temp_3_37->unk4 = (s32) (temp_3_37->unk4 | 1);
    goto block_113;
block_6:
    var_11_47 = (var_17_17 >> 3) + 2;
    goto block_29;
block_7:
    temp_3_49 = var_17_17 >> 9;
    if (temp_3_49 != 0) {
        goto block_9;
    }
    var_11_53 = var_17_17 >> 3;
    goto block_19;
block_9:
    if (temp_3_49 >= 5U) {
        goto block_11;
    }
    var_11_53 = (var_17_17 >> 6) + 0x38;
    goto block_19;
block_11:
    var_11_53 = temp_3_49 + 0x5B;
    if (temp_3_49 < 0x15U) {
        goto block_19;
    }
    if (temp_3_49 >= 0x55U) {
        goto block_14;
    }
    var_11_53 = (var_17_17 >> 0xC) + 0x6E;
    goto block_19;
block_14:
    if (temp_3_49 >= 0x155U) {
        goto block_16;
    }
    var_11_53 = (var_17_17 >> 0xF) + 0x77;
    goto block_19;
block_16:
    if (temp_3_49 >= 0x555U) {
        goto block_18;
    }
    var_11_53 = (var_17_17 >> 0x12) + 0x7C;
    goto block_19;
block_18:
    var_11_53 = 0x7E;
block_19:
    temp_5_87 = (var_11_53 * 8) + &D_0012F788;
    var_16_28 = temp_5_87->unkC;
    goto loop_22;
block_20:
    temp_3_93 = ((u8 *)var_16_28 + (temp_8_99));
    if ((s32) var_7_106 >= 0) {
        goto block_109;
    }
    var_16_28 = var_16_28->unkC;
loop_22:
    if (var_16_28 == temp_5_87) {
        goto block_28;
    }
    temp_8_99 = var_16_28->unk4 & 0xFFFFFFFC;
    if (temp_8_99 >= var_17_17) {
        goto block_25;
    }
    var_7_106 = 0 - ((u64) ((var_17_17 - temp_8_99) << 0x20) >> 0x20);
    goto block_26;
block_25:
    var_7_106 = (u64) ((temp_8_99 - var_17_17) << 0x20) >> 0x20;
block_26:
    if ((s32) var_7_106 < 0x10) {
        goto block_20;
    }
    var_11_53 -= 1;
block_28:
    var_11_47 = var_11_53 + 1;
block_29:
    var_16_28 = D_0012F790.unk8;
    var_6_122 = var_11_47 + 3;
    if (var_16_28 == &D_0012F790) {
        goto block_61;
    }
    temp_8_126 = var_16_28->unk4 & 0xFFFFFFFC;
    if (temp_8_126 >= var_17_17) {
        goto block_32;
    }
    var_7_133 = 0 - ((u64) ((var_17_17 - temp_8_126) << 0x20) >> 0x20);
    goto block_33;
block_32:
    var_7_133 = (u64) ((temp_8_126 - var_17_17) << 0x20) >> 0x20;
block_33:
    if ((s32) var_7_133 < 0x10) {
        goto block_35;
    }
    temp_6_144 = (s64) (var_7_133 << 0x20) >> 0x20;
    temp_7_147 = ((u8 *)var_16_28 + (var_17_17));
    var_16_28->unk4 = (s32) (var_17_17 | 1);
    D_0012F790.unkC = temp_7_147;
    D_0012F790.unk8 = temp_7_147;
    temp_7_147->unk4 = (s32) ((s64) ((var_7_133 | 1) << 0x20) >> 0x20);
    *(s32 *)((u8 *)temp_7_147 + temp_6_144) = (s32) temp_6_144;
    temp_7_147->unk8 = &D_0012F790;
    temp_7_147->unkC = &D_0012F790;
    goto block_113;
block_35:
    D_0012F790.unkC = &D_0012F790;
    D_0012F790.unk8 = &D_0012F790;
    if ((s32) var_7_133 < 0) {
        goto block_37;
    }
    temp_3_165 = ((u8 *)var_16_28 + (temp_8_126));
    temp_3_165->unk4 = (s32) (temp_3_165->unk4 | 1);
    goto block_113;
block_37:
    temp_6_174 = temp_8_126 >> 3;
    if (temp_8_126 >= 0x200U) {
        goto block_39;
    }
    temp_5_176 = &D_0012F790 - 8;
    temp_10_180 = ((u8 *)temp_5_176 + ((temp_6_174 * 8)));
    temp_9_182 = temp_10_180->unk8;
    var_16_28->unkC = temp_10_180;
    var_16_28->unk8 = temp_9_182;
    temp_10_180->unk8 = var_16_28;
    temp_9_182->unkC = var_16_28;
    var_6_122 = var_11_47 + 3;
    temp_5_176->unk4 = (s32) (temp_5_176->unk4 | ((s64) ((1 << (s64) ((s32) (((s32) temp_6_174 > -1) ? temp_6_174 : (temp_6_174 + 3)) >> 2)) << 0x20) >> 0x20));
    goto block_61;
block_39:
    temp_3_198 = temp_8_126 >> 9;
    if (temp_3_198 != 0) {
        goto block_41;
    }
    var_6_202 = temp_8_126 >> 3;
    goto block_51;
block_41:
    if (temp_3_198 >= 5U) {
        goto block_43;
    }
    var_6_202 = (temp_8_126 >> 6) + 0x38;
    goto block_51;
block_43:
    var_6_202 = temp_3_198 + 0x5B;
    if (temp_3_198 < 0x15U) {
        goto block_51;
    }
    if (temp_3_198 >= 0x55U) {
        goto block_46;
    }
    var_6_202 = (temp_8_126 >> 0xC) + 0x6E;
    goto block_51;
block_46:
    if (temp_3_198 >= 0x155U) {
        goto block_48;
    }
    var_6_202 = (temp_8_126 >> 0xF) + 0x77;
    goto block_51;
block_48:
    if (temp_3_198 >= 0x555U) {
        goto block_50;
    }
    var_6_202 = (temp_8_126 >> 0x12) + 0x7C;
    goto block_51;
block_50:
    var_6_202 = 0x7E;
block_51:
    var_10_234 = (var_6_202 * 8) + &D_0012F788;
    var_9_235 = var_10_234->unk8;
    if (var_9_235 == var_10_234) {
        goto block_53;
    }
    goto block_55;
block_53:
    var_6_122 = var_11_47 + 3;
    D_0012F788.unk4 = (u32) (D_0012F788.unk4 | ((s64) ((1 << (s64) ((s32) (((s32) var_6_202 > -1) ? var_6_202 : (var_6_202 + 3)) >> 2)) << 0x20) >> 0x20));
    goto block_60;
block_55:
    var_6_122 = var_11_47 + 3;
    if (temp_8_126 >= (u32) (var_9_235->unk4 & 0xFFFFFFFC)) {
        goto block_59;
    }
loop_56:
    var_9_235 = var_9_235->unk8;
    if (var_9_235 == var_10_234) {
        goto block_59;
    }
    if (temp_8_126 < (u32) (var_9_235->unk4 & 0xFFFFFFFC)) {
        goto loop_56;
    }
block_59:
    var_10_234 = var_9_235->unkC;
block_60:
    var_16_28->unkC = var_10_234;
    var_16_28->unk8 = var_9_235;
    var_10_234->unk8 = var_16_28;
    var_9_235->unkC = var_16_28;
block_61:
    var_6_284 = (var_11_47 > -1) ? var_11_47 : var_6_122;
    var_4_287 = 1 << (s64) (var_6_284 >> 2);
    if ((u32) D_0012F788.unk4 < var_4_287) {
        goto block_96;
    }
    if (var_4_287 & D_0012F788.unk4) {
        goto block_67;
    }
    var_4_287 *= 2;
    var_11_47 = (var_11_47 & ~3) + 4;
    if (var_4_287 & D_0012F788.unk4) {
        goto block_66;
    }
loop_65:
    var_4_287 *= 2;
    var_11_47 += 4;
    if (!(var_4_287 & D_0012F788.unk4)) {
        goto loop_65;
    }
block_66:
block_67:
    var_2_315 = var_11_47 * 8;
loop_68:
    var_10_318 = var_11_47;
    var_9_319 = var_2_315 + &D_0012F788;
    var_5_320 = var_9_319;
loop_69:
    var_16_28 = var_5_320->unkC;
    var_2_324 = var_11_47 < 0x3F;
    if (var_16_28 == var_5_320) {
        goto block_82;
    }
    var_6_284 = 0xFFFFFFFC;
    var_2_327 = var_16_28->unk4;
loop_71:
    temp_8_330 = var_2_327 & 0xFFFFFFFC;
    if (temp_8_330 >= var_17_17) {
        goto block_73;
    }
    var_7_337 = 0 - ((u64) ((var_17_17 - temp_8_330) << 0x20) >> 0x20);
    goto block_74;
block_73:
    var_7_337 = (u64) ((temp_8_330 - var_17_17) << 0x20) >> 0x20;
block_74:
    if ((s32) var_7_337 < 0x10) {
        goto block_76;
    }
    temp_10_345 = var_16_28->unkC;
    goto block_110;
block_76:
    temp_3_347 = ((u8 *)var_16_28 + (temp_8_330));
    if ((s32) var_7_337 >= 0) {
        goto block_111;
    }
    var_16_28 = var_16_28->unkC;
    if (var_16_28 == var_5_320) {
        goto block_80;
    }
    var_2_327 = var_16_28->unk4;
    goto loop_71;
block_80:
    var_2_324 = var_11_47 < 0x3F;
block_82:
    var_5_320 += 8;
    if (var_2_324 == 0) {
        goto block_84;
    }
    var_5_320 += 8;
    var_11_47 += 1;
block_84:
    var_11_47 += 1;
    if (var_11_47 & 3) {
        goto loop_69;
    }
loop_86:
    var_9_319 -= 8;
    if (!(var_10_318 & 3)) {
        goto block_94;
    }
    var_10_318 -= 1;
    if (var_9_319->unk8 == var_9_319) {
        goto loop_86;
    }
block_88:
    var_4_287 *= 2;
    if ((u32) D_0012F788.unk4 < var_4_287) {
        goto block_95;
    }
    if (var_4_287 == 0) {
        goto block_95;
    }
    var_2_315 = var_11_47 * 8;
    if (var_4_287 & D_0012F788.unk4) {
        goto loop_68;
    }
loop_92:
    var_4_287 *= 2;
    var_11_47 += 4;
    if (!(var_4_287 & D_0012F788.unk4)) {
        goto loop_92;
    }
    var_2_315 = var_11_47 * 8;
    goto loop_68;
block_94:
    D_0012F788.unk4 = (u32) (D_0012F788.unk4 & ~((s64) (var_4_287 << 0x20) >> 0x20));
    goto block_88;
block_95:
block_96:
    temp_2_407 = D_0012F788.unk8->unk4 & 0xFFFFFFFC;
    if (temp_2_407 < var_17_17) {
        goto block_98;
    }
    goto block_100;
block_98:
    var_7_415 = 0 - ((u64) ((var_17_17 - temp_2_407) << 0x20) >> 0x20);
    goto block_101;
block_100:
    var_7_415 = (u64) ((temp_2_407 - var_17_17) << 0x20) >> 0x20;
block_101:
    if ((u32) (D_0012F788.unk8->unk4 & 0xFFFFFFFC) < var_17_17) {
        goto block_103;
    }
    var_6_284 = (s32) &D_0012F788;
    phi_6_112 = (void *) (s32) &D_0012F788;
    if ((s32) var_7_415 >= 0x10) {
        goto block_112;
    }
block_103:
    malloc_extend_top(arg0, var_17_17, (void *) var_6_284, (s32) var_7_415);
    temp_3_437 = D_0012F788.unk8->unk4 & 0xFFFFFFFC;
    if (temp_3_437 >= var_17_17) {
        goto block_105;
    }
    var_7_415 = 0 - ((u64) ((var_17_17 - temp_3_437) << 0x20) >> 0x20);
    goto block_106;
block_105:
    var_7_415 = (u64) ((temp_3_437 - var_17_17) << 0x20) >> 0x20;
block_106:
    if ((u32) (D_0012F788.unk8->unk4 & 0xFFFFFFFC) < var_17_17) {
        goto block_108;
    }
    phi_6_112 = &D_0012F788;
    if ((s32) var_7_415 >= 0x10) {
        goto block_112;
    }
block_108:
    func_001154C8(arg0);
    return NULL;
block_109:
    temp_10_467 = var_16_28->unkC;
    temp_9_468 = var_16_28->unk8;
    temp_9_468->unkC = temp_10_467;
    temp_10_467->unk8 = temp_9_468;
    temp_3_93->unk4 = (s32) (temp_3_93->unk4 | 1);
    func_001154C8(arg0, temp_5_87);
    goto block_114;
block_110:
    temp_9_480 = var_16_28->unk8;
    temp_6_482 = (s64) (var_7_337 << 0x20) >> 0x20;
    temp_9_480->unkC = temp_10_345;
    temp_7_486 = ((u8 *)var_16_28 + (var_17_17));
    temp_10_345->unk8 = temp_9_480;
    var_16_28->unk4 = (s32) (var_17_17 | 1);
    D_0012F790.unkC = temp_7_486;
    temp_5_493 = ((u8 *)temp_7_486 + (temp_6_482));
    D_0012F790.unk8 = temp_7_486;
    temp_7_486->unk4 = (s32) ((s64) ((var_7_337 | 1) << 0x20) >> 0x20);
    *temp_5_493 = (s32) temp_6_482;
    temp_7_486->unk8 = &D_0012F790;
    temp_7_486->unkC = &D_0012F790;
    func_001154C8(arg0, temp_5_493, temp_6_482, temp_7_486, temp_8_330, temp_9_480, temp_10_345, var_11_47);
    goto block_114;
block_111:
    temp_10_504 = var_16_28->unkC;
    temp_9_507 = var_16_28->unk8;
    temp_9_507->unkC = temp_10_504;
    temp_3_347->unk4 = (s32) (temp_3_347->unk4 | 1);
    temp_10_504->unk8 = temp_9_507;
    func_001154C8(arg0, var_5_320, 0xFFFFFFFC, (void *) var_7_337, temp_8_330, temp_9_507, temp_10_504, var_11_47);
    goto block_114;
block_112:
    var_16_28 = phi_6_112->unk8;
    temp_5_522 = ((u8 *)var_16_28 + (var_17_17));
    var_16_28->unk4 = (s32) (var_17_17 | 1);
    temp_5_522->unk4 = (s32) ((s64) ((var_7_415 | 1) << 0x20) >> 0x20);
    phi_6_112->unk8 = temp_5_522;
block_113:
    func_001154C8(arg0);
block_114:
    return ((u8 *)var_16_28 + (8));
}
#endif /* NON_MATCHING */
