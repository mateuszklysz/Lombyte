/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00227ed0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00227ed0/FUN_00227ed0.s", FUN_00227ed0);
#else
#include "rnc/assembly_textbin_fun_00227ed0_types.h"
#include "types.h"


extern u32 D_001603A0[];
extern s32 func_001F9DF8();
void FUN_00227ed0(struct M2c_arg0 *arg0) {
    s32 var_11_13;
    s32 var_11_200;
    s32 var_11_342;
    s32 var_12_5;
    s32 var_13_6;

    var_12_5 = arg0->unk4;
    var_13_6 = arg0->unk8;
    /* m2c-unknown:  unknown instruction: lqc2 $vf27, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf25, 0x20($a0)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf28, ($at)  */
    var_11_13 = 0;
    /* m2c-unknown:  unknown instruction: lqc2 $vf30, ($at)  */
    /* m2c-unknown:  unknown instruction: vsub.xyz $vf1, $vf25, $vf27  */
    /* m2c-unknown:  unknown instruction: vopmula.xyz $acc, $vf1, $vf30  */
    /* m2c-unknown:  unknown instruction: vopmsub.xyz $vf24, $vf30, $vf1  */
    /* m2c-unknown:  unknown instruction: vsub.xyz $vf30, $vf0, $vf30  */
    /* m2c-unknown:  unknown instruction: vaddw.xyz $vf20, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: vmul.xyz $vf1, $vf24, $vf24  */
    /* m2c-unknown:  unknown instruction: vadday.x $acc, $vf1, $vf1y  */
    /* m2c-unknown:  unknown instruction: vmaddz.x $vf21, $vf20, $vf1z  */
    /* m2c-unknown:  unknown instruction: vwaitq  */
    /* m2c-unknown:  unknown instruction: vaddq.x $vf21, $vf0, $q  */
    /* m2c-unknown:  unknown instruction: vaddw.x $vf1, $vf21, $vf25w  */
    /* m2c-unknown:  unknown instruction: vsubw.x $vf1, $vf1, $vf27w  */
    /* m2c-unknown:  unknown instruction: vnop  */
    /* m2c-unknown:  unknown instruction: vnop  */
    /* m2c-unknown:  unknown instruction: vnop  */
    /* m2c-unknown:  unknown instruction: vnop  */
    if (!(0 /*  unknown instruction: cfc2.ni $at, $vi17  */ & 0x80)) {
        /* m2c-unknown:  unknown instruction: vsub.w $vf1, $vf27, $vf25  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vnop  */
        if (!(0 /*  unknown instruction: cfc2.ni $at, $vi17  */ & 1)) {
            /* m2c-unknown:  unknown instruction: vmulw.x $vf1, $vf21, $vf25w  */
            /* m2c-unknown:  unknown instruction: vsub.w $vf1, $vf27, $vf25  */
            /* m2c-unknown:  unknown instruction: vdiv $q, $vf1x, $vf1w  */
            /* m2c-unknown:  unknown instruction: vwaitq  */
            /* m2c-unknown:  unknown instruction: vmulq.w $vf1, $vf0, $q  */
            /* m2c-unknown:  unknown instruction: vdiv $q, $vf25w, $vf1w  */
            /* m2c-unknown:  unknown instruction: vwaitq  */
            /* m2c-unknown:  unknown instruction: vaddq.x $vf1, $vf0, $q  */
            func_001F9DF8(0x70000000, 0, 0 /*  unknown instruction: qmfc2.ni $at, $vf1  */);
            /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf1  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf2  */
            /* m2c-unknown:  unknown instruction: vsub.x $vf16, $vf2, $vf1  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf2  */
            /* m2c-unknown:  unknown instruction: vsub.x $vf1, $vf2, $vf16  */
            /* m2c-unknown:  unknown instruction: vadd.x $vf17, $vf1, $vf1  */
            /* m2c-unknown:  unknown instruction: vadd.x $vf18, $vf16, $vf17  */
            /* m2c-unknown:  unknown instruction: vadd.x $vf19, $vf16, $vf16  */
        } else {
            /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf16  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf2  */
            /* m2c-unknown:  unknown instruction: vsub.x $vf1, $vf2, $vf16  */
            /* m2c-unknown:  unknown instruction: vadd.x $vf17, $vf1, $vf1  */
            /* m2c-unknown:  unknown instruction: vadd.x $vf18, $vf16, $vf17  */
            /* m2c-unknown:  unknown instruction: vadd.x $vf19, $vf16, $vf16  */
        }
        /* m2c-unknown:  unknown instruction: vmul.xyz $vf2, $vf24, $vf24  */
        /* m2c-unknown:  unknown instruction: vadday.x $acc, $vf2, $vf2y  */
        /* m2c-unknown:  unknown instruction: vmaddz.x $vf2, $vf20, $vf2z  */
        /* m2c-unknown:  unknown instruction: vrsqrt $q, $vf0w, $vf2x  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vnop  */
        /* m2c-unknown:  unknown instruction: vwaitq  */
        /* m2c-unknown:  unknown instruction: vmulq.xyz $vf24, $vf24, $q  */
        /* m2c-unknown:  unknown instruction: vmulw.xyz $vf22, $vf24, $vf27w  */
        /* m2c-unknown:  unknown instruction: vmulw.xyz $vf23, $vf24, $vf25w  */
        if (var_12_5 != 0) {
            /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vadd.x $vf1, $vf1, $vf16  */
            /* m2c-unknown:  unknown instruction: qmfc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc90  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.x $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc80  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: vsuby.w $vf31, $vf0, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.xyz $vf29, $vf30, $vf31x  */
            /* m2c-unknown:  unknown instruction: vmulx.x $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.x $vf1, $vf1, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.y $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubz.y $vf1, $vf1, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmulx.z $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf1, $vf1, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmuly.x $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddz.x $vf2, $vf2, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmuly.y $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.y $vf2, $vf2, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmuly.z $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubx.z $vf2, $vf2, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.x $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsuby.x $vf3, $vf3, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmulz.y $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf3, $vf3, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.z $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf3, $vf3, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf1, $vf22x  */
            /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf2, $vf22y  */
            /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf26, $vf3, $vf22z  */
            /* m2c-unknown:  unknown instruction: qmfc2.ni $at, $vf17  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc90  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.x $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc80  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: vsuby.w $vf31, $vf0, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.xyz $vf29, $vf30, $vf31x  */
            /* m2c-unknown:  unknown instruction: vmulx.x $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.x $vf1, $vf1, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.y $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubz.y $vf1, $vf1, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmulx.z $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf1, $vf1, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmuly.x $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddz.x $vf2, $vf2, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmuly.y $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.y $vf2, $vf2, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmuly.z $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubx.z $vf2, $vf2, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.x $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsuby.x $vf3, $vf3, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmulz.y $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf3, $vf3, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.z $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf3, $vf3, $vf31y  */
            do {
                /* m2c-unknown:  unknown instruction: vadd.xyz $vf5, $vf26, $vf27  */
                /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf1, $vf26x  */
                /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf2, $vf26y  */
                /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf26, $vf3, $vf26z  */
                /* m2c-unknown:  unknown instruction: sqc2 $vf5, ($a6)  */
                /* m2c-unknown:  unknown instruction: vadd.xyz $vf5, $vf5, $vf28  */
                var_12_5 -= 1;
                var_11_200 = 0 /*  Read from unset register $a7  */ + 1;
                /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x10($a6)  */
            } while (var_12_5 != 0);
        } else {
            /* m2c-unknown:  unknown instruction: vsub.xyz $vf1, $vf27, $vf22  */
            /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a6)  */
            /* m2c-unknown:  unknown instruction: vadd.xyz $vf1, $vf1, $vf28  */
            /* m2c-unknown:  unknown instruction: sqc2 $vf1, 0x10($a6)  */
            /* m2c-unknown:  unknown instruction: vadd.xyz $vf1, $vf27, $vf22  */
            /* m2c-unknown:  unknown instruction: sqc2 $vf1, 0x20($a6)  */
            /* m2c-unknown:  unknown instruction: vadd.xyz $vf1, $vf1, $vf28  */
            /* m2c-unknown:  unknown instruction: sqc2 $vf1, 0x30($a6)  */
            var_11_200 = 0 /*  Read from unset register $a7  */ + 2;
        }
        if (var_13_6 != 0) {
            /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vadd.x $vf1, $vf1, $vf18  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf2  */
            /* m2c-unknown:  unknown instruction: vsub.x $vf1, $vf1, $vf2  */
            /* m2c-unknown:  unknown instruction: qmfc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc90  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.x $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc80  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: vsuby.w $vf31, $vf0, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.xyz $vf29, $vf30, $vf31x  */
            /* m2c-unknown:  unknown instruction: vmulx.x $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.x $vf1, $vf1, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.y $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubz.y $vf1, $vf1, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmulx.z $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf1, $vf1, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmuly.x $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddz.x $vf2, $vf2, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmuly.y $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.y $vf2, $vf2, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmuly.z $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubx.z $vf2, $vf2, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.x $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsuby.x $vf3, $vf3, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmulz.y $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf3, $vf3, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.z $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf3, $vf3, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf1, $vf23x  */
            /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf2, $vf23y  */
            /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf26, $vf3, $vf23z  */
            /* m2c-unknown:  unknown instruction: qmfc2.ni $at, $vf19  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc90  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.x $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc80  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: vsuby.w $vf31, $vf0, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.xyz $vf29, $vf30, $vf31x  */
            /* m2c-unknown:  unknown instruction: vmulx.x $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.x $vf1, $vf1, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.y $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubz.y $vf1, $vf1, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmulx.z $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf1, $vf1, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmuly.x $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddz.x $vf2, $vf2, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmuly.y $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.y $vf2, $vf2, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmuly.z $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubx.z $vf2, $vf2, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.x $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsuby.x $vf3, $vf3, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmulz.y $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf3, $vf3, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.z $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf3, $vf3, $vf31y  */
            do {
                /* m2c-unknown:  unknown instruction: vadd.xyz $vf5, $vf26, $vf25  */
                /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf1, $vf26x  */
                /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf2, $vf26y  */
                /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf26, $vf3, $vf26z  */
                /* m2c-unknown:  unknown instruction: sqc2 $vf5, ($a6)  */
                /* m2c-unknown:  unknown instruction: vadd.xyz $vf5, $vf5, $vf28  */
                var_11_200 += 1;
                var_13_6 -= 1;
                /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x10($a6)  */
            } while (var_13_6 != 0);
        } else {
            /* m2c-unknown:  unknown instruction: vadd.xyz $vf1, $vf25, $vf23  */
            /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a6)  */
            /* m2c-unknown:  unknown instruction: vadd.xyz $vf1, $vf1, $vf28  */
            /* m2c-unknown:  unknown instruction: sqc2 $vf1, 0x10($a6)  */
            /* m2c-unknown:  unknown instruction: vsub.xyz $vf1, $vf25, $vf23  */
            /* m2c-unknown:  unknown instruction: sqc2 $vf1, 0x20($a6)  */
            /* m2c-unknown:  unknown instruction: vadd.xyz $vf1, $vf1, $vf28  */
            /* m2c-unknown:  unknown instruction: sqc2 $vf1, 0x30($a6)  */
            var_11_200 += 2;
        }
        /* m2c-unknown:  unknown instruction: lqc2 $vf5, ($at)  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf5, ($a6)  */
        /* m2c-unknown:  unknown instruction: lqc2 $vf5, 0x10($at)  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x10($a6)  */
        var_11_342 = var_11_200 + 1;
    } else {
        if (var_12_5 != 0) {
            /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc90  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.x $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf1  */
            /* m2c-unknown:  unknown instruction: vcallms 0xc80  */
            /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf31, $vf0, $vf1x  */
            /* m2c-unknown:  unknown instruction: vsuby.w $vf31, $vf0, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.xyz $vf29, $vf30, $vf31x  */
            /* m2c-unknown:  unknown instruction: vmulx.x $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.x $vf1, $vf1, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmulx.y $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubz.y $vf1, $vf1, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmulx.z $vf1, $vf30, $vf30x  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf1, $vf1, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf1, $vf1, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmuly.x $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddz.x $vf2, $vf2, $vf29z  */
            /* m2c-unknown:  unknown instruction: vmuly.y $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.y $vf2, $vf2, $vf31y  */
            /* m2c-unknown:  unknown instruction: vmuly.z $vf2, $vf30, $vf30y  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf2, $vf2, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsubx.z $vf2, $vf2, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.x $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.x $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vsuby.x $vf3, $vf3, $vf29y  */
            /* m2c-unknown:  unknown instruction: vmulz.y $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.y $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddx.y $vf3, $vf3, $vf29x  */
            /* m2c-unknown:  unknown instruction: vmulz.z $vf3, $vf30, $vf30z  */
            /* m2c-unknown:  unknown instruction: vmulw.z $vf3, $vf3, $vf31w  */
            /* m2c-unknown:  unknown instruction: vaddy.z $vf3, $vf3, $vf31y  */
            /* m2c-unknown:  unknown instruction: lqc2 $vf26, ($at)  */
            /* m2c-unknown:  unknown instruction: vmulw.xyz $vf26, $vf26, $vf27w  */
            do {
                /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf1, $vf26x  */
                /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf2, $vf26y  */
                /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf26, $vf3, $vf26z  */
                /* m2c-unknown:  unknown instruction: vadd.xyz $vf5, $vf26, $vf27  */
                /* m2c-unknown:  unknown instruction: sqc2 $vf5, ($a6)  */
                /* m2c-unknown:  unknown instruction: vadd.xyz $vf5, $vf5, $vf28  */
                /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x10($a6)  */
                var_12_5 -= 1;
                var_11_13 += 1;
            } while (var_12_5 != 0);
        }
        /* m2c-unknown:  unknown instruction: lqc2 $vf5, ($at)  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf5, ($a6)  */
        /* m2c-unknown:  unknown instruction: lqc2 $vf5, 0x10($at)  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x10($a6)  */
        var_11_342 = var_11_13 + 1;
    }
    D_001603A0[0] = var_11_342;
}
#endif /* NON_MATCHING */
