/*
STATE: C_NON_MATCHING
SYMBOL: _getAllRefs
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _getAllRefs; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_getAllRefs/_getAllRefs.s", _getAllRefs);
#else
#include "rnc/assembly_sdk_library__getAllRefs_types.h"
#include "types.h"






extern u8 D_00153710[];
extern u8 D_00153730[];
extern u8 D_00153750[];
extern s32 _Error1();
extern s32 _dualPrimeVector();
extern s32 _getRef0();
void _getAllRefs(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, struct M2c_arg5 *arg5, struct M2c_arg6 *arg6, s32 arg7) {    s32 sp24;
 u8 sp_slot[0x40];    s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 var_7_353;
    s32 var_7_50;
    s32 var_8_52;
    s32 var_9_357;
    s32 var_9_54;
    s32 temp_12_26;
    s32 temp_19_280;
    s32 temp_23_176;
    s32 temp_3_302;
    s32 temp_3_35;
    s32 temp_7_174;
    s32 var_16_21;
    s32 var_19_180;
    s32 var_19_243;
    s32 var_5_399;
    s32 var_5_423;
    s32 var_5_442;
    s32 var_5_49;
    s32 var_6_351;

    var_16_21 = 0;
    sp40 = arg3;
    temp_12_26 = arg3 & 8;
    *(s32 *)((u8 *)(((u8 *)arg0 + ((arg0->unk810 * 0x140)))) + 0x6BC) = 0;
    if ((temp_12_26 != 0) || (arg0->unk150 == 2)) {
        temp_3_35 = arg0->unk174;
        if (temp_3_35 == 3) {
            if ((arg4 == 2) || (temp_12_26 == 0)) {
                var_5_49 = arg0->unk1B8;
                var_7_50 = 0;
                var_8_52 = 0;
                var_9_54 = 0x10;
                goto block_27;
            }
            if (arg4 == 1) {
                _getRef0(arg0, arg0->unk1B8, arg6->unk0, 0, 0, 8, arg1, arg2, arg5->unk0, (s32) arg5->unk4 >> 1, arg4, 0);
                _getRef0(arg0, arg0->unk1B8, arg6->unk8, 1, 0, 8, arg1, arg2, arg5->unk10, (s32) arg5->unk14 >> 1, arg4, 0);
            } else {
                if (arg4 == temp_3_35) {
                    _dualPrimeVector(arg0, &sp20, arg7, arg5->unk0, (s32) arg5->unk4 >> 1);
                    _getRef0(arg0, arg0->unk1B8, 0, 0, 0, 8, arg1, arg2, arg5->unk0, (s32) arg5->unk4 >> 1, 1, 0);
                    _getRef0(arg0, arg0->unk1B8, 1, 0, 0, 8, arg1, arg2, sp20, sp24, 1, 1);
                    _getRef0(arg0, arg0->unk1B8, 1, 1, 0, 8, arg1, arg2, arg5->unk0, (s32) arg5->unk4 >> 1, 1, 0);
                    var_5_49 = arg0->unk1B8;
                    var_7_50 = 1;
                    var_8_52 = 0;
                    var_9_54 = 8;
                    goto block_27;
                }
                _Error1(arg0, D_00153710, arg4);
            }
        } else {
            temp_7_174 = arg0->unk1C8;
            temp_23_176 = temp_3_35 == 2;
            var_19_180 = 0;
            sp30 = temp_7_174;
            sp34 = arg0->unk1D8;
            sp38 = arg0->unk1CC;
            sp3C = arg0->unk1DC;
            if (arg0->unk150 == 2) {
                if (arg0->unk120 != 0) {
                    var_19_180 = temp_23_176 != arg6->unk0;
                }
            }
            if ((arg4 == 1) || (temp_12_26 == 0)) {
                var_5_49 = *(s32 *)((u8 *)(sp_slot + ((arg6->unk0 * 4) + (var_19_180 * 8))) + 0x30);
                var_7_50 = 0;
                goto block_26;
            }
            if (arg4 == 2) {
                _getRef0(arg0, *(&sp30 + ((arg6->unk0 * 4) + (var_19_180 * 8))), 0, 0, 0, 8, arg1, arg2, arg5->unk0, arg5->unk4, 0, 0);
                var_19_243 = 0;
                if (arg0->unk150 == arg4) {
                    if (arg0->unk120 != 0) {
                        var_19_243 = ((temp_23_176 ^ arg6->unk8) == 0) ? 0 : 1;
                    }
                }
                var_7_50 = 0;
                var_5_49 = *(&sp30 + ((arg6->unk8 * 4) + (var_19_243 * 8)));
                var_8_52 = 8;
                var_9_54 = 8;
                goto block_27;
            }
            if (arg4 == 3) {
                temp_19_280 = (arg0->unk120 == 0) ? 0 : 1;
                _dualPrimeVector(arg0, &sp20, arg7, arg5->unk0, arg5->unk4);
                _getRef0(arg0, (&sp30)[temp_23_176], 0, 0, 0, 0x10, arg1, arg2, arg5->unk0, arg5->unk4, 0, 0);
                temp_3_302 = temp_19_280 * 8;
                var_5_49 = *(&sp30 + ((temp_23_176 != 0) ? temp_3_302 : (temp_3_302 + 4)));
                var_7_50 = 0;
block_26:
                var_8_52 = 0;
                var_9_54 = 0x10;
block_27:
                _getRef0(arg0, var_5_49, 0, var_7_50, var_8_52, var_9_54, arg1, arg2);
            } else {
                _Error1(arg0, D_00153730, arg4, temp_7_174);
            }
        }
        var_16_21 = 1;
    }
    if (sp40 & 4) {
        if (arg0->unk174 == 3) {
            if (arg4 == 2) {
                var_6_351 = 0;
                var_7_353 = 0;
                var_9_357 = 0x10;
            } else {
                _getRef0(arg0, arg0->unk1BC, arg6->unk4, 0, 0, 8, arg1, arg2, arg5->unk8, (s32) arg5->unkC >> 1, 1, var_16_21);
                var_7_353 = 1;
                var_9_357 = 8;
                var_6_351 = arg6->unkC;
            }
            _getRef0(arg0, arg0->unk1BC, var_6_351, var_7_353, 0, var_9_357, arg1, arg2);
            return;
        }
        if (arg4 == 1) {
            if (arg6->unk4 == 0) {
                var_5_399 = arg0->unk1CC;
            } else {
                var_5_399 = arg0->unk1DC;
            }
            _getRef0(arg0, var_5_399, 0, 0, 0, 0x10, arg1, arg2, arg5->unk8, arg5->unkC, 0, var_16_21);
            return;
        }
        if (arg4 == 2) {
            if (arg6->unk4 == 0) {
                var_5_423 = arg0->unk1CC;
            } else {
                var_5_423 = arg0->unk1DC;
            }
            _getRef0(arg0, var_5_423, 0, 0, 0, 8, arg1, arg2, arg5->unk8, arg5->unkC, 0, var_16_21);
            if (arg6->unkC == 0) {
                var_5_442 = arg0->unk1CC;
            } else {
                var_5_442 = arg0->unk1DC;
            }
            _getRef0(arg0, var_5_442, 0, 0, 8, 8, arg1, arg2, arg5->unk18, arg5->unk1C, 0, var_16_21);
            return;
        }
        _Error1(arg0, D_00153750, arg4);
    }
}
#endif /* NON_MATCHING */
