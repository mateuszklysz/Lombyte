#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/video/decoder/vi_buf_add_dma/FUN_0023bf70.s", FUN_0023bf70);
#else
#include "types.h"
struct M2c_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 pad_18[0x28];
    s32 unk40;
    s32 unk44;
};

extern u8 D_001E8B20[];
extern void SignalSema();
extern void WaitSema();
extern void func_0023AB78();
extern s32 func_0023BAF8();
extern void func_0023BBB0();
extern void func_0023BC20();
s32 vi_buf_add_dma(struct M2c_arg0 *arg0) __asm__("FUN_0023bf70");

s32 vi_buf_add_dma(struct M2c_arg0 *arg0) {
    s32 temp_19_59;
    s32 temp_2_112;
    s32 temp_2_48;
    s32 temp_3_38;
    s32 temp_3_55;
    s32 temp_7_36;
    s32 temp_8_52;
    s32 temp_8_72;
    s32 temp_hi_44;
    s32 temp_hi_49;
    s32 temp_hi_71;
    s32 var_16_62;
    s32 var_17_84;
    s32 var_21_31;
    s32 var_23_6;

    var_23_6 = 0;
    WaitSema(arg0->unk40);
    if (arg0->unk44 != 0) {
        goto block_2;
    }
    func_0023AB78(D_001E8B20);
    return 0;
block_2:
    func_0023BBB0(5);
    var_21_31 = *(s32 *)0x1000B400;
    temp_7_36 = arg0->unk8;
    temp_3_38 = arg0->unkC;
    temp_hi_44 = (s32) ((func_0023BAF8(arg0, *(s32 *)0x1000B410) + temp_7_36) - temp_3_38) % temp_7_36;
    temp_2_48 = arg0->unk10 - temp_hi_44;
    temp_hi_49 = (s32) (temp_3_38 + temp_hi_44) % temp_7_36;
    arg0->unk10 = temp_2_48;
    temp_8_52 = temp_2_48; temp_8_52 += temp_hi_49;
    arg0->unkC = temp_hi_49;
    temp_3_55 = arg0->unk14;
    temp_19_59 = (s32) ((temp_3_55 > -1) ? temp_3_55 : (temp_3_55 + 0x7FF)) >> 0xB;
    var_16_62 = temp_8_52 % temp_7_36;
    arg0->unk14 = (s32) (temp_3_55 - (temp_19_59 << 0xB));
    if (temp_19_59 <= 0) {
        goto block_4;
    }
    temp_hi_71 = (s32) (temp_8_52 + (temp_7_36 - 1)) % temp_7_36;
    temp_8_72 = arg0->unk4;
    var_23_6 = 1;
    func_0023BC20(temp_8_72 + (temp_hi_71 * 0x10), arg0->unk0 + (temp_hi_71 << 0xB), 3, 0x80, temp_8_72);
block_4:
    var_17_84 = 0;
    if (temp_19_59 <= 0) {
        goto block_7;
    }
loop_6:
    func_0023BC20(arg0->unk4 + (var_16_62 * 0x10), arg0->unk0 + (var_16_62 << 0xB), ((var_17_84 ^ (temp_19_59 - 1)) != 0) ? 3 : 0, 0x80);
    var_17_84 += 1;
    var_16_62 = (s32) (var_16_62 + 1) % (s32) arg0->unk8;
    if (var_17_84 < temp_19_59) {
        goto loop_6;
    }
block_7:
    temp_2_112 = arg0->unk10 + temp_19_59;
    arg0->unk10 = temp_2_112;
    if (temp_2_112 == 0) {
        goto block_11;
    }
    if (var_23_6 == 0) {
        goto block_10;
    }
    var_21_31 = (var_21_31 & 0x0FFFFFFF) | 0x30000000;
block_10:
    func_0023BBB0(var_21_31 | 0x100);
block_11:
    SignalSema(arg0->unk40);
    return 1;
}
#endif /* NON_MATCHING */
