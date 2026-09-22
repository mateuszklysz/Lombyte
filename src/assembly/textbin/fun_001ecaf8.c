#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ecaf8/FUN_001ecaf8.s", FUN_001ecaf8);
#else
#include "rnc/assembly_textbin_fun_001ecaf8_types.h"
#include "types.h"






extern u8 D_0013F490[];
extern s32 D_0015ED60;
extern s32 D_00187080;
extern u8 D_00187290[];
extern struct M2c_D_0018C318 D_0018C318;
extern s32 func_001F9A10();
extern s32 func_001FA2B8();
extern s32 func_001FA400();
extern s32 func_001FA4F8();
extern f32 func_002133D0();
extern s32 func_002144D8();
s32 FUN_001ecaf8(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
u8 sp_slot[0xC0];    s32 sp10;
    f32 temp_f0_87;
    f32 temp_f1_41;
    f32 temp_f20_35;
    f32 temp_f2_110;
    f32 temp_f2_43;
    f32 temp_f2_98;
    f32 temp_f3_45;
    s32 var_2_24;
    s32 *temp_16_71;
    s32 *temp_4_33;

    if ((arg1->unkC != 1.0f) || (var_2_24 = 1, (arg1->unk0 != 1.0f))) {
        temp_4_33 = ((u8 *)arg1 + (0x30));
        temp_f20_35 = func_002133D0(0, 0x3F800000, arg1->unkC);
        func_001F9A10(temp_4_33, D_0013F490, temp_4_33);
        temp_f1_41 = arg1->unk30;
        temp_f2_43 = arg1->unk34;
        temp_f3_45 = arg1->unk38;
        arg1->unk40 = (f32) (temp_f1_41 + ((arg0->unk30 - temp_f1_41) * temp_f20_35));
        arg1->unk44 = (f32) (temp_f2_43 + ((arg0->unk34 - temp_f2_43) * temp_f20_35));
        arg1->unk48 = (f32) (temp_f3_45 + ((arg0->unk38 - temp_f3_45) * temp_f20_35));
        if (D_0018C318.unk14 == 0) {
            D_00187080 = (s64)(u64) arg1->unk40;
        }
        func_002144D8(sp_slot, arg0);
        temp_16_71 = ((u8 *)arg1 + (0x50));
        func_001FA400(temp_16_71, ((u8 *)arg1 + (0x20)), sp_slot, func_002133D0(0, 0x3F800000, arg1->unk0));
        func_001FA4F8(temp_16_71, &sp10);
        temp_f0_87 = D_0015ED60;
        if (D_0018C318.unk14 == 0) {
            func_001FA2B8(D_00187290, &sp10);
        }
        temp_f2_98 = arg1->unkC + (arg1->unk10 * temp_f0_87);
        arg1->unkC = temp_f2_98;
        if (temp_f2_98 > 1.0f) {
            arg1->unkC = 1.0f;
        }
        temp_f2_110 = arg1->unk0 + (arg1->unk4 * D_0015ED60);
        arg1->unk0 = temp_f2_110;
        if (temp_f2_110 > 1.0f) {
            arg1->unk0 = 1.0f;
        }
        var_2_24 = 0;
    }
    return var_2_24;
}
#endif /* NON_MATCHING */
