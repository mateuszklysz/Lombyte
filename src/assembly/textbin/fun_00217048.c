#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00217048/FUN_00217048.s", FUN_00217048);
#else
#include "types.h"
struct M2c_D_0013C940 {
    u8 pad_0[0x194];
    s32 unk194;
    s32 unk198;
    s32 unk19C;
};

struct M2c_D_001CD760 {
    s32 unk0;
    s32 unk4;
};

extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_001CD760 D_001CD760;
extern s32 sceDbcInit();
extern s32 scePad2CreateSocket();
extern s32 scePad2Init();
void FUN_00217048(void) {
    s32 temp_2_20;

    sceDbcInit();
    scePad2Init(0);
    D_001CD760.unk0 = 2;
    D_001CD760.unk4 = 0;
    temp_2_20 = scePad2CreateSocket(&D_001CD760, &D_0013C940);
    __asm__ volatile ("" : "+r" (temp_2_20));
    D_001CD760.unk0 = 2;
    D_001CD760.unk4 = 1;
    D_0013C940.unk194 = temp_2_20;
    D_0013C940.unk19C = 0;
    D_0013C940.unk198 = 0;
}
#endif /* NON_MATCHING */
