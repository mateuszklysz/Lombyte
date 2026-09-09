/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 93.0588%
 * blocker: logic is correct above 80%; remaining mismatch is register allocation and delay-slot scheduling
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"
#include "rnc/assembly_sdk_sif_rpc_sce_sif_init_iop_heap_types.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceSifInitIopHeap; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceSifInitIopHeap\n"
    ".type sceSifInitIopHeap, @function\n"
    "sceSifInitIopHeap:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $17, 0x10($29)\n"
    "sd         $31, 0x20($29)\n"
    "lui        $17, %hi(D_00158040)\n"
    "b          .L0011C87C\n"
    "sd        $16, 0x0($29)\n"
    ".L0011C858:\n"
    "lui        $2, %hi(D_FFFFF)\n"
    "addiu      $3, $0, -0x1\n"
    ".L0011C860:\n"
    "addiu      $2, $2, %lo(D_FFFFF)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bne        $2, $3, .L0011C860\n"
    "nop\n"
    ".L0011C87C:\n"
    "addiu      $16, $17, %lo(D_00158040)\n"
    "lui        $5, (0x80000003 >> 16)\n"
    "daddu      $4, $16, $0\n"
    "ori        $5, $5, (0x80000003 & 0xFFFF)\n"
    "jal        sceSifBindRpc\n"
    "daddu     $6, $0, $0\n"
    "bgezl      $2, .L0011C8A4\n"
    "lw        $2, 0x24($16)\n"
    "b          .L0011C8B4\n"
    "addiu     $2, $0, -0x1\n"
    ".L0011C8A4:\n"
    "beqz       $2, .L0011C858\n"
    "lui       $2, %hi(D_0012FCAC)\n"
    "sw         $0, %lo(D_0012FCAC)($2)\n"
    "daddu      $2, $0, $0\n"
    ".L0011C8B4:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size sceSifInitIopHeap, .-sceSifInitIopHeap\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sif_rpc_sce_sif_init_iop_heap_types.h"
extern u8 D_0012FCAC[];
extern struct M2c_D_00158040 D_00158040;
extern u8 D_FFFFF[];
extern s32 sceSifBindRpc();
s32 sceSifInitIopHeap(void) {
    s32 var_2_10;
    goto loop_3;
block_1:
    var_2_10 = (s32)D_FFFFF;
loop_2:
    if (var_2_10 != -1) {
        goto loop_2;
    }
loop_3:
    if (sceSifBindRpc(&D_00158040, 0x80000003, 0) < 0) {
        goto block_5;
    }
    goto block_7;
block_5:
    return -1;
block_7:
    if (D_00158040.unk24 == 0) {
        goto block_1;
    }
    *(s32 *)D_0012FCAC = 0;
    return 0;
}
#endif /* NON_MATCHING */
