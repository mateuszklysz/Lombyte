#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/update_all_point_lights/FUN_00201a28.s", FUN_00201a28);
#else
#include "rnc/assembly_textbin_update_all_point_lights_types.h"
#include "types.h"




extern s32 D_00187098;
extern struct M2c_D_0019BDC0 D_0019BDC0;
extern u8 D_0019C1C0[];
extern u8 D_0019C3C0[];
extern s32 func_001F9B48();
extern s32 func_001F9DC8();
extern s32 func_001F9DE0();
extern s32 func_001FA580();
extern s32 func_00201BA8();
extern s32 func_00201F58();
void update_all_point_lights(void) __asm__("FUN_00201a28");

void update_all_point_lights(void) {
    f32 temp_f0_33;
    s64 *var_18_57;
    s32 temp_2_72;
    s32 var_19_21;
    struct M2c_var_17_55 *var_17_55;

    var_19_21 = 0;
    D_0019BDC0.unk34C = -0.3f;
    D_0019BDC0.unk348 = 0.8f;
    D_0019BDC0.unk340 = 0.8f;
    D_0019BDC0.unk344 = 0.8f;
    temp_f0_33 = func_001FA580(D_00187098, 0xBF4CCCCD);
    D_0019BDC0.unk350 = (f32) (func_001F9DC8(temp_f0_33) * 0.866f);
    D_0019BDC0.unk354 = (f32) (func_001F9DE0(temp_f0_33) * 0.866f);
    var_17_55 = D_0019C3C0 + 0x20;
    D_0019BDC0.unk358 = -0.5f;
    var_18_57 = D_0019C1C0 + 0x10;
    D_0019BDC0.unk35C = 0;
    do {
        if ((*(s32 *)((u8 *)var_17_55 - 0x10) != 0) && (func_001F9B48(var_18_57, var_17_55) > 8.0f)) {
            var_17_55->unk0 = (s64) *var_18_57;
            temp_2_72 = *(s32 *)((u8 *)var_17_55 - 0x10);
            if (temp_2_72 == 1) {
                func_00201BA8(var_19_21);
                *(s32 *)((u8 *)var_17_55 - 0x10) = 2;
            } else if (temp_2_72 == 2) {
                func_00201F58(var_19_21);
            }
        }
        var_19_21 += 1;
        var_17_55 += 0x30;
        var_18_57 += 0x20;
    } while (var_19_21 < 8);
}
#endif /* NON_MATCHING */
