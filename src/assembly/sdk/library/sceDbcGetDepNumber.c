/*
STATE: C_NON_MATCHING
SYMBOL: sceDbcGetDepNumber
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceDbcGetDepNumber; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceDbcGetDepNumber\n"
    ".type sceDbcGetDepNumber, @function\n"
    "sceDbcGetDepNumber:\n"
    "addiu      $29, $29, -0x50\n"
    "sd         $18, 0x30($29)\n"
    "sd         $17, 0x20($29)\n"
    "daddu      $18, $4, $0\n"
    "lui        $17, %hi(D_0015B480)\n"
    "sd         $16, 0x10($29)\n"
    "addiu      $4, $17, %lo(D_0015B480)\n"
    "sd         $31, 0x40($29)\n"
    "jal        func_00118F88\n"
    "addiu     $5, $4, 0x80\n"
    "jal        DIntr\n"
    "nop\n"
    "lui        $3, %hi(D_0015B500)\n"
    "addiu      $6, $17, %lo(D_0015B480)\n"
    "addiu      $5, $3, %lo(D_0015B500)\n"
    "ldl        $2, 0x7($6)\n"
    "ldr        $2, 0x0($6)\n"
    "ldl        $4, 0xF($6)\n"
    "ldr        $4, 0x8($6)\n"
    "sdl        $2, 0x7($5)\n"
    "sdr        $2, 0x0($5)\n"
    "sdl        $4, 0xF($5)\n"
    "sdr        $4, 0x8($5)\n"
    "ldl        $2, 0x17($6)\n"
    "ldr        $2, 0x10($6)\n"
    "ldl        $4, 0x1F($6)\n"
    "ldr        $4, 0x18($6)\n"
    "sdl        $2, 0x17($5)\n"
    "sdr        $2, 0x10($5)\n"
    "sdl        $4, 0x1F($5)\n"
    "sdr        $4, 0x18($5)\n"
    "ldl        $2, 0x27($6)\n"
    "ldr        $2, 0x20($6)\n"
    "ldl        $4, 0x2F($6)\n"
    "ldr        $4, 0x28($6)\n"
    "sdl        $2, 0x27($5)\n"
    "sdr        $2, 0x20($5)\n"
    "sdl        $4, 0x2F($5)\n"
    "sdr        $4, 0x28($5)\n"
    "ldl        $2, 0x37($6)\n"
    "ldr        $2, 0x30($6)\n"
    "ldl        $4, 0x3F($6)\n"
    "ldr        $4, 0x38($6)\n"
    "sdl        $2, 0x37($5)\n"
    "sdr        $2, 0x30($5)\n"
    "sdl        $4, 0x3F($5)\n"
    "sdr        $4, 0x38($5)\n"
    "jal        EnableInterrupts\n"
    "addiu     $16, $3, %lo(D_0015B500)\n"
    "sll        $3, $18, 2\n"
    "addiu      $4, $0, 0x1\n"
    "addu       $3, $3, $16\n"
    "lw         $2, 0x0($3)\n"
    "bne        $2, $4, .L00124910\n"
    "addiu     $2, $0, -0xC\n"
    "lui        $2, %hi(D_0015B080)\n"
    "lui        $4, %hi(D_0015B008)\n"
    "addiu      $16, $2, %lo(D_0015B080)\n"
    "lui        $5, (0x80000903 >> 16)\n"
    "sw         $18, %lo(D_0015B080)($2)\n"
    "addiu      $4, $4, %lo(D_0015B008)\n"
    "sw         $0, 0x0($29)\n"
    "ori        $5, $5, (0x80000903 & 0xFFFF)\n"
    "daddu      $6, $0, $0\n"
    "daddu      $7, $16, $0\n"
    "addiu      $8, $0, 0x400\n"
    "daddu      $9, $16, $0\n"
    "addiu      $10, $0, 0x400\n"
    "jal        sceSifCallRpc\n"
    "daddu     $11, $0, $0\n"
    "bgezl      $2, .L00124910\n"
    "lw        $2, 0x4($16)\n"
    "lui        $4, %hi(D_001535B8)\n"
    "jal        func_00124A20\n"
    "addiu     $4, $4, %lo(D_001535B8)\n"
    "daddu      $2, $0, $0\n"
    ".L00124910:\n"
    "ld         $31, 0x40($29)\n"
    "ld         $18, 0x30($29)\n"
    "ld         $17, 0x20($29)\n"
    "ld         $16, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x50\n"
    ".size sceDbcGetDepNumber, .-sceDbcGetDepNumber\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_sceDbcGetDepNumber_types.h"
#include "types.h"


extern u8 D_001535B8[];
extern u8 D_0015B008[];
extern struct M2c_D_0015B080 D_0015B080;
extern u8 D_0015B480[];
extern u8 D_0015B500[];
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 func_00118F88();
extern s32 func_00124A20();
extern s32 sceSifCallRpc();
s32 sceDbcGetDepNumber(s32 arg0) {
    s32 var_2_57;

    func_00118F88(D_0015B480, D_0015B480 + 0x80);
    DIntr();
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x7($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, ($a2)  */
    /* m2c-unknown:  unknown instruction: ldl $a0, 0xf($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $a0, 0x8($a2)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x7($a1)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, ($a1)  */
    /* m2c-unknown:  unknown instruction: sdl $a0, 0xf($a1)  */
    /* m2c-unknown:  unknown instruction: sdr $a0, 0x8($a1)  */
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x17($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, 0x10($a2)  */
    /* m2c-unknown:  unknown instruction: ldl $a0, 0x1f($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $a0, 0x18($a2)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x17($a1)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, 0x10($a1)  */
    /* m2c-unknown:  unknown instruction: sdl $a0, 0x1f($a1)  */
    /* m2c-unknown:  unknown instruction: sdr $a0, 0x18($a1)  */
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x27($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, 0x20($a2)  */
    /* m2c-unknown:  unknown instruction: ldl $a0, 0x2f($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $a0, 0x28($a2)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x27($a1)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, 0x20($a1)  */
    /* m2c-unknown:  unknown instruction: sdl $a0, 0x2f($a1)  */
    /* m2c-unknown:  unknown instruction: sdr $a0, 0x28($a1)  */
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x37($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, 0x30($a2)  */
    /* m2c-unknown:  unknown instruction: ldl $a0, 0x3f($a2)  */
    /* m2c-unknown:  unknown instruction: ldr $a0, 0x38($a2)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x37($a1)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, 0x30($a1)  */
    /* m2c-unknown:  unknown instruction: sdl $a0, 0x3f($a1)  */
    EnableInterrupts(0 /*  unknown instruction: sdr $a0, 0x38($a1)  */, D_0015B500, D_0015B480);
    var_2_57 = -0xC;
    if (*((arg0 * 4) + D_0015B500) == 1) {
        D_0015B080.unk0 = arg0;
        if (sceSifCallRpc(D_0015B008, 0x80000903, 0, &D_0015B080, 0x400, &D_0015B080, 0x400, 0, 0) >= 0) {
            return D_0015B080.unk4;
        }
        func_00124A20(D_001535B8);
        var_2_57 = 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_2_57;
    }
    return var_2_57;
}
#endif /* NON_MATCHING */
