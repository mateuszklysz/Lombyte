/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 70.5227%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _request_bind; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _request_bind\n"
    ".type _request_bind, @function\n"
    "_request_bind:\n"
    "addiu      $29, $29, -0x40\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $17, $5, $0\n"
    "daddu      $16, $4, $0\n"
    "sd         $18, 0x20($29)\n"
    "sd         $31, 0x30($29)\n"
    "jal        GetRpcPacket\n"
    "daddu     $4, $17, $0\n"
    "daddu      $18, $2, $0\n"
    "lw         $4, 0x1C($16)\n"
    "lw         $3, 0x14($16)\n"
    "lui        $2, (0x80000009 >> 16)\n"
    "ori        $2, $2, (0x80000009 & 0xFFFF)\n"
    "sw         $4, 0x1C($18)\n"
    "sw         $3, 0x14($18)\n"
    "daddu      $5, $17, $0\n"
    "sw         $2, 0x20($18)\n"
    "jal        SearchSvdata\n"
    "lw        $4, 0x20($16)\n"
    "daddu      $3, $2, $0\n"
    "bnel       $3, $0, .L0011AFB4\n"
    "sw        $3, 0x24($18)\n"
    "sw         $0, 0x24($18)\n"
    "sw         $0, 0x28($18)\n"
    "b          .L0011AFC4\n"
    "sw        $0, 0x2C($18)\n"
    ".L0011AFB4:\n"
    "lw         $2, 0x8($3)\n"
    "sw         $2, 0x28($18)\n"
    "lw         $3, 0x14($3)\n"
    "sw         $3, 0x2C($18)\n"
    ".L0011AFC4:\n"
    "daddu      $5, $18, $0\n"
    "lui        $4, (0x80000008 >> 16)\n"
    "ld         $31, 0x30($29)\n"
    "ori        $4, $4, (0x80000008 & 0xFFFF)\n"
    "ld         $18, 0x20($29)\n"
    "addiu      $6, $0, 0x40\n"
    "ld         $17, 0x10($29)\n"
    "daddu      $7, $0, $0\n"
    "ld         $16, 0x0($29)\n"
    "daddu      $8, $0, $0\n"
    "daddu      $9, $0, $0\n"
    "j          isceSifSendCmd\n"
    "addiu     $29, $29, 0x40\n"
    ".size _request_bind, .-_request_bind\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sif_rpc_request_bind_types.h"
#include "types.h"






extern s32 GetRpcPacket();
extern s32 SearchSvdata();
void _request_bind(struct M2c_arg0 *arg0, s32 arg1) {
    struct M2c_temp_2_10 *temp_2_10;
    struct M2c_temp_2_21 *temp_2_21;

    temp_2_10 = GetRpcPacket(arg1);
    temp_2_10->unk1C = (s32) arg0->unk1C;
    temp_2_10->unk14 = (s32) arg0->unk14;
    temp_2_10->unk20 = 0x80000009;
    temp_2_21 = SearchSvdata(arg0->unk20, arg1);
    if (temp_2_21 != NULL) {
        temp_2_10->unk24 = temp_2_21;
        temp_2_10->unk28 = (s32) temp_2_21->unk8;
        temp_2_10->unk2C = (s32) temp_2_21->unk14;
    } else {
        temp_2_10->unk24 = NULL;
        temp_2_10->unk28 = 0;
        temp_2_10->unk2C = 0;
    }
    isceSifSendCmd(0x80000008, temp_2_10, 0x40, 0, 0, 0);
}
#endif /* NON_MATCHING */
