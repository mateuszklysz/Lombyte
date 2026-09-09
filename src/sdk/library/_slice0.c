#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x11C];
    s32 unk11C;
    u8 pad_120[0x6F0];
    s32 unk810;
};

extern u8 D_00153848[];
extern s32 _Error();
extern s32 _decMB0();
extern s32 _doMC();
extern s32 _mbAddressIncrement();
extern s32 _motionComp0();
extern s32 _peepBit();
extern s32 _skipMB0();
extern s32 _sliceA0();
extern s32 _waitBdecOut();
s32 _slice0(struct M2c_arg0 *arg0, s32 arg1) {
u8 sp_slot[0x40];
    register s32 block_index asm("$2");
    register s32 temp_5_31 asm("$5");
    register s32 block_stride asm("$3");
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 var_2_15;

    sp40 = 0;
    sp44 = 0;
    var_2_15 = _sliceA0(arg0, arg1, &sp40, &sp44, sp_slot);
    if (var_2_15 != 0) {
        goto block_27;
    }
    arg0->unk11C = 0;
    __asm__ volatile("nop");
loop_2:
    if (sp40 >= arg1) {
        goto block_4;
    }
    goto block_6;
block_4:
    var_2_15 = 0;
    goto block_26;
block_6:
    block_stride = 0x140;
    block_index = arg0->unk810;
    temp_5_31 = block_index * block_stride;
    *(s32 *)((u8 *)((temp_5_31 + (s32)arg0)) + 0x6CC) = 0;
    if (_waitBdecOut(arg0, temp_5_31) != 0) {
        goto block_8;
    }
    var_2_15 = 2;
    goto block_26;
block_8:
    if (sp44 != 0) {
        goto block_14;
    }
    if (_peepBit(arg0, 0x17) == 0) {
        goto block_11;
    }
    if (arg0->unk11C == 0) {
        goto block_12;
    }
block_11:
    arg0->unk11C = 0;
    var_2_15 = 3;
    goto block_26;
block_12:
    sp44 = _mbAddressIncrement(arg0);
    if (arg0->unk11C != 0) {
        goto block_18;
    }
block_14:
    if (sp40 < arg1) {
        goto block_16;
    }
    _Error(arg0, D_00153848);
    var_2_15 = 2;
    goto block_26;
block_16:
    if (sp44 != 1) {
        goto block_19;
    }
    if (_decMB0(arg0, &sp48, &sp4C, &sp50, sp_slot, (s32 *)(sp_slot + 0x20), (s32 *)(sp_slot + 0x30)) != 0) {
        goto block_21;
    }
block_18:
    arg0->unk11C = 0;
    var_2_15 = 1;
    goto block_26;
block_19:
    if (_skipMB0(arg0, sp_slot, &sp4C, (s32 *)(sp_slot + 0x20), &sp48) == 0) {
        goto block_22;
    }
block_21:
    if (_motionComp0(arg0, sp40, sp44, sp48, sp4C, sp_slot, (s32 *)(sp_slot + 0x20), (s32 *)(sp_slot + 0x30)) != 0) {
        goto block_23;
    }
block_22:
    arg0->unk11C = 0;
    var_2_15 = 2;
    goto block_26;
block_23:
    if (sp40 == 0) {
        goto block_25;
    }
    _doMC(arg0, arg0->unk810 ^ 1);
block_25:
    sp40 += 1;
    arg0->unk810 = (s32) (arg0->unk810 ^ 1);
    sp44 -= 1;
    goto loop_2;
block_26:
block_27:
    return var_2_15;
}
