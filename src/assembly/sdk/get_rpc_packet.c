/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 59.5833%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact Sony RPC helper _sceRpcGetFPacket; target-derived body pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl GetRpcPacket\n"
    ".type GetRpcPacket, @function\n"
    "GetRpcPacket:\n"
    ".word 0x8C850024\n.word 0x8C830018\n.word 0x00A3001A\n.word 0x50600001\n"
    ".word 0x000001CD\n.word 0x8C850014\n.word 0x00001010\n.word 0x24430001\n"
    ".word 0x00021180\n.word 0xAC830024\n.word 0x03E00008\n.word 0x00A21021\n"
    ".size GetRpcPacket, .-GetRpcPacket\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_get_rpc_packet_types.h"
#include "types.h"


s32 GetRpcPacket(struct M2c_arg0 *arg0) {
    s32 temp_hi_5;

    temp_hi_5 = (s32) arg0->unk24 % (s32) arg0->unk18;
    arg0->unk24 = (s32) (temp_hi_5 + 1);
    return arg0->unk14 + (temp_hi_5 << 6);
}
#endif /* NON_MATCHING */
