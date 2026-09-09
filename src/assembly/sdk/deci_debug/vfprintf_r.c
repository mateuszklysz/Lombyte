/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _vfprintf_r; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _vfprintf_r\n"
    ".type _vfprintf_r, @function\n"
    "_vfprintf_r:\n"
    "addiu      $29, $29, -0x2D0\n"
    "sd         $20, 0x270($29)\n"
    "sd         $16, 0x230($29)\n"
    "daddu      $20, $7, $0\n"
    "sw         $5, 0x1E8($29)\n"
    "daddu      $16, $6, $0\n"
    "sd         $31, 0x2C0($29)\n"
    "sd         $30, 0x2B0($29)\n"
    "sd         $23, 0x2A0($29)\n"
    "sd         $22, 0x290($29)\n"
    "sd         $21, 0x280($29)\n"
    "sd         $19, 0x260($29)\n"
    "sd         $18, 0x250($29)\n"
    "sd         $17, 0x240($29)\n"
    "jal        GetStateResourceWrapper\n"
    "sw        $4, 0x1E4($29)\n"
    "lw         $2, 0x0($2)\n"
    "sw         $2, 0x1F8($29)\n"
    "lw         $2, 0x1E8($29)\n"
    "lhu        $3, 0xC($2)\n"
    "andi       $2, $3, 0x8\n"
    "beqz       $2, .L00116E8C\n"
    "sw        $0, 0x1D8($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "lw         $2, 0x10($4)\n"
    "bnez       $2, .L00116EA8\n"
    "andi      $3, $3, 0x1A\n"
    ".L00116E8C:\n"
    "jal        func_00118630\n"
    "lw        $4, 0x1E8($29)\n"
    "bnez       $2, .L00118308\n"
    "addiu     $2, $0, -0x1\n"
    "lw         $5, 0x1E8($29)\n"
    "lhu        $3, 0xC($5)\n"
    "andi       $3, $3, 0x1A\n"
    ".L00116EA8:\n"
    "addiu      $2, $0, 0xA\n"
    "bne        $3, $2, .L00116ED8\n"
    "addiu     $17, $29, 0x20\n"
    "lw         $6, 0x1E8($29)\n"
    "lh         $2, 0xE($6)\n"
    "bltz       $2, .L00116ED8\n"
    "daddu     $4, $6, $0\n"
    "daddu      $5, $16, $0\n"
    "jal        __sbprintf\n"
    "daddu     $6, $20, $0\n"
    "b          .L0011830C\n"
    "ld        $31, 0x2C0($29)\n"
    ".L00116ED8:\n"
    "addiu      $2, $29, 0x1D4\n"
    "addiu      $3, $29, 0x1D8\n"
    "sw         $0, 0x18($29)\n"
    "sw         $17, 0x10($29)\n"
    "sw         $0, 0x14($29)\n"
    "sw         $16, 0x1EC($29)\n"
    "sw         $0, 0x1F0($29)\n"
    "sw         $2, 0x218($29)\n"
    "sw         $3, 0x21C($29)\n"
    "nop\n"
    ".L00116F00:\n"
    "lw         $19, 0x1EC($29)\n"
    "addiu      $18, $0, 0x25\n"
    ".L00116F08:\n"
    "lui        $5, %hi(D_0012F76C)\n"
    "lui        $6, %hi(D_0012F770)\n"
    "lw         $4, %lo(D_0012F76C)($5)\n"
    "lw         $7, %lo(D_0012F770)($6)\n"
    "lw         $5, 0x218($29)\n"
    "lw         $6, 0x1EC($29)\n"
    "jal        ConvertMultibyteCharacter\n"
    "lw        $8, 0x21C($29)\n"
    "daddu      $16, $2, $0\n"
    "blez       $16, .L00116F4C\n"
    "lw        $3, 0x1EC($29)\n"
    "lw         $2, 0x1D4($29)\n"
    "addu       $3, $3, $16\n"
    "bne        $2, $18, .L00116F08\n"
    "sw        $3, 0x1EC($29)\n"
    "addiu      $3, $3, -0x1\n"
    "sw         $3, 0x1EC($29)\n"
    ".L00116F4C:\n"
    "lw         $4, 0x1EC($29)\n"
    "subu       $18, $4, $19\n"
    "beqz       $18, .L00116FA8\n"
    "nop\n"
    "sw         $18, 0x4($17)\n"
    "sw         $19, 0x0($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $2, 0x18($29)\n"
    "lw         $3, 0x14($29)\n"
    "addu       $2, $2, $18\n"
    "addiu      $3, $3, 0x1\n"
    "sw         $2, 0x18($29)\n"
    "slti       $4, $3, 0x8\n"
    "bnez       $4, .L00116F9C\n"
    "sw        $3, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00116F9C:\n"
    "lw         $5, 0x1F0($29)\n"
    "addu       $5, $5, $18\n"
    "sw         $5, 0x1F0($29)\n"
    ".L00116FA8:\n"
    "blez       $16, .L001182D0\n"
    "lw        $6, 0x1EC($29)\n"
    "daddu      $30, $0, $0\n"
    "sw         $0, 0x20C($29)\n"
    "addiu      $18, $0, -0x1\n"
    "addiu      $6, $6, 0x1\n"
    "sw         $0, 0x1F4($29)\n"
    "sw         $6, 0x1EC($29)\n"
    "sb         $0, 0x1D1($29)\n"
    "b          .L00116FE4\n"
    "lbu       $4, 0x0($6)\n"
    ".L00116FD4:\n"
    "b          .L00116FE4\n"
    "lbu       $4, 0x0($2)\n"
    ".L00116FDC:\n"
    "lw         $3, 0x1EC($29)\n"
    ".L00116FE0:\n"
    "lbu        $4, 0x0($3)\n"
    ".L00116FE4:\n"
    "sll        $2, $4, 24\n"
    "lw         $4, 0x1EC($29)\n"
    "sra        $23, $2, 24\n"
    "addiu      $4, $4, 0x1\n"
    "sw         $4, 0x1EC($29)\n"
    ".L00116FF8:\n"
    "addiu      $3, $23, -0x20\n"
    "sltiu      $2, $3, 0x59\n"
    "beqz       $2, .L001176DC\n"
    "lui       $2, %hi(jtbl_00152580)\n"
    "sll        $3, $3, 2\n"
    "addiu      $2, $2, %lo(jtbl_00152580)\n"
    "addu       $3, $3, $2\n"
    "lw         $4, 0x0($3)\n"
    "jr         $4\n"
    "nop\n"
    "lb         $2, 0x1D1($29)\n"
    "bnez       $2, .L00116FD4\n"
    "lw        $2, 0x1EC($29)\n"
    "lw         $5, 0x1EC($29)\n"
    "b          .L00117074\n"
    "addiu     $2, $0, 0x20\n"
    "lw         $6, 0x1EC($29)\n"
    "ori        $30, $30, 0x1\n"
    "b          .L00116FE4\n"
    "lbu       $4, 0x0($6)\n"
    "addiu      $20, $20, 0x8\n"
    "lw         $2, -0x8($20)\n"
    "bgez       $2, .L00116FDC\n"
    "sw        $2, 0x1F4($29)\n"
    "negu       $2, $2\n"
    "sw         $2, 0x1F4($29)\n"
    "lw         $3, 0x1EC($29)\n"
    "b          .L00116FE0\n"
    "ori       $30, $30, 0x4\n"
    "lw         $5, 0x1EC($29)\n"
    "addiu      $2, $0, 0x2B\n"
    ".L00117074:\n"
    "lbu        $4, 0x0($5)\n"
    "b          .L00116FE4\n"
    "sb        $2, 0x1D1($29)\n"
    "lw         $6, 0x1EC($29)\n"
    "addiu      $2, $0, 0x2A\n"
    "lb         $23, 0x0($6)\n"
    "addiu      $6, $6, 0x1\n"
    "bne        $23, $2, .L001170B8\n"
    "sw        $6, 0x1EC($29)\n"
    "addiu      $20, $20, 0x8\n"
    "addiu      $2, $0, -0x2\n"
    "lw         $16, -0x8($20)\n"
    "addiu      $18, $0, -0x1\n"
    "lbu        $4, 0x0($6)\n"
    "slt        $2, $2, $16\n"
    "b          .L00116FE4\n"
    "movn      $18, $16, $2\n"
    ".L001170B8:\n"
    "addiu      $2, $23, -0x30\n"
    "sltiu      $2, $2, 0xA\n"
    "beqz       $2, .L001170F8\n"
    "daddu     $16, $0, $0\n"
    "addiu      $3, $0, 0xA\n"
    "mult       $2, $16, $3\n"
    ".L001170D0:\n"
    "addiu      $2, $2, -0x30\n"
    "addu       $16, $2, $23\n"
    "lw         $2, 0x1EC($29)\n"
    "lb         $23, 0x0($2)\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $2, 0x1EC($29)\n"
    "addiu      $2, $23, -0x30\n"
    "sltiu      $2, $2, 0xA\n"
    "bnez       $2, .L001170D0\n"
    "mult      $2, $16, $3\n"
    ".L001170F8:\n"
    "addiu      $2, $0, -0x2\n"
    "addiu      $18, $0, -0x1\n"
    "slt        $2, $2, $16\n"
    "b          .L00116FF8\n"
    "movn      $18, $16, $2\n"
    "lw         $3, 0x1EC($29)\n"
    "b          .L00116FE0\n"
    "ori       $30, $30, 0x80\n"
    "daddu      $16, $0, $0\n"
    "addiu      $3, $0, 0xA\n"
    ".L00117120:\n"
    "mult       $2, $16, $3\n"
    "lw         $4, 0x1EC($29)\n"
    "addiu      $2, $2, -0x30\n"
    "addu       $16, $2, $23\n"
    "lb         $23, 0x0($4)\n"
    "addiu      $4, $4, 0x1\n"
    "addiu      $2, $23, -0x30\n"
    "sltiu      $2, $2, 0xA\n"
    "bnez       $2, .L00117120\n"
    "sw        $4, 0x1EC($29)\n"
    "b          .L00116FF8\n"
    "sw        $16, 0x1F4($29)\n"
    "lw         $5, 0x1EC($29)\n"
    "ori        $30, $30, 0x8\n"
    "b          .L00116FE4\n"
    "lbu       $4, 0x0($5)\n"
    "lw         $6, 0x1EC($29)\n"
    "ori        $30, $30, 0x40\n"
    "b          .L00116FE4\n"
    "lbu       $4, 0x0($6)\n"
    "lw         $2, 0x1EC($29)\n"
    "lw         $5, 0x1EC($29)\n"
    "lb         $3, 0x0($2)\n"
    "addiu      $2, $0, 0x6C\n"
    "bne        $3, $2, .L0011719C\n"
    "lbu       $4, 0x0($5)\n"
    "addiu      $5, $5, 0x1\n"
    "ori        $30, $30, 0x20\n"
    "sw         $5, 0x1EC($29)\n"
    "b          .L00116FE4\n"
    "lbu       $4, 0x0($5)\n"
    ".L0011719C:\n"
    "b          .L00116FE4\n"
    "ori       $30, $30, 0x10\n"
    "lw         $6, 0x1EC($29)\n"
    "ori        $30, $30, 0x20\n"
    "b          .L00116FE4\n"
    "lbu       $4, 0x0($6)\n"
    "addiu      $20, $20, 0x8\n"
    "addiu      $19, $29, 0x60\n"
    "lbu        $2, -0x8($20)\n"
    "addiu      $21, $0, 0x1\n"
    "sb         $0, 0x1D1($29)\n"
    "addiu      $18, $17, 0x8\n"
    "b          .L001176F4\n"
    "sb        $2, 0x60($29)\n"
    "ori        $30, $30, 0x10\n"
    "andi       $2, $30, 0x10\n"
    "beqz       $2, .L001171F0\n"
    "andi      $2, $30, 0x40\n"
    "addiu      $20, $20, 0x8\n"
    "b          .L00117204\n"
    "ld        $16, -0x8($20)\n"
    ".L001171F0:\n"
    "beqz       $2, .L00117200\n"
    "addiu     $20, $20, 0x8\n"
    "b          .L00117204\n"
    "lh        $16, -0x8($20)\n"
    ".L00117200:\n"
    "lw         $16, -0x8($20)\n"
    ".L00117204:\n"
    "bgez       $16, .L00117574\n"
    "addiu     $4, $0, 0x1\n"
    "addiu      $2, $0, 0x2D\n"
    "dsubu      $16, $0, $16\n"
    "b          .L00117574\n"
    "sb        $2, 0x1D1($29)\n"
    "addiu      $2, $0, -0x1\n"
    "bne        $18, $2, .L00117230\n"
    "addiu     $2, $0, 0x67\n"
    "b          .L00117248\n"
    "addiu     $18, $0, 0x6\n"
    ".L00117230:\n"
    "beq        $23, $2, .L00117240\n"
    "addiu     $2, $0, 0x47\n"
    "bne        $23, $2, .L0011724C\n"
    "andi      $2, $30, 0x8\n"
    ".L00117240:\n"
    "addiu      $2, $0, 0x1\n"
    "movz       $18, $2, $18\n"
    ".L00117248:\n"
    "andi       $2, $30, 0x8\n"
    ".L0011724C:\n"
    "beqz       $2, .L00117260\n"
    "addiu     $20, $20, 0x8\n"
    "ld         $2, -0x8($20)\n"
    "b          .L00117268\n"
    "sd        $2, 0x200($29)\n"
    ".L00117260:\n"
    "ld         $3, -0x8($20)\n"
    "sd         $3, 0x200($29)\n"
    ".L00117268:\n"
    "jal        func_00116168\n"
    "ld        $4, 0x200($29)\n"
    "beqz       $2, .L001172A0\n"
    "ld        $4, 0x200($29)\n"
    "jal        func_00120130\n"
    "daddu     $5, $0, $0\n"
    "bgez       $2, .L00117294\n"
    "lui       $2, %hi(D_00152500)\n"
    "addiu      $2, $0, 0x2D\n"
    "sb         $2, 0x1D1($29)\n"
    "lui        $2, %hi(D_00152500)\n"
    ".L00117294:\n"
    "addiu      $21, $0, 0x3\n"
    "b          .L001176F0\n"
    "addiu     $19, $2, %lo(D_00152500)\n"
    ".L001172A0:\n"
    "jal        ClassifyDoubleNaN\n"
    "ld        $4, 0x200($29)\n"
    "beqz       $2, .L001172BC\n"
    "lui       $2, %hi(D_00152508)\n"
    "addiu      $21, $0, 0x3\n"
    "b          .L001176F0\n"
    "addiu     $19, $2, %lo(D_00152508)\n"
    ".L001172BC:\n"
    "ori        $30, $30, 0x100\n"
    "lw         $4, 0x1E4($29)\n"
    "ld         $5, 0x200($29)\n"
    "daddu      $6, $18, $0\n"
    "daddu      $7, $30, $0\n"
    "addiu      $8, $29, 0x1D0\n"
    "addiu      $9, $29, 0x1DC\n"
    "daddu      $10, $23, $0\n"
    "jal        func_00118338\n"
    "addiu     $11, $29, 0x1E0\n"
    "daddu      $19, $2, $0\n"
    "addiu      $2, $0, 0x67\n"
    "beq        $23, $2, .L001172FC\n"
    "addiu     $2, $0, 0x47\n"
    "bne        $23, $2, .L00117328\n"
    "lw        $5, 0x1DC($29)\n"
    ".L001172FC:\n"
    "lw         $5, 0x1DC($29)\n"
    "slti       $2, $5, -0x3\n"
    "bnez       $2, .L00117318\n"
    "xori      $4, $23, 0x67\n"
    "slt        $2, $18, $5\n"
    "beql       $2, $0, .L00117328\n"
    "addiu     $23, $0, 0x67\n"
    ".L00117318:\n"
    "addiu      $2, $0, 0x65\n"
    "addiu      $3, $0, 0x45\n"
    "daddu      $23, $2, $0\n"
    "movn       $23, $3, $4\n"
    ".L00117328:\n"
    "slti       $2, $23, 0x66\n"
    "beqz       $2, .L00117374\n"
    "addiu     $2, $5, -0x1\n"
    "daddu      $4, $29, $0\n"
    "daddu      $5, $2, $0\n"
    "sw         $2, 0x1DC($29)\n"
    "jal        func_001184E8\n"
    "daddu     $6, $23, $0\n"
    "sw         $2, 0x208($29)\n"
    "lw         $2, 0x1E0($29)\n"
    "lw         $4, 0x208($29)\n"
    "slti       $3, $2, 0x2\n"
    "beqz       $3, .L0011736C\n"
    "addu      $21, $4, $2\n"
    "andi       $2, $30, 0x1\n"
    "beqz       $2, .L001173D0\n"
    "lb        $2, 0x1D0($29)\n"
    ".L0011736C:\n"
    "b          .L001173CC\n"
    "addiu     $21, $21, 0x1\n"
    ".L00117374:\n"
    "addiu      $2, $0, 0x66\n"
    "bne        $23, $2, .L001173A8\n"
    "lw        $3, 0x1E0($29)\n"
    "blez       $5, .L001173CC\n"
    "addiu     $21, $18, 0x2\n"
    "bnez       $18, .L0011739C\n"
    "daddu     $21, $5, $0\n"
    "andi       $2, $30, 0x1\n"
    "beqz       $2, .L001173D0\n"
    "lb        $2, 0x1D0($29)\n"
    ".L0011739C:\n"
    "addiu      $2, $5, 0x1\n"
    "b          .L001173CC\n"
    "addu      $21, $2, $18\n"
    ".L001173A8:\n"
    "slt        $2, $5, $3\n"
    "bnez       $2, .L001173BC\n"
    "andi      $2, $30, 0x1\n"
    "b          .L001173CC\n"
    "addu      $21, $5, $2\n"
    ".L001173BC:\n"
    "bgtz       $5, .L001173CC\n"
    "addiu     $21, $3, 0x1\n"
    "addiu      $2, $3, 0x2\n"
    "subu       $21, $2, $5\n"
    ".L001173CC:\n"
    "lb         $2, 0x1D0($29)\n"
    ".L001173D0:\n"
    "beqz       $2, .L001176F0\n"
    "addiu     $2, $0, 0x2D\n"
    "addiu      $18, $17, 0x8\n"
    "b          .L001176F4\n"
    "sb        $2, 0x1D1($29)\n"
    "andi       $2, $30, 0x10\n"
    "beqz       $2, .L00117400\n"
    "lw        $5, 0x1F0($29)\n"
    "addiu      $20, $20, 0x8\n"
    "lw         $2, -0x8($20)\n"
    "b          .L00116F00\n"
    "sd        $5, 0x0($2)\n"
    ".L00117400:\n"
    "andi       $2, $30, 0x40\n"
    "beqz       $2, .L0011741C\n"
    "lw        $6, 0x1F0($29)\n"
    "addiu      $20, $20, 0x8\n"
    "lw         $2, -0x8($20)\n"
    "b          .L00116F00\n"
    "sh        $6, 0x0($2)\n"
    ".L0011741C:\n"
    "addiu      $20, $20, 0x8\n"
    "lw         $3, 0x1F0($29)\n"
    "lw         $2, -0x8($20)\n"
    "b          .L00116F00\n"
    "sw        $3, 0x0($2)\n"
    "ori        $30, $30, 0x10\n"
    "andi       $2, $30, 0x10\n"
    "beqz       $2, .L0011744C\n"
    "andi      $2, $30, 0x40\n"
    "addiu      $20, $20, 0x8\n"
    "b          .L00117460\n"
    "ld        $16, -0x8($20)\n"
    ".L0011744C:\n"
    "beqz       $2, .L0011745C\n"
    "addiu     $20, $20, 0x8\n"
    "b          .L00117460\n"
    "lhu       $16, -0x8($20)\n"
    ".L0011745C:\n"
    "lwu        $16, -0x8($20)\n"
    ".L00117460:\n"
    "b          .L00117570\n"
    "daddu     $4, $0, $0\n"
    "lui        $2, %hi(D_00152510)\n"
    "addiu      $20, $20, 0x8\n"
    "addiu      $2, $2, %lo(D_00152510)\n"
    "addiu      $4, $0, 0x2\n"
    "sw         $2, 0x214($29)\n"
    "ori        $30, $30, 0x2\n"
    "addiu      $23, $0, 0x78\n"
    "b          .L00117570\n"
    "lw        $16, -0x8($20)\n"
    "addiu      $20, $20, 0x8\n"
    "lw         $19, -0x8($20)\n"
    "bnez       $19, .L001174A0\n"
    "lui       $2, %hi(D_00152528)\n"
    "addiu      $19, $2, %lo(D_00152528)\n"
    ".L001174A0:\n"
    "bltz       $18, .L001174D0\n"
    "daddu     $4, $19, $0\n"
    "daddu      $5, $0, $0\n"
    "jal        func_001150D4\n"
    "daddu     $6, $18, $0\n"
    "beqz       $2, .L001174C8\n"
    "subu      $21, $2, $19\n"
    "slt        $2, $18, $21\n"
    "b          .L001176EC\n"
    "movn      $21, $18, $2\n"
    ".L001174C8:\n"
    "b          .L001176EC\n"
    "daddu     $21, $18, $0\n"
    ".L001174D0:\n"
    "jal        func_001166CC\n"
    "daddu     $4, $19, $0\n"
    "b          .L001176EC\n"
    "daddu     $21, $2, $0\n"
    "ori        $30, $30, 0x10\n"
    "andi       $2, $30, 0x10\n"
    "beqz       $2, .L001174FC\n"
    "andi      $2, $30, 0x40\n"
    "addiu      $20, $20, 0x8\n"
    "b          .L00117510\n"
    "ld        $16, -0x8($20)\n"
    ".L001174FC:\n"
    "beqz       $2, .L0011750C\n"
    "addiu     $20, $20, 0x8\n"
    "b          .L00117510\n"
    "lhu       $16, -0x8($20)\n"
    ".L0011750C:\n"
    "lwu        $16, -0x8($20)\n"
    ".L00117510:\n"
    "b          .L00117570\n"
    "addiu     $4, $0, 0x1\n"
    "lui        $2, %hi(D_00152530)\n"
    "b          .L0011752C\n"
    "addiu     $2, $2, %lo(D_00152530)\n"
    "lui        $2, %hi(D_00152510)\n"
    "addiu      $2, $2, %lo(D_00152510)\n"
    ".L0011752C:\n"
    "sw         $2, 0x214($29)\n"
    "andi       $2, $30, 0x10\n"
    "beqz       $2, .L00117548\n"
    "andi      $2, $30, 0x40\n"
    "addiu      $20, $20, 0x8\n"
    "b          .L0011755C\n"
    "ld        $16, -0x8($20)\n"
    ".L00117548:\n"
    "beqz       $2, .L00117558\n"
    "addiu     $20, $20, 0x8\n"
    "b          .L0011755C\n"
    "lhu       $16, -0x8($20)\n"
    ".L00117558:\n"
    "lwu        $16, -0x8($20)\n"
    ".L0011755C:\n"
    "andi       $3, $30, 0x1\n"
    "beqz       $3, .L00117570\n"
    "addiu     $4, $0, 0x2\n"
    "ori        $2, $30, 0x2\n"
    "movn       $30, $2, $16\n"
    ".L00117570:\n"
    "sb         $0, 0x1D1($29)\n"
    ".L00117574:\n"
    "bltz       $18, .L00117584\n"
    "sw        $18, 0x20C($29)\n"
    "addiu      $2, $0, -0x81\n"
    "and        $30, $30, $2\n"
    ".L00117584:\n"
    "bnez       $16, .L00117598\n"
    "addiu     $19, $29, 0x1BC\n"
    "lw         $5, 0x20C($29)\n"
    "beqz       $5, .L001176C8\n"
    "addiu     $18, $17, 0x8\n"
    ".L00117598:\n"
    "addiu      $2, $0, 0x1\n"
    "beq        $4, $2, .L0011761C\n"
    "sltiu     $2, $16, 0xA\n"
    "beqz       $4, .L001175D0\n"
    "addiu     $2, $0, 0x2\n"
    "beq        $4, $2, .L0011768C\n"
    "lui       $2, %hi(D_00152548)\n"
    "addiu      $18, $17, 0x8\n"
    "addiu      $19, $2, %lo(D_00152548)\n"
    "andi       $22, $30, 0x84\n"
    "jal        func_001166CC\n"
    "daddu     $4, $19, $0\n"
    "b          .L001176F8\n"
    "daddu     $21, $2, $0\n"
    ".L001175D0:\n"
    "addiu      $18, $17, 0x8\n"
    "addiu      $21, $29, 0x60\n"
    "andi       $3, $30, 0x1\n"
    "andi       $22, $30, 0x84\n"
    ".L001175E0:\n"
    "andi       $2, $16, 0x7\n"
    "addiu      $19, $19, -0x1\n"
    "daddiu     $2, $2, 0x30\n"
    "dsrl       $16, $16, 3\n"
    "andi       $2, $2, 0xFF\n"
    "sb         $2, 0x0($19)\n"
    "bnez       $16, .L001175E0\n"
    "nop\n"
    "beqz       $3, .L001176D0\n"
    "addiu     $3, $0, 0x30\n"
    "beq        $2, $3, .L001176D4\n"
    "addiu     $2, $19, -0x15C\n"
    "addiu      $19, $19, -0x1\n"
    "b          .L001176D0\n"
    "sb        $3, 0x0($19)\n"
    ".L0011761C:\n"
    "bnez       $2, .L00117670\n"
    "addiu     $18, $17, 0x8\n"
    "addiu      $21, $29, 0x60\n"
    "andi       $22, $30, 0x84\n"
    "nop\n"
    ".L00117630:\n"
    "daddu      $4, $16, $0\n"
    "jal        func_0011F1F8\n"
    "addiu     $5, $0, 0xA\n"
    "addiu      $19, $19, -0x1\n"
    "daddiu     $2, $2, 0x30\n"
    "daddu      $4, $16, $0\n"
    "andi       $2, $2, 0xFF\n"
    "addiu      $5, $0, 0xA\n"
    "jal        func_0011EC28\n"
    "sb        $2, 0x0($19)\n"
    "daddu      $16, $2, $0\n"
    "sltiu      $2, $16, 0xA\n"
    "beqz       $2, .L00117630\n"
    "daddiu    $2, $16, 0x30\n"
    "b          .L00117680\n"
    "addiu     $19, $19, -0x1\n"
    ".L00117670:\n"
    "addiu      $21, $29, 0x60\n"
    "andi       $22, $30, 0x84\n"
    "daddiu     $2, $16, 0x30\n"
    "addiu      $19, $19, -0x1\n"
    ".L00117680:\n"
    "andi       $2, $2, 0xFF\n"
    "b          .L001176D0\n"
    "sb        $2, 0x0($19)\n"
    ".L0011768C:\n"
    "addiu      $18, $17, 0x8\n"
    "addiu      $21, $29, 0x60\n"
    "andi       $22, $30, 0x84\n"
    ".L00117698:\n"
    "andi       $2, $16, 0xF\n"
    "lw         $6, 0x214($29)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "addiu      $19, $19, -0x1\n"
    "addu       $2, $6, $2\n"
    "dsrl       $16, $16, 4\n"
    "lbu        $3, 0x0($2)\n"
    "bnez       $16, .L00117698\n"
    "sb        $3, 0x0($19)\n"
    "b          .L001176D4\n"
    "addiu     $2, $19, -0x15C\n"
    ".L001176C8:\n"
    "addiu      $21, $29, 0x60\n"
    "andi       $22, $30, 0x84\n"
    ".L001176D0:\n"
    "addiu      $2, $19, -0x15C\n"
    ".L001176D4:\n"
    "b          .L001176F8\n"
    "subu      $21, $21, $2\n"
    ".L001176DC:\n"
    "beqz       $23, .L001182D0\n"
    "addiu     $19, $29, 0x60\n"
    "sb         $23, 0x60($29)\n"
    "addiu      $21, $0, 0x1\n"
    ".L001176EC:\n"
    "sb         $0, 0x1D1($29)\n"
    ".L001176F0:\n"
    "addiu      $18, $17, 0x8\n"
    ".L001176F4:\n"
    "andi       $22, $30, 0x84\n"
    ".L001176F8:\n"
    "sw         $21, 0x210($29)\n"
    "lw         $4, 0x20C($29)\n"
    "lw         $5, 0x20C($29)\n"
    "slt        $2, $21, $4\n"
    "lb         $3, 0x1D1($29)\n"
    "movz       $5, $21, $2\n"
    "lbu        $4, 0x1D1($29)\n"
    "beqz       $3, .L00117728\n"
    "sw        $5, 0x210($29)\n"
    "addiu      $5, $5, 0x1\n"
    "b          .L00117738\n"
    "sw        $5, 0x210($29)\n"
    ".L00117728:\n"
    "lw         $6, 0x210($29)\n"
    "andi       $2, $30, 0x2\n"
    "addu       $6, $2, $6\n"
    "sw         $6, 0x210($29)\n"
    ".L00117738:\n"
    "bnez       $22, .L00117818\n"
    "lw        $2, 0x1F4($29)\n"
    "lw         $3, 0x210($29)\n"
    "subu       $16, $2, $3\n"
    "blez       $16, .L00117818\n"
    "slti      $2, $16, 0x11\n"
    "bnez       $2, .L001177C0\n"
    "lui       $6, %hi(D_001524E0)\n"
    "b          .L00117764\n"
    "addiu     $2, $0, 0x10\n"
    ".L00117760:\n"
    "addiu      $2, $0, 0x10\n"
    ".L00117764:\n"
    "addiu      $4, $6, %lo(D_001524E0)\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x10\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L001177B0\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "addiu      $5, $29, 0x10\n"
    "jal        func_00116CA8\n"
    "sq        $6, 0x220($29)\n"
    "bnez       $2, .L001182F0\n"
    "lq        $6, 0x220($29)\n"
    "addiu      $17, $29, 0x20\n"
    ".L001177B0:\n"
    "addiu      $16, $16, -0x10\n"
    "slti       $2, $16, 0x11\n"
    "beqz       $2, .L00117760\n"
    "addiu     $18, $17, 0x8\n"
    ".L001177C0:\n"
    "addiu      $2, $6, %lo(D_001524E0)\n"
    "sw         $16, 0x4($17)\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $16\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00117810\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    "addiu      $18, $29, 0x28\n"
    "b          .L00117818\n"
    "lbu       $4, 0x1D1($29)\n"
    ".L00117810:\n"
    "lbu        $4, 0x1D1($29)\n"
    "addiu      $18, $17, 0x8\n"
    ".L00117818:\n"
    "beqz       $4, .L00117858\n"
    "addiu     $2, $0, 0x1\n"
    "addiu      $4, $29, 0x1D1\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x1\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L001178BC\n"
    "sw        $2, 0x14($29)\n"
    "b          .L001178A4\n"
    "lw        $4, 0x1E8($29)\n"
    ".L00117858:\n"
    "andi       $2, $30, 0x2\n"
    "beqz       $2, .L001178C0\n"
    "addiu     $3, $0, 0x30\n"
    "sb         $23, 0x1C1($29)\n"
    "sb         $3, 0x1C0($29)\n"
    "addiu      $2, $0, 0x2\n"
    "addiu      $3, $29, 0x1C0\n"
    "sw         $2, 0x4($17)\n"
    "sw         $3, 0x0($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $4, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $4, $4, 0x2\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $4, 0x18($29)\n"
    "slti       $3, $2, 0x8\n"
    "bnez       $3, .L001178BC\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    ".L001178A4:\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    "b          .L001178C0\n"
    "addiu     $18, $29, 0x28\n"
    ".L001178BC:\n"
    "addiu      $18, $17, 0x8\n"
    ".L001178C0:\n"
    "addiu      $2, $0, 0x80\n"
    "bne        $22, $2, .L0011799C\n"
    "lw        $6, 0x20C($29)\n"
    "lw         $4, 0x1F4($29)\n"
    "lw         $5, 0x210($29)\n"
    "subu       $16, $4, $5\n"
    "blez       $16, .L0011799C\n"
    "slti      $2, $16, 0x11\n"
    "bnez       $2, .L00117948\n"
    "lui       $22, %hi(D_001524F0)\n"
    "b          .L001178F4\n"
    "addiu     $2, $0, 0x10\n"
    ".L001178F0:\n"
    "addiu      $2, $0, 0x10\n"
    ".L001178F4:\n"
    "addiu      $4, $22, %lo(D_001524F0)\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x10\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L00117938\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117938:\n"
    "addiu      $16, $16, -0x10\n"
    "slti       $2, $16, 0x11\n"
    "beqz       $2, .L001178F0\n"
    "addiu     $18, $17, 0x8\n"
    ".L00117948:\n"
    "addiu      $2, $22, %lo(D_001524F0)\n"
    "sw         $16, 0x4($17)\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $16\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00117994\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    "b          .L00117998\n"
    "addiu     $18, $29, 0x28\n"
    ".L00117994:\n"
    "addiu      $18, $17, 0x8\n"
    ".L00117998:\n"
    "lw         $6, 0x20C($29)\n"
    ".L0011799C:\n"
    "subu       $16, $6, $21\n"
    "blez       $16, .L00117A60\n"
    "slti      $2, $16, 0x11\n"
    "bnez       $2, .L00117A10\n"
    "lui       $22, %hi(D_001524F0)\n"
    "b          .L001179BC\n"
    "addiu     $2, $0, 0x10\n"
    ".L001179B8:\n"
    "addiu      $2, $0, 0x10\n"
    ".L001179BC:\n"
    "addiu      $4, $22, %lo(D_001524F0)\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x10\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L00117A00\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117A00:\n"
    "addiu      $16, $16, -0x10\n"
    "slti       $2, $16, 0x11\n"
    "beqz       $2, .L001179B8\n"
    "addiu     $18, $17, 0x8\n"
    ".L00117A10:\n"
    "addiu      $2, $22, %lo(D_001524F0)\n"
    "sw         $16, 0x4($17)\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $16\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00117A5C\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    "b          .L00117A60\n"
    "addiu     $18, $29, 0x28\n"
    ".L00117A5C:\n"
    "addiu      $18, $17, 0x8\n"
    ".L00117A60:\n"
    "andi       $2, $30, 0x100\n"
    "bnel       $2, $0, .L00117A88\n"
    "slti      $2, $23, 0x66\n"
    "sw         $21, 0x4($17)\n"
    "sw         $19, 0x0($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $2, 0x18($29)\n"
    "lw         $3, 0x14($29)\n"
    "b          .L00118190\n"
    "addu      $2, $2, $21\n"
    ".L00117A88:\n"
    "bnez       $2, .L00117FC4\n"
    "lw        $2, 0x1E0($29)\n"
    "ld         $4, 0x200($29)\n"
    "jal        func_00120130\n"
    "daddu     $5, $0, $0\n"
    "bnez       $2, .L00117C00\n"
    "lw        $3, 0x1DC($29)\n"
    "lui        $2, %hi(D_00152568)\n"
    "addiu      $16, $0, 0x1\n"
    "addiu      $2, $2, %lo(D_00152568)\n"
    "sw         $16, 0x4($17)\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addiu      $3, $3, 0x1\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00117AF0\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117AF0:\n"
    "lw         $2, 0x1DC($29)\n"
    "lw         $3, 0x1E0($29)\n"
    "slt        $2, $2, $3\n"
    "bnel       $2, $0, .L00117B14\n"
    "sw        $16, 0x4($17)\n"
    "andi       $2, $30, 0x1\n"
    "beqz       $2, .L001181C0\n"
    "andi      $2, $30, 0x4\n"
    "sw         $16, 0x4($17)\n"
    ".L00117B14:\n"
    "lw         $2, 0x1F8($29)\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x18($29)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x14($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addiu      $3, $3, 0x1\n"
    "sw         $2, 0x18($29)\n"
    "slti       $4, $3, 0x8\n"
    "bnez       $4, .L00117B54\n"
    "sw        $3, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117B54:\n"
    "lw         $2, 0x1E0($29)\n"
    "addiu      $16, $2, -0x1\n"
    "blez       $16, .L001181BC\n"
    "slti      $2, $16, 0x11\n"
    "bnez       $2, .L00117BD0\n"
    "lui       $22, %hi(D_001524F0)\n"
    "nop\n"
    ".L00117B70:\n"
    "addiu      $2, $0, 0x10\n"
    "addiu      $4, $22, %lo(D_001524F0)\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x10\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L00117BB8\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117BB8:\n"
    "addiu      $16, $16, -0x10\n"
    "slti       $2, $16, 0x11\n"
    "beqz       $2, .L00117B70\n"
    "addiu     $2, $22, %lo(D_001524F0)\n"
    "b          .L00117BD8\n"
    "sw        $16, 0x4($17)\n"
    ".L00117BD0:\n"
    "addiu      $2, $22, %lo(D_001524F0)\n"
    "sw         $16, 0x4($17)\n"
    ".L00117BD8:\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $16\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "b          .L001181A0\n"
    "sw        $2, 0x14($29)\n"
    ".L00117C00:\n"
    "bgtz       $3, .L00117D90\n"
    "lw        $4, 0x1E0($29)\n"
    "lui        $2, %hi(D_00152568)\n"
    "addiu      $16, $0, 0x1\n"
    "addiu      $2, $2, %lo(D_00152568)\n"
    "sw         $16, 0x4($17)\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addiu      $3, $3, 0x1\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00117C54\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117C54:\n"
    "sw         $16, 0x4($17)\n"
    "lw         $3, 0x1F8($29)\n"
    "sw         $3, 0x0($17)\n"
    "lw         $3, 0x14($29)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $2, 0x18($29)\n"
    "addiu      $3, $3, 0x1\n"
    "addiu      $2, $2, 0x1\n"
    "slti       $4, $3, 0x8\n"
    "sw         $2, 0x18($29)\n"
    "bnez       $4, .L00117C98\n"
    "sw        $3, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117C98:\n"
    "lw         $2, 0x1DC($29)\n"
    "negu       $16, $2\n"
    "blez       $16, .L00117D54\n"
    "slti      $2, $16, 0x11\n"
    "bnez       $2, .L00117D10\n"
    "lui       $22, %hi(D_001524F0)\n"
    ".L00117CB0:\n"
    "addiu      $2, $0, 0x10\n"
    "addiu      $4, $22, %lo(D_001524F0)\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x10\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L00117CF8\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117CF8:\n"
    "addiu      $16, $16, -0x10\n"
    "slti       $2, $16, 0x11\n"
    "beqz       $2, .L00117CB0\n"
    "addiu     $2, $22, %lo(D_001524F0)\n"
    "b          .L00117D18\n"
    "sw        $16, 0x4($17)\n"
    ".L00117D10:\n"
    "addiu      $2, $22, %lo(D_001524F0)\n"
    "sw         $16, 0x4($17)\n"
    ".L00117D18:\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $16\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00117D54\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117D54:\n"
    "lw         $2, 0x1E0($29)\n"
    "sw         $19, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "lw         $4, 0x1E0($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $4\n"
    "slti       $5, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $5, .L001181BC\n"
    "sw        $2, 0x14($29)\n"
    "b          .L001181AC\n"
    "lw        $4, 0x1E8($29)\n"
    ".L00117D90:\n"
    "slt        $2, $3, $4\n"
    "bnel       $2, $0, .L00117EE4\n"
    "sw        $3, 0x4($17)\n"
    "sw         $4, 0x4($17)\n"
    "sw         $19, 0x0($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $2, 0x18($29)\n"
    "lw         $3, 0x14($29)\n"
    "lw         $5, 0x1E0($29)\n"
    "addiu      $3, $3, 0x1\n"
    "addu       $2, $2, $5\n"
    "slti       $4, $3, 0x8\n"
    "sw         $2, 0x18($29)\n"
    "bnez       $4, .L00117DE4\n"
    "sw        $3, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    "lw         $5, 0x1E0($29)\n"
    ".L00117DE4:\n"
    "lw         $2, 0x1DC($29)\n"
    "subu       $16, $2, $5\n"
    "blez       $16, .L00117EA4\n"
    "slti      $2, $16, 0x11\n"
    "bnez       $2, .L00117E60\n"
    "lui       $22, %hi(D_001524F0)\n"
    "nop\n"
    ".L00117E00:\n"
    "addiu      $2, $0, 0x10\n"
    "addiu      $4, $22, %lo(D_001524F0)\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x10\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L00117E48\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117E48:\n"
    "addiu      $16, $16, -0x10\n"
    "slti       $2, $16, 0x11\n"
    "beqz       $2, .L00117E00\n"
    "addiu     $2, $22, %lo(D_001524F0)\n"
    "b          .L00117E68\n"
    "sw        $16, 0x4($17)\n"
    ".L00117E60:\n"
    "addiu      $2, $22, %lo(D_001524F0)\n"
    "sw         $16, 0x4($17)\n"
    ".L00117E68:\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $16\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00117EA4\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117EA4:\n"
    "andi       $2, $30, 0x1\n"
    "beqz       $2, .L001181BC\n"
    "lui       $2, %hi(D_00152570)\n"
    "addiu      $3, $0, 0x1\n"
    "addiu      $2, $2, %lo(D_00152570)\n"
    "sw         $3, 0x4($17)\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addiu      $3, $3, 0x1\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "b          .L001181A0\n"
    "sw        $2, 0x14($29)\n"
    ".L00117EE4:\n"
    "sw         $19, 0x0($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $2, 0x18($29)\n"
    "lw         $3, 0x14($29)\n"
    "lw         $5, 0x1DC($29)\n"
    "addiu      $3, $3, 0x1\n"
    "addu       $2, $2, $5\n"
    "slti       $4, $3, 0x8\n"
    "sw         $2, 0x18($29)\n"
    "bnez       $4, .L00117F28\n"
    "sw        $3, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    "lw         $5, 0x1DC($29)\n"
    ".L00117F28:\n"
    "lui        $2, %hi(D_00152570)\n"
    "addiu      $3, $0, 0x1\n"
    "addiu      $2, $2, %lo(D_00152570)\n"
    "sw         $3, 0x4($17)\n"
    "sw         $2, 0x0($17)\n"
    "addu       $19, $19, $5\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addiu      $3, $3, 0x1\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00117F78\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00117F78:\n"
    "lw         $3, 0x1DC($29)\n"
    "lw         $2, 0x1E0($29)\n"
    "sw         $19, 0x0($17)\n"
    "subu       $2, $2, $3\n"
    "sw         $2, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x1E0($29)\n"
    "lw         $5, 0x1DC($29)\n"
    "lw         $4, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "subu       $3, $3, $5\n"
    "addu       $4, $4, $3\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $4, 0x18($29)\n"
    "slti       $3, $2, 0x8\n"
    "bnez       $3, .L001181BC\n"
    "sw        $2, 0x14($29)\n"
    "b          .L001181AC\n"
    "lw        $4, 0x1E8($29)\n"
    ".L00117FC4:\n"
    "slti       $2, $2, 0x2\n"
    "beqz       $2, .L00117FD8\n"
    "andi      $2, $30, 0x1\n"
    "beqz       $2, .L00118130\n"
    "addiu     $2, $0, 0x1\n"
    ".L00117FD8:\n"
    "lbu        $4, 0x0($19)\n"
    "addiu      $2, $0, 0x2E\n"
    "sb         $2, 0x1C1($29)\n"
    "addiu      $3, $0, 0x2\n"
    "sb         $4, 0x1C0($29)\n"
    "addiu      $2, $29, 0x1C0\n"
    "sw         $3, 0x4($17)\n"
    "addiu      $19, $19, 0x1\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "daddu      $17, $18, $0\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addiu      $3, $3, 0x2\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00118034\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00118034:\n"
    "ld         $4, 0x200($29)\n"
    "jal        func_00120130\n"
    "daddu     $5, $0, $0\n"
    "beqz       $2, .L00118088\n"
    "lw        $2, 0x1E0($29)\n"
    "sw         $19, 0x0($17)\n"
    "addiu      $2, $2, -0x1\n"
    "sw         $2, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $2, 0x18($29)\n"
    "lw         $3, 0x14($29)\n"
    "lw         $4, 0x1E0($29)\n"
    "addiu      $2, $2, -0x1\n"
    "addiu      $3, $3, 0x1\n"
    "addu       $2, $2, $4\n"
    "slti       $5, $3, 0x8\n"
    "sw         $2, 0x18($29)\n"
    "bnez       $5, .L00118174\n"
    "sw        $3, 0x14($29)\n"
    "b          .L00118164\n"
    "lw        $4, 0x1E8($29)\n"
    ".L00118088:\n"
    "addiu      $16, $2, -0x1\n"
    "blez       $16, .L00118174\n"
    "slti      $2, $16, 0x11\n"
    "bnez       $2, .L00118100\n"
    "lui       $22, %hi(D_001524F0)\n"
    "nop\n"
    ".L001180A0:\n"
    "addiu      $2, $0, 0x10\n"
    "addiu      $4, $22, %lo(D_001524F0)\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x10\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L001180E8\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L001180E8:\n"
    "addiu      $16, $16, -0x10\n"
    "slti       $2, $16, 0x11\n"
    "beqz       $2, .L001180A0\n"
    "addiu     $2, $22, %lo(D_001524F0)\n"
    "b          .L00118108\n"
    "sw        $16, 0x4($17)\n"
    ".L00118100:\n"
    "addiu      $2, $22, %lo(D_001524F0)\n"
    "sw         $16, 0x4($17)\n"
    ".L00118108:\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $16\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "b          .L00118158\n"
    "sw        $2, 0x14($29)\n"
    ".L00118130:\n"
    "sw         $19, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "daddu      $17, $18, $0\n"
    "lw         $2, 0x18($29)\n"
    "lw         $3, 0x14($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addiu      $3, $3, 0x1\n"
    "sw         $2, 0x18($29)\n"
    "slti       $4, $3, 0x8\n"
    "sw         $3, 0x14($29)\n"
    ".L00118158:\n"
    "bnez       $4, .L00118178\n"
    "lw        $4, 0x208($29)\n"
    "lw         $4, 0x1E8($29)\n"
    ".L00118164:\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L00118174:\n"
    "lw         $4, 0x208($29)\n"
    ".L00118178:\n"
    "sw         $29, 0x0($17)\n"
    "sw         $4, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $2, 0x18($29)\n"
    "lw         $3, 0x14($29)\n"
    "addu       $2, $2, $4\n"
    ".L00118190:\n"
    "addiu      $3, $3, 0x1\n"
    "sw         $2, 0x18($29)\n"
    "slti       $4, $3, 0x8\n"
    "sw         $3, 0x14($29)\n"
    ".L001181A0:\n"
    "bnez       $4, .L001181C0\n"
    "andi      $2, $30, 0x4\n"
    "lw         $4, 0x1E8($29)\n"
    ".L001181AC:\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F0\n"
    "addiu     $17, $29, 0x20\n"
    ".L001181BC:\n"
    "andi       $2, $30, 0x4\n"
    ".L001181C0:\n"
    "beqz       $2, .L00118288\n"
    "lw        $5, 0x1F4($29)\n"
    "lw         $6, 0x210($29)\n"
    "subu       $16, $5, $6\n"
    "blez       $16, .L00118288\n"
    "slti      $2, $16, 0x11\n"
    "bnez       $2, .L00118248\n"
    "lui       $6, %hi(D_001524E0)\n"
    ".L001181E0:\n"
    "addiu      $2, $0, 0x10\n"
    "addiu      $4, $6, %lo(D_001524E0)\n"
    "sw         $4, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "addiu      $17, $17, 0x8\n"
    "lw         $3, 0x18($29)\n"
    "lw         $2, 0x14($29)\n"
    "addiu      $3, $3, 0x10\n"
    "addiu      $2, $2, 0x1\n"
    "sw         $3, 0x18($29)\n"
    "slti       $4, $2, 0x8\n"
    "bnez       $4, .L00118230\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "addiu      $5, $29, 0x10\n"
    "jal        func_00116CA8\n"
    "sq        $6, 0x220($29)\n"
    "bnez       $2, .L001182F0\n"
    "lq        $6, 0x220($29)\n"
    "addiu      $17, $29, 0x20\n"
    ".L00118230:\n"
    "addiu      $16, $16, -0x10\n"
    "slti       $2, $16, 0x11\n"
    "beqz       $2, .L001181E0\n"
    "addiu     $2, $6, %lo(D_001524E0)\n"
    "b          .L00118250\n"
    "sw        $16, 0x4($17)\n"
    ".L00118248:\n"
    "addiu      $2, $6, %lo(D_001524E0)\n"
    "sw         $16, 0x4($17)\n"
    ".L00118250:\n"
    "sw         $2, 0x0($17)\n"
    "lw         $2, 0x14($29)\n"
    "lw         $3, 0x18($29)\n"
    "addiu      $2, $2, 0x1\n"
    "addu       $3, $3, $16\n"
    "slti       $4, $2, 0x8\n"
    "sw         $3, 0x18($29)\n"
    "bnez       $4, .L00118288\n"
    "sw        $2, 0x14($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F4\n"
    "lw        $2, 0x1E8($29)\n"
    ".L00118288:\n"
    "lw         $3, 0x210($29)\n"
    "lw         $4, 0x1F4($29)\n"
    "lw         $5, 0x210($29)\n"
    "slt        $2, $3, $4\n"
    "lw         $6, 0x1F0($29)\n"
    "movz       $4, $5, $2\n"
    "lw         $3, 0x18($29)\n"
    "addu       $6, $6, $4\n"
    "beqz       $3, .L001182C4\n"
    "sw        $6, 0x1F0($29)\n"
    "lw         $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F4\n"
    "lw        $2, 0x1E8($29)\n"
    ".L001182C4:\n"
    "sw         $0, 0x14($29)\n"
    "b          .L00116F00\n"
    "addiu     $17, $29, 0x20\n"
    ".L001182D0:\n"
    "lw         $2, 0x18($29)\n"
    "beqz       $2, .L001182EC\n"
    "lw        $4, 0x1E8($29)\n"
    "jal        func_00116CA8\n"
    "addiu     $5, $29, 0x10\n"
    "bnez       $2, .L001182F4\n"
    "lw        $2, 0x1E8($29)\n"
    ".L001182EC:\n"
    "sw         $0, 0x14($29)\n"
    ".L001182F0:\n"
    "lw         $2, 0x1E8($29)\n"
    ".L001182F4:\n"
    "lw         $4, 0x1F0($29)\n"
    "lhu        $3, 0xC($2)\n"
    "addiu      $2, $0, -0x1\n"
    "andi       $3, $3, 0x40\n"
    "movz       $2, $4, $3\n"
    ".L00118308:\n"
    "ld         $31, 0x2C0($29)\n"
    ".L0011830C:\n"
    "ld         $30, 0x2B0($29)\n"
    "ld         $23, 0x2A0($29)\n"
    "ld         $22, 0x290($29)\n"
    "ld         $21, 0x280($29)\n"
    "ld         $20, 0x270($29)\n"
    "ld         $19, 0x260($29)\n"
    "ld         $18, 0x250($29)\n"
    "ld         $17, 0x240($29)\n"
    "ld         $16, 0x230($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x2D0\n"
    ".size _vfprintf_r, .-_vfprintf_r\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern unsigned int Forward30F348_31CFE0(void);
extern unsigned int Rnd(void);
extern int Obj0000_Get_Byte_17C3_NZ_2_276468(void *a0);
extern int Obj0000_Get_Field_424_1595F0(void *a0);
extern int Obj0000_Get_D_00747A94_2DB6B0(void);
extern int moveMotion(void *a0);
extern void func_002A8578(void *a0, int a1, int a2, float a3, int a4, int a5, int a6);
extern void cSnd_SeCall_2CBA48(void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void Obj0000_Set_Bytes_2F4_2F5_2F6_2F7_27DAF0(int a0);
extern void ForwardAnimParamPairByIndex_27EA50(int a0, int a1);
extern void Obj2810_SetState_1_a1(int a0, int a1);
extern void SetBytes2F4Mode1_283188(int a0, int a1);
extern void Obj1D00_SetState_7_2(int a0);
extern void Obj1D00_SetState_7_4(int a0);
extern void Obj1D00_SetState_7_8(int a0);
extern void Obj1D00_ClearState_7(int a0);
extern void AddScaledDeltaToField_104_2A7498(void *a0, int a1, float a2);
extern void AddScaledVecToField_100_14F9F0(void *a0, float a1);
extern void AddScaledXfmVecToField_F0_14F928(void *a0, float a1);
extern void func_002705D8(void *a0);
extern void func_002744E0(void *a0);
extern unsigned char D_005FEE00[];

/* sn-2.95.3-136 matched TU. */
























__attribute__((section(".text.func_0023C620")))
void func_0023C620(void *a0)
{
    char *s3 = (char *)a0;
    int s2;
    int s1;

    *(int *)(s3 + 0x16D0) |= 0x400;
    switch (*(unsigned char *)(s3 + 0x2F6)) {
    case 0:
    {
        int nb;

        *(char *)(s3 + 0x1864) = 0;
        switch (*(int *)(s3 + 0x564)) {
        default:
        case 0x202:
            switch (Forward30F348_31CFE0() % 6) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3C4) + b;
                s1 = *(int *)(b + 0x3C8) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3CC) + b;
                s1 = *(int *)(b + 0x3D0) + b;
            }
                break;
            case 2:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3D4) + b;
                s1 = *(int *)(b + 0x3D8) + b;
            }
                break;
            case 3:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3DC) + b;
                s1 = *(int *)(b + 0x3E0) + b;
            }
                break;
            case 4:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3E4) + b;
                s1 = *(int *)(b + 0x3E8) + b;
            }
                break;
            case 5:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3EC) + b;
                s1 = *(int *)(b + 0x3F0) + b;
            }
                break;
            }
            if (*(unsigned char *)(s3 + 0x2F7) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3E4) + b;
                s1 = *(int *)(b + 0x3E8) + b;
            }
            break;
        case 0x204:
            if ((Forward30F348_31CFE0() & 1) != 0) {
                switch (Forward30F348_31CFE0() % 6) {
                case 0:
                default:
                {
                    int b = *(int *)(s3 + 0x304);
                    s2 = *(int *)(b + 0x3C4) + b;
                    s1 = *(int *)(b + 0x3C8) + b;
                }
                    break;
                case 1:
                {
                    int b = *(int *)(s3 + 0x304);
                    s2 = *(int *)(b + 0x3CC) + b;
                    s1 = *(int *)(b + 0x3D0) + b;
                }
                    break;
                case 2:
                {
                    int b = *(int *)(s3 + 0x304);
                    s2 = *(int *)(b + 0x3D4) + b;
                    s1 = *(int *)(b + 0x3D8) + b;
                }
                    break;
                case 3:
                {
                    int b = *(int *)(s3 + 0x304);
                    s2 = *(int *)(b + 0x3DC) + b;
                    s1 = *(int *)(b + 0x3E0) + b;
                }
                    break;
                case 4:
                {
                    int b = *(int *)(s3 + 0x304);
                    s2 = *(int *)(b + 0x3E4) + b;
                    s1 = *(int *)(b + 0x3E8) + b;
                }
                    break;
                case 5:
                {
                    int b = *(int *)(s3 + 0x304);
                    s2 = *(int *)(b + 0x3EC) + b;
                    s1 = *(int *)(b + 0x3F0) + b;
                }
                    break;
                }
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2B4) + b;
                s1 = *(int *)(b + 0x2B8) + b;
            }
            break;
        case 0x213:
        case 0x217:
            if ((Forward30F348_31CFE0() & 1) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2FA4) + b;
                s1 = *(int *)(b + 0x2FA8) + b;
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2FAC) + b;
                s1 = *(int *)(b + 0x2FB0) + b;
            }
            break;
        case 0x275:
        case 0x276:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x23E8) + b;
            s1 = *(int *)(b + 0x23EC) + b;
        }
            break;
        case 0x242:
        case 0x243:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x36B8) + b;
            s1 = *(int *)(b + 0x36BC) + b;
        }
            break;
        case 0x244:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x36B8) + b;
            s1 = *(int *)(b + 0x36C0) + b;
        }
            break;
        case 0x256:
            switch (Forward30F348_31CFE0() % 3) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2AFC) + b;
                s1 = *(int *)(b + 0x2B00) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2B04) + b;
                s1 = *(int *)(b + 0x2B08) + b;
            }
                break;
            case 2:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2BE4) + b;
                s1 = *(int *)(b + 0x2BE8) + b;
            }
                break;
            }
            break;
        case 0x27E:
            switch (Forward30F348_31CFE0() & 1) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2C40) + b;
                s1 = *(int *)(b + 0x2C44) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2C48) + b;
                s1 = *(int *)(b + 0x2C4C) + b;
            }
                break;
            }
            break;
        case 0x214:
        case 0x215:
        {
            int p = *(int *)(s3 + 0x304);
            s2 = *(int *)(p + 0x1A98) + p;
            s1 = *(int *)(p + 0x1A9C) + p;
            if (*(unsigned char *)(s3 + 0x2F7) != 0) {
                s2 = *(int *)(p + 0x13E8) + p;
                s1 = 0;
                cSnd_SeCall_2CBA48(&D_005FEE00, 1,
                                   (short)(Obj0000_Get_Field_424_1595F0(s3) + 0xB),
                                   s3, 0, 0, 0, 0);
            }
        }
            break;
        case 0x21A:
        case 0x21B:
        case 0x21C:
        case 0x21D:
        case 0x21E:
        case 0x225:
        case 0x22C:
        case 0x22D:
        case 0x22E:
        case 0x22F:
        case 0x248:
        case 0x249:
        case 0x24C:
        case 0x24D:
        case 0x24E:
        case 0x25A:
            if ((Forward30F348_31CFE0() & 1) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x13E8) + b;
                s1 = *(int *)(b + 0x13EC) + b;
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x13F0) + b;
                s1 = *(int *)(b + 0x13F4) + b;
            }
            if (*(unsigned char *)(s3 + 0x2F7) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x13F0) + b;
                s1 = *(int *)(b + 0x13F4) + b;
            }
            break;
        case 0x252:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x24F4) + b;
            s1 = *(int *)(b + 0x24F8) + b;
        }
            break;
        case 0x20A:
        case 0x20D:
        case 0x245:
        case 0x247:
            switch (Forward30F348_31CFE0() % 6) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0xB84) + b;
                s1 = *(int *)(b + 0xB88) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0xB8C) + b;
                s1 = *(int *)(b + 0xB90) + b;
            }
                break;
            case 2:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0xB94) + b;
                s1 = *(int *)(b + 0xB98) + b;
            }
                break;
            case 3:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0xB9C) + b;
                s1 = *(int *)(b + 0xBA0) + b;
            }
                break;
            case 4:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0xBA4) + b;
                s1 = *(int *)(b + 0xBA8) + b;
            }
                break;
            case 5:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0xBAC) + b;
                s1 = *(int *)(b + 0xBB0) + b;
            }
                break;
            }
            if (*(unsigned char *)(s3 + 0x2F7) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0xB8C) + b;
                s1 = *(int *)(b + 0xB90) + b;
            }
            break;
        case 0x218:
        case 0x246:
            switch (Forward30F348_31CFE0() & 1) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3BBC) + b;
                s1 = *(int *)(b + 0x3BC0) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3BC4) + b;
                s1 = *(int *)(b + 0x3BC8) + b;
            }
                break;
            }
            break;
        case 0x278:
            switch (Forward30F348_31CFE0() & 3) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2084) + b;
                s1 = *(int *)(b + 0x2088) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x208C) + b;
                s1 = *(int *)(b + 0x2090) + b;
            }
                break;
            case 2:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2094) + b;
                s1 = *(int *)(b + 0x2098) + b;
            }
                break;
            case 3:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x209C) + b;
                s1 = *(int *)(b + 0x20A0) + b;
            }
                break;
            }
            if (*(unsigned char *)(s3 + 0x2F7) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2084) + b;
                s1 = *(int *)(b + 0x2088) + b;
            }
            break;
        case 0x279:
            switch (Forward30F348_31CFE0() & 3) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2084) + b;
                s1 = *(int *)(b + 0x2088) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x208C) + b;
                s1 = *(int *)(b + 0x2090) + b;
            }
                break;
            case 2:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2094) + b;
                s1 = *(int *)(b + 0x2098) + b;
            }
                break;
            case 3:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x209C) + b;
                s1 = *(int *)(b + 0x20A0) + b;
            }
                break;
            }
            break;
        case 0x20B:
            switch (Forward30F348_31CFE0() & 1) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1E4C) + b;
                s1 = *(int *)(b + 0x1E50) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1E54) + b;
                s1 = *(int *)(b + 0x1E58) + b;
            }
                break;
            }
            break;
        case 0x20C:
        case 0x24F:
            switch (Forward30F348_31CFE0() & 1) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1F98) + b;
                s1 = *(int *)(b + 0x1F9C) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1FA0) + b;
                s1 = *(int *)(b + 0x1FA4) + b;
            }
                break;
            }
            break;
        case 0x20E:
            switch (Forward30F348_31CFE0() % 3) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2FBC) + b;
                s1 = *(int *)(b + 0x2FC0) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2FC4) + b;
                s1 = *(int *)(b + 0x2FC8) + b;
            }
                break;
            case 2:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x2FCC) + b;
                s1 = *(int *)(b + 0x2FD0) + b;
            }
                break;
            }
            break;
        case 0x205:
        case 0x207:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x17F8) + b;
            s1 = *(int *)(b + 0x17FC) + b;
        }
            break;
        case 0x224:
            if ((Forward30F348_31CFE0() & 1) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x18DC) + b;
                s1 = *(int *)(b + 0x18E0) + b;
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x18E4) + b;
                s1 = *(int *)(b + 0x18E8) + b;
            }
            break;
        case 0x241:
            if ((Forward30F348_31CFE0() & 1) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3B1C) + b;
                s1 = *(int *)(b + 0x3B20) + b;
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3B24) + b;
                s1 = *(int *)(b + 0x3B28) + b;
            }
            break;
        case 0x206:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x1890) + b;
            s1 = *(int *)(b + 0x1894) + b;
        }
            break;
        case 0x208:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x1EA0) + b;
            s1 = *(int *)(b + 0x1EA4) + b;
        }
            break;
        case 0x209:
            if ((Forward30F348_31CFE0() & 1) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x34F4) + b;
                s1 = *(int *)(b + 0x34F8) + b;
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x34FC) + b;
                s1 = *(int *)(b + 0x3500) + b;
            }
            break;
        case 0x21F:
            if ((Forward30F348_31CFE0() & 1) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x35C0) + b;
                s1 = *(int *)(b + 0x35C4) + b;
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x34FC) + b;
                s1 = *(int *)(b + 0x3500) + b;
            }
            break;
        case 0x250:
        case 0x251:
            switch (Forward30F348_31CFE0() % 3) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1A30) + b;
                s1 = *(int *)(b + 0x1A34) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1A38) + b;
                s1 = *(int *)(b + 0x1A3C) + b;
            }
                break;
            case 2:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1A40) + b;
                s1 = *(int *)(b + 0x1A44) + b;
            }
                break;
            }
            if (*(unsigned char *)(s3 + 0x2F7) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1A38) + b;
                s1 = *(int *)(b + 0x1A3C) + b;
            }
            break;
        case 0x260:
            switch (Forward30F348_31CFE0() & 3) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x31C4) + b;
                s1 = *(int *)(b + 0x31C8) + b;
            }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x31CC) + b;
                s1 = *(int *)(b + 0x31D0) + b;
            }
                break;
            case 2:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x31D4) + b;
                s1 = *(int *)(b + 0x31D8) + b;
            }
                break;
            case 3:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x31DC) + b;
                s1 = *(int *)(b + 0x31E0) + b;
            }
                break;
            }
            if (*(unsigned char *)(s3 + 0x2F7) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x31CC) + b;
                s1 = *(int *)(b + 0x31D0) + b;
            }
            break;
        case 0x264:
        {
            int p = *(int *)(s3 + 0x304);
            s2 = *(int *)(p + 0x33B8) + p;
            s1 = *(int *)(p + 0x33BC) + p;
            if (*(int *)(s3 + 0x740) != 0) {
                Obj0000_Set_Bytes_2F4_2F5_2F6_2F7_27DAF0(*(int *)(s3 + 0x740));
            }
        }
            break;
        case 0x265:
            if ((*(int *)(s3 + 0x16D4) & 0x20000000) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3770) + b;
                s1 = *(int *)(b + 0x3774) + b;
            } else if ((Rnd() & 1) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x372C) + b;
                s1 = *(int *)(b + 0x3730) + b;
                if (*(int *)(s3 + 0x744) != 0) {
                    ForwardAnimParamPairByIndex_27EA50(*(int *)(s3 + 0x744), 2);
                }
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3768) + b;
                s1 = *(int *)(b + 0x376C) + b;
                if (*(int *)(s3 + 0x744) != 0) {
                    ForwardAnimParamPairByIndex_27EA50(*(int *)(s3 + 0x744), 3);
                }
            }
            break;
        case 0x20F:
        case 0x210:
        case 0x211:
        case 0x226:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0xF94) + b;
            s1 = *(int *)(b + 0xF98) + b;
        }
            break;
        case 0x270:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x2224) + b;
            s1 = *(int *)(b + 0x2228) + b;
        }
            break;
        case 0x271:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x2248) + b;
            s1 = *(int *)(b + 0x224C) + b;
        }
            break;
        case 0x272:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x2230) + b;
            s1 = *(int *)(b + 0x2234) + b;
        }
            break;
        case 0x273:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x2254) + b;
            s1 = *(int *)(b + 0x2258) + b;
        }
            break;
        case 0x274:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x223C) + b;
            s1 = *(int *)(b + 0x2240) + b;
        }
            break;
        case 0x220:
        case 0x221:
        case 0x222:
            if ((Forward30F348_31CFE0() & 1) != 0) {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1D68) + b;
                s1 = *(int *)(b + 0x1D6C) + b;
            } else {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x1D70) + b;
                s1 = *(int *)(b + 0x1D74) + b;
            }
            break;
        case 0x223:
        {
            int b = *(int *)(s3 + 0x304);
            s2 = *(int *)(b + 0x2D38) + b;
            s1 = *(int *)(b + 0x2D3C) + b;
        }
            break;
        case 0x26A:
            switch (Forward30F348_31CFE0() & 1) {
            case 0:
            default:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3D54) + b;
                s1 = *(int *)(b + 0x3D58) + b;
            }
                if (*(int *)(s3 + 0x748) != 0) {
                    Obj2810_SetState_1_a1(*(int *)(s3 + 0x748), 0);
                }
                if (*(int *)(s3 + 0x74C) != 0) {
                    SetBytes2F4Mode1_283188(*(int *)(s3 + 0x74C), 0);
                }
                if (*(int *)(s3 + 0x750) != 0) {
                    SetBytes2F4Mode1_283188(*(int *)(s3 + 0x750), 0);
                }
                break;
            case 1:
            {
                int b = *(int *)(s3 + 0x304);
                s2 = *(int *)(b + 0x3D5C) + b;
                s1 = *(int *)(b + 0x3D60) + b;
            }
                if (*(int *)(s3 + 0x748) != 0) {
                    Obj2810_SetState_1_a1(*(int *)(s3 + 0x748), 1);
                }
                if (*(int *)(s3 + 0x74C) != 0) {
                    SetBytes2F4Mode1_283188(*(int *)(s3 + 0x74C), 1);
                }
                if (*(int *)(s3 + 0x750) != 0) {
                    SetBytes2F4Mode1_283188(*(int *)(s3 + 0x750), 1);
                }
                break;
            }
            break;
        }
        if (*(int *)(s3 + 0x6EC) != 0) {
            int p = *(int *)(s3 + 0x304);
            s2 = *(int *)(p + 0x3E4) + p;
            s1 = *(int *)(p + 0x3E8) + p;
        }
        nb = Obj0000_Get_Byte_17C3_NZ_2_276468(s3) & 0xFFFF;
        func_002A8578(s3, s2, s1, 0.0f, 0xA, nb, 0);
        *(int *)(s3 + 0x5F0) = 1;
        *(unsigned char *)(s3 + 0x2F6) += 1;
    }
        /* fallthrough */
    case 1:
    {
        int t = *(int *)(s3 + 0x564);

        if (t < 0x264 || (t >= 0x266 && t != 0x26A)) {
            int r = Obj0000_Get_D_00747A94_2DB6B0();
            AddScaledDeltaToField_104_2A7498(s3, *(int *)(r + 0xF0),
                                             *(float *)(s3 + 0x5A8) * 0.19634955f);
        }
        if (moveMotion(s3) != 0) {
            func_002705D8(s3);
        }
        AddScaledVecToField_100_14F9F0(s3, 1.0f);
        AddScaledXfmVecToField_F0_14F928(s3, 1.0f);
    }
        break;
    case 2:
    {
        int nb;
        int p;

        *(char *)(s3 + 0x1864) = 0;
        nb = Obj0000_Get_Byte_17C3_NZ_2_276468(s3) & 0xFFFF;
        p = *(int *)(s3 + 0x304);
        func_002A8578(s3, *(int *)(p + 0x2F24) + p, *(int *)(p + 0x2F28) + p,
                      0.0f, 0xA, nb, 0);
        if (*(int *)(s3 + 0x708) != 0) {
            Obj1D00_SetState_7_2(*(int *)(s3 + 0x708));
        }
        *(int *)(s3 + 0x5F4) = 1;
        *(unsigned char *)(s3 + 0x2F6) += 1;
    }
        goto L26C;
    case 4:
    {
        int nb;
        int p;

        *(char *)(s3 + 0x1864) = 0;
        nb = Obj0000_Get_Byte_17C3_NZ_2_276468(s3) & 0xFFFF;
        p = *(int *)(s3 + 0x304);
        func_002A8578(s3, *(int *)(p + 0x2F9C) + p, *(int *)(p + 0x2FA0) + p,
                      0.0f, 3, nb, 0);
        if (*(int *)(s3 + 0x708) != 0) {
            Obj1D00_SetState_7_8(*(int *)(s3 + 0x708));
        }
        *(unsigned char *)(s3 + 0x2F6) += 1;
    }
        /* fallthrough */
    case 3:
    case 5:
    L26C:
    {
        int r = Obj0000_Get_D_00747A94_2DB6B0();

        AddScaledDeltaToField_104_2A7498(s3, *(int *)(r + 0xF0),
                                         *(float *)(s3 + 0x5A8) * 0.09817477f);
        if (moveMotion(s3) != 0) {
            *(unsigned char *)(s3 + 0x2F6) += 1;
        }
        AddScaledVecToField_100_14F9F0(s3, 1.0f);
        AddScaledXfmVecToField_F0_14F928(s3, 1.0f);
    }
        break;
    case 6:
    {
        int nb;
        int p;

        *(char *)(s3 + 0x1864) = 0;
        nb = Obj0000_Get_Byte_17C3_NZ_2_276468(s3) & 0xFFFF;
        p = *(int *)(s3 + 0x304);
        func_002A8578(s3, *(int *)(p + 0x2F2C) + p, *(int *)(p + 0x2F30) + p,
                      0.0f, 3, nb, 0);
        if (*(int *)(s3 + 0x708) != 0) {
            Obj1D00_SetState_7_4(*(int *)(s3 + 0x708));
        }
        *(unsigned char *)(s3 + 0x2F6) += 1;
    }
        /* fallthrough */
    case 7:
    {
        int r = Obj0000_Get_D_00747A94_2DB6B0();

        AddScaledDeltaToField_104_2A7498(s3, *(int *)(r + 0xF0),
                                         *(float *)(s3 + 0x5A8) * 0.09817477f);
        if (moveMotion(s3) != 0) {
            AddScaledVecToField_100_14F9F0(s3, 1.0f);
            AddScaledXfmVecToField_F0_14F928(s3, 1.0f);
            func_002705D8(s3);
            if (*(int *)(s3 + 0x708) != 0) {
                Obj1D00_ClearState_7(*(int *)(s3 + 0x708));
            }
            return;
        }
        AddScaledVecToField_100_14F9F0(s3, 1.0f);
        AddScaledXfmVecToField_F0_14F928(s3, 1.0f);
    }
        break;
    default:
        break;
    }
    if ((*(unsigned short *)(s3 + 0x3AC) & 3) != 0) {
        if (*(int *)(s3 + 0x5F0) != 0) {
            *(int *)(s3 + 0x5F0) = 0;
            func_002744E0(s3);
        }
    }
}
#endif /* NON_MATCHING */
