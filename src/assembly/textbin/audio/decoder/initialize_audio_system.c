#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/decoder/initialize_audio_system/FUN_0023a7c0.s", FUN_0023a7c0);
#else
#include "types.h"
struct M2c_D_0016120C {
    u8 pad_0[0xD90F8];
    s32 unkD90F8;
    s32 unkD90FC;
};

extern s32 D_00161208;
extern struct M2c_D_0016120C *D_0016120C;
extern s32 D_00161210;
extern u8 D_00166C00[];
extern u8 D_001E8AF0[];
extern u8 D_0023B540[];
extern s32 AddDmacHandler();
extern s32 AddIntcHandler();
extern s32 CreateThread();
extern s32 DebugPrint();
extern s32 _StartThread();
extern s32 func_00119090();
extern s32 func_00119160();
extern s32 func_0023ABD0();
extern s32 func_0023B940();
extern s32 func_0023BA48();
extern s32 func_0023CAC8();
extern s32 func_0023CBD0();
extern void func_0023D190();
extern s32 sceMpegInit();
extern void func_0023B3D8();
extern void func_0023B5F0();
extern void func_0023B728();
extern void func_0023CE28();
s32 initialize_audio_system(s32 arg0, s32 arg1, s32 arg2) __asm__("FUN_0023a7c0");

s32 initialize_audio_system(s32 arg0, s32 arg1, s32 arg2) {
u8 sp_slot[0x80];    s32 temp_2_115;
    s32 var_17_133;

    *(s32 *)0x1000E000 |= 3;
    *(s32 *)0x1000E010 = 4;
    func_0023B940(D_0016120C, 0x1000E010, 4);
    sceMpegInit();
    func_0023CAC8(D_0016120C + 0xD9048, D_00161208 + 0x1C85C0, 0xEB768, D_0016120C + 0x52040, D_00161208 + 0x1C7180, 0x100, D_0016120C + 0xD6040, 0x200);
    func_0023ABD0(D_0016120C + 0xD9100, D_0016120C + 0x50040, 0x2000, D_00161208 + 0x1C8190);
    func_0023CBD0(D_0016120C + 0xD9048, 0, 0, &func_0023B5F0, D_0016120C);
    func_0023CBD0(D_0016120C + 0xD9048, 3, arg2, &func_0023B728, D_0016120C);
    func_0023D190(D_0016120C + 0xD9168, (D_00161208 & 0x0FFFFFFF) | 0x20000000, D_00161208 + 0x1A0000, 2);
    temp_2_115 = CreateThread(sp_slot, 1, D_00166C00, &func_0023CE28, D_0016120C + 0xD2040, 0x4000, D_00166C00, 1, 0);
    __asm__ volatile ("" : "+r" (temp_2_115));
    *(s32 *)0x161210 = temp_2_115;
    _StartThread(temp_2_115, D_0016120C + 0xD9048);
    var_17_133 = 1;
    if (func_0023BA48(D_0016120C + 0xD9040, arg0, arg1) == 0) {
        var_17_133 = 0;
        DebugPrint(D_001E8AF0);
    }
    D_0016120C->unkD90FC = AddIntcHandler(2, &func_0023B3D8, 0);
    func_00119090(2);
    D_0016120C->unkD90F8 = AddDmacHandler(2, D_0023B540, 0);
    func_00119160(2);
    return var_17_133;
}
#endif /* NON_MATCHING */
