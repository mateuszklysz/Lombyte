/*
STATE: C_EXACT
SYMBOL: _multadd
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_var_17_12 {
    u8 pad_0[0x4];
    s32 unk4;
    s32 unk8;
    u8 pad_C[0x4];
    s32 unk10;
};

extern s32 InsertLinkObject();
extern s32 _Balloc();
extern s32 memcpy();

s32 *_multadd(s32 arg0, s32 *arg1, s32 arg2, u32 arg3) {
    register s32 temp_18_17 __asm__("s2");
    s32 temp_2_31;
    s32 temp_4_30;
    s32 temp_6_22;
    s32 var_9_6;
    u32 *var_10_14;
    u32 *var_7_16;
    u32 temp_3_20;
    u32 temp_3_29;
    u32 temp_4_27;
    register u32 var_19_10 __asm__("s3");
    u32 write_address;
    s32 *temp_2_45;
    struct M2c_var_17_12 *var_17_12;
    s32 *var_2_38;
    register s32 arg0_s4 __asm__("s4");
    register s32 *arg1_s1 __asm__("s1");
    register u32 arg3_s3 __asm__("s3");
    register s32 capacity_ok_v0 __asm__("v0");

    arg0_s4 = arg0;
    arg1_s1 = arg1;
    arg3_s3 = arg3;
    var_9_6 = 0;
    var_19_10 = arg3_s3;
    var_17_12 = arg1_s1;
    var_10_14 = ((u8 *)var_17_12 + (0x14));
    var_7_16 = var_10_14;
    temp_18_17 = var_17_12->unk10;
    do {
        temp_3_20 = *var_7_16;
        var_9_6 += 1;
        temp_6_22 = var_9_6 < temp_18_17;
        temp_4_27 = ((temp_3_20 & 0xFFFF) * arg2) + var_19_10;
        temp_3_29 = ((temp_3_20 >> 0x10) * arg2) + (temp_4_27 >> 0x10);
        temp_4_30 = temp_4_27 & 0xFFFF;
        temp_2_31 = temp_3_29 << 0x10;
        var_19_10 = temp_3_29 >> 0x10;
        *var_7_16 = temp_2_31 + temp_4_30;
        var_7_16 += 1;
    } while (temp_6_22 != 0);
    var_2_38 = var_17_12;
    if (var_19_10 != 0) {
        capacity_ok_v0 = temp_18_17 < var_17_12->unk8;
        if (capacity_ok_v0 == 0) {
            temp_2_45 = _Balloc(arg0_s4, var_17_12->unk4 + 1, temp_6_22, var_7_16, arg2, var_9_6, var_10_14);
            memcpy(((u8 *)temp_2_45 + 0xC), ((u8 *)var_17_12 + (0xC)), (var_17_12->unk10 * 4) + 8);
            InsertLinkObject(arg0_s4, var_17_12);
            var_17_12 = temp_2_45;
            var_10_14 = ((u8 *)var_17_12 + (0x14));
        }
        write_address = (u32)var_10_14;
        write_address += temp_18_17 * 4;
        *(u32 *)write_address = var_19_10;
        temp_18_17 += 1;
        var_17_12->unk10 = temp_18_17;
        var_2_38 = var_17_12;
    }
    return var_2_38;
}
