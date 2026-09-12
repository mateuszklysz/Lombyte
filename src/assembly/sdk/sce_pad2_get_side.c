/*
STATE: C_NON_MATCHING
SYMBOL: scePad2GetSide
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit scePad2GetSide; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_pad2_get_side/scePad2GetSide.s", scePad2GetSide);
#else
#include "rnc/assembly_sdk_sce_pad2_get_side_types.h"
#include "types.h"




extern u8 D_0015B540[];
extern s32 func_00118F88();
s32 scePad2GetSide(s32 arg0) {
u8 sp_slot[0x20];    struct M2c_sp0 *sp0;
    struct M2c_sp4 *sp4;
    s32 *temp_3_10;

    temp_3_10 = *(s32 *)((u8 *)(D_0015B540 + (arg0 * 0x330)) + 0xC);
    sp4 = temp_3_10 + 0x80;
    sp0 = temp_3_10;
    func_00118F88(temp_3_10, temp_3_10 + 0x100);
    return *(sp_slot + ((sp0->unk7C < sp4->unk7C) * 4));
}
#endif /* NON_MATCHING */
