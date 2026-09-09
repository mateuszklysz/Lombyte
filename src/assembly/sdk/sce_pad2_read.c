/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 89.1509%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit scePad2Read; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl scePad2Read\n"
    ".type scePad2Read, @function\n"
    "scePad2Read:\n"
    "addiu      $29, $29, -0x40\n"
    "addiu      $2, $0, 0x330\n"
    "sd         $17, 0x10($29)\n"
    "lui        $3, %hi(D_0015B540)\n"
    "daddu      $17, $4, $0\n"
    "sd         $18, 0x20($29)\n"
    "mult       $4, $17, $2\n"
    "addiu      $6, $3, %lo(D_0015B540)\n"
    "sd         $31, 0x30($29)\n"
    "daddu      $18, $5, $0\n"
    "sd         $16, 0x0($29)\n"
    "addu       $2, $4, $6\n"
    "lw         $3, 0x0($2)\n"
    "beqz       $3, .L00124C94\n"
    "addiu     $2, $0, -0x1\n"
    "addu       $2, $6, $4\n"
    "lw         $3, 0x4($2)\n"
    "bnez       $3, .L00124C34\n"
    "nop\n"
    "jal        scePad2LinkDriver\n"
    "daddu     $4, $17, $0\n"
    "bltz       $2, .L00124C94\n"
    "addiu     $2, $0, -0x1\n"
    ".L00124C34:\n"
    "jal        scePad2GetSide\n"
    "daddu     $4, $17, $0\n"
    "daddu      $16, $2, $0\n"
    "lbu        $2, 0x2($16)\n"
    "beql       $2, $0, .L00124C88\n"
    "lw        $2, 0x4($16)\n"
    "addiu      $5, $16, 0x1C\n"
    "beqz       $5, .L00124C84\n"
    "daddu     $6, $2, $0\n"
    "jal        func_00115248\n"
    "daddu     $4, $18, $0\n"
    "addiu      $3, $0, 0x330\n"
    "lbu        $4, 0x2($16)\n"
    "mult       $3, $17, $3\n"
    "lui        $5, %hi(D_0015B550)\n"
    "addiu      $4, $4, 0x1C\n"
    "addiu      $5, $5, %lo(D_0015B550)\n"
    "addu       $4, $16, $4\n"
    "jal        scePad2SetButtonOrder\n"
    "addu      $5, $3, $5\n"
    ".L00124C84:\n"
    "lw         $2, 0x4($16)\n"
    ".L00124C88:\n"
    "bnel       $2, $0, .L00124C94\n"
    "lbu       $2, 0x2($16)\n"
    "addiu      $2, $0, -0x1\n"
    ".L00124C94:\n"
    "ld         $31, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size scePad2Read, .-scePad2Read\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sce_pad2_read_types.h"
#include "types.h"


extern u8 D_0015B540[];
extern u8 D_0015B550[];
extern s32 memcpy();
extern s32 scePad2GetSide();
extern s32 scePad2LinkDriver();
extern s32 scePad2SetButtonOrder();
extern void memcpy();
s32 scePad2Read(s32 arg0, s32 arg1) {
    s32 temp_4_9;
    u8 temp_2_30;
    struct M2c_temp_2_27 *temp_2_27;
    s32 *temp_5_33;
    register s32 output __asm__("s2") = arg1;

    temp_4_9 = arg0 * 0x330;
    if (*(u32 *)((u8 *)D_0015B540 + temp_4_9) != 0) {
        if (*(s32 *)((u8 *)(D_0015B540 + temp_4_9) + 0x4) == 0) {
            if (scePad2LinkDriver(arg0) >= 0) {
                goto block_3;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return -1U;
        }
block_3:
        temp_2_27 = scePad2GetSide(arg0);
        temp_2_30 = temp_2_27->unk2;
        if (temp_2_30 != 0) {
            temp_5_33 = ((u8 *)temp_2_27 + (0x1C));
            if (temp_5_33 != NULL) {
                memcpy(output, temp_5_33, temp_2_30);
                scePad2SetButtonOrder(((u8 *)temp_2_27 + ((temp_2_27->unk2 + 0x1C))), (arg0 * 0x330) + D_0015B550);
            }
        }
        if (temp_2_27->unk4 != 0) {
            return temp_2_27->unk2;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return -1U;
    }
    return -1U;
}
#endif /* NON_MATCHING */
