/*
STATE: C_NON_MATCHING
SYMBOL: _csc_storeRefImage
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _csc_storeRefImage; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/csc_store_ref_image/_csc_storeRefImage.s", _csc_storeRefImage);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_csc_store_ref_image_types.h"
#include "types.h"




extern u8 D_0012A5D8[];
extern s32 AddDmacHandlerSecondary();
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 RemoveDmacHandler();
extern s32 _dispatchMpegCallback();
extern s32 _doCSC();
extern s32 _doCSC2();
extern s32 _sendIpuCommand();
extern s32 func_001190F8();
extern s32 func_00119160();
void _csc_storeRefImage(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
u8 sp_slot[0xA0];    u32 sp20;
    s32 sp24;
    s32 temp_18_73;
    s32 temp_19_18;
    s32 temp_21_31;
    s32 temp_2_128;
    s32 temp_2_80;
    s32 temp_4_64;
    u32 temp_2_59;

    temp_19_18 = arg1->unkC * arg1->unk10;
    _dispatchMpegCallback(arg0->unk858, sp_slot, 2, 2);
    if (*(s32 *)0x10002010 & 0x4000) {
        *(volatile u32 *)0x10002010 = 0x40000000;
    }
    temp_21_31 = temp_19_18 < 0x400;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    _sendIpuCommand(arg0, 0);
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    temp_2_59 = temp_19_18 * 0x18;
    sp24 = arg1->unk0 & 0x0FFFFFFF;
    temp_4_64 = temp_2_59 > 0xFFFFU;
    sp20 = temp_2_59;
    if (temp_4_64 != 0) {
        temp_18_73 = AddDmacHandlerSecondary(4, D_0012A5D8, 0, &sp20);
        *(s32 *)0x1000E010 = 0x10;
        func_00119160(4);
        temp_2_80 = DIntr();
        *(s32 *)0x1000B410 = sp24;
        *(u32 *)0x1000B420 = 0xFFFF;
        *(s32 *)0x1000B400 = 0x101;
        if (temp_2_80 != 0) {
            EnableInterrupts(0x101, sp24);
        }
        sp24 = (sp24 + 0xFFFF0) & 0x0FFFFFFF;
        sp20 -= 0xFFFF;
        if (temp_21_31 != 0) {
            _doCSC(arg0, arg0->unkD8, temp_19_18);
        } else {
            _doCSC2(arg0, arg0->unkD8, temp_19_18);
        }
        func_001190F8(4);
        RemoveDmacHandler(4, temp_18_73);
    } else {
        temp_2_128 = DIntr(temp_4_64);
        *(volatile u32 *)0x1000B410 = (s32) (arg1->unk0 & 0x0FFFFFFF);
        *(volatile u32 *)0x1000B420 = sp20;
        *(volatile u32 *)0x1000B400 = 0x101;
        if (temp_2_128 != 0) {
            EnableInterrupts(0x1000B400, 0x101, 0x1000B420);
        }
        sp20 = 0;
        if (temp_21_31 != 0) {
            _doCSC(arg0, arg0->unkD8, temp_19_18);
        } else {
            _doCSC2(arg0, arg0->unkD8, temp_19_18);
        }
    }
    _dispatchMpegCallback(arg0->unk858, sp_slot, 3);
}
#endif /* NON_MATCHING */
