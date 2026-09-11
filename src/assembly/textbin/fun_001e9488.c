/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001e9488
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001e9488/FUN_001e9488.s", FUN_001e9488);
#else
#include "rnc/assembly_textbin_fun_001e9488_types.h"
#include "types.h"










extern u8 D_00137B80[];
extern struct M2c_D_0013D290 D_0013D290;
extern struct M2c_D_0013E550 D_0013E550;
extern s32 D_0015ED80;
extern s32 D_0015EE88;
extern s32 D_0015EED8;
extern s32 D_0015F604;
extern struct M2c_D_001940C0 D_001940C0;
extern s32 func_00118A80();
extern s32 func_00120558();
extern s32 func_00120C30();
extern s32 func_00122298();
extern s32 func_00122E68();
extern s32 func_0012EE08();
extern s32 func_001F4A58();
extern s32 func_001F96F8();
extern s32 func_00200B10();
extern s32 func_002093D8();
extern s32 func_00215EE8();
extern s32 func_0022DCD0();
extern s32 func_0023A3B8();
extern void func_0012F1C8();
void FUN_001e9488(s32 arg0) {
    s32 var_17_22;
    s32 var_18_24;
    struct M2c_temp_4_20 *temp_4_20;
    struct M2c_temp_4_28 *temp_4_28;

    if (arg0 < 0) {
        goto block_9;
    }
    if (D_0015ED80 == 0) {
        goto block_3;
    }
    temp_4_20 = D_00137B80 + (arg0 * 8);
    var_17_22 = temp_4_20->unk1A9C;
    var_18_24 = temp_4_20->unk1A98;
    goto block_4;
block_3:
    temp_4_28 = D_00137B80 + (arg0 * 8);
    var_17_22 = temp_4_28->unk1A7C;
    var_18_24 = temp_4_28->unk1A78;
block_4:
    D_0015EED8 = 2;
    D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 8);
    func_00118A80(0, 2);
    func_0022DCD0();
    func_00215EE8();
    func_001F4A58(func_001F96F8(0xC));
    D_0015F604 = 1;
    func_00118A80(0);
    func_0022DCD0();
    func_00215EE8();
    func_0012EE08(0);
    goto loop_6;
block_5:
    func_002093D8();
loop_6:
    if (D_0013D290.unkD4 >= 3) {
        goto block_5;
    }
    if (D_0013D290.unkDC >= 0) {
        goto block_5;
    }
    func_0023A3B8(var_18_24, var_17_22, D_001940C0.unk1C + 0x100000, D_001940C0.unk1C + 0x400000, 0);
    func_00120C30(0);
    func_00122298(0);
    func_00120558(0, 0);
    func_00122E68(&func_0012F1C8);
    func_00200B10(0x01000000, D_0015EE88, 0x1B, 6, 6, 1);
    D_0015EED8 = 0;
    func_001F4A58(4);
    D_0015F604 = 0;
    D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 0x10);
block_9:
    return;
}
#endif /* NON_MATCHING */
