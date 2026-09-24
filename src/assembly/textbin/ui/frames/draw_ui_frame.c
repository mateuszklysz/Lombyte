#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/frames/draw_ui_frame/FUN_001f5f18.s", FUN_001f5f18);
#else
#include "types.h"
extern void func_001F52A0();
void draw_ui_frame(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) __asm__("FUN_001f5f18");

void draw_ui_frame(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 temp_16_13;
    s32 temp_17_44;
    s32 temp_18_45;
    s32 temp_19_52;
    s32 temp_20_26;
    s32 temp_20_53;
    s32 temp_21_37;
    s32 temp_23_27;
    s32 temp_2_28;
    s32 temp_30_36;

    temp_16_13 = (arg4 << 0x18) | 0x40404;
    sp0 = arg0 + 1;
    temp_20_26 = arg2 - 2;
    func_001F52A0(temp_16_13);
    temp_23_27 = arg0 + 2;
    temp_2_28 = arg1 - 1;
    sp4 = temp_2_28;
    temp_30_36 = arg1 - 2;
    func_001F52A0(sp0, temp_2_28, temp_20_26, arg2, temp_16_13);
    temp_21_37 = arg2 - 3;
    temp_17_44 = arg0 + 4;
    func_001F52A0(temp_23_27, temp_30_36, temp_21_37, temp_20_26, temp_16_13);
    temp_18_45 = arg1 - 4;
    temp_19_52 = arg3 + 2;
    func_001F52A0(temp_17_44, temp_18_45, arg2 - 4, temp_21_37, temp_16_13);
    temp_20_53 = arg3 + 3;
    func_001F52A0(sp0, sp4, arg3, temp_19_52, temp_16_13);
    func_001F52A0(temp_23_27, temp_30_36, temp_19_52, temp_20_53, temp_16_13);
    func_001F52A0(temp_17_44, temp_18_45, temp_20_53, arg3 + 4, temp_16_13);
}
#endif /* NON_MATCHING */
