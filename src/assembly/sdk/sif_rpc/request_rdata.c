/*
STATE: C_NON_MATCHING
SYMBOL: _request_rdata
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 57.8333%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _request_rdata; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _request_rdata\n"
    ".type _request_rdata, @function\n"
    "_request_rdata:\n"
    "addiu      $29, $29, -0x20\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $16, $4, $0\n"
    "sd         $31, 0x10($29)\n"
    "jal        GetRpcPacket\n"
    "daddu     $4, $5, $0\n"
    "lw         $5, 0x14($16)\n"
    "lui        $3, (0x8000000C >> 16)\n"
    "lw         $4, 0x1C($16)\n"
    "ori        $3, $3, (0x8000000C & 0xFFFF)\n"
    "sw         $5, 0x14($2)\n"
    "addiu      $6, $0, 0x40\n"
    "sw         $4, 0x1C($2)\n"
    "daddu      $5, $2, $0\n"
    "sw         $3, 0x20($2)\n"
    "lui        $4, (0x80000008 >> 16)\n"
    "ld         $31, 0x10($29)\n"
    "ori        $4, $4, (0x80000008 & 0xFFFF)\n"
    "lw         $9, 0x28($16)\n"
    "lw         $7, 0x20($16)\n"
    "lw         $8, 0x24($16)\n"
    "ld         $16, 0x0($29)\n"
    "j          isceSifSendCmd\n"
    "addiu     $29, $29, 0x20\n"
    ".size _request_rdata, .-_request_rdata\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sif_rpc_request_rdata_types.h"
#include "types.h"




extern s32 GetRpcPacket();
void _request_rdata(struct M2c_arg0 *arg0, s32 arg1) {
    struct M2c_temp_2_7 *temp_2_7;

    temp_2_7 = GetRpcPacket(arg1);
    temp_2_7->unk14 = (s32) arg0->unk14;
    temp_2_7->unk1C = (s32) arg0->unk1C;
    temp_2_7->unk20 = 0x8000000C;
    isceSifSendCmd(0x80000008, temp_2_7, 0x40, arg0->unk20, arg0->unk24, arg0->unk28);
}
#endif /* NON_MATCHING */
