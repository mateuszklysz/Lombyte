#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceWrite; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/scewrite/sceWrite.s", sceWrite);
#else

#include "types.h"

/* D_00156880: the 0x30-byte request block handed to the IOP.
   unk0  sema id (negated while queued)   unk4  &loc[8] (CreateSema out)
   unk8  4                                  unkC  iob->unk0
   unk10 buffer (arg1)                      unk14 length (arg2)
   unk18 clamped transfer length            unk2C (iob - D_00157D80) >> 4
   0x1C..0x2B payload staging area (16 bytes)                            */
struct M2c_D_00156880 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad_1C[0x10];
    s32 unk2C;
};

/* get_iob() result: the IOP buffer descriptor, unk4 is the mode/flag word */
struct M2c_temp_16_19 {
    s32 unk0;
    s32 unk4;
};

extern u8 D_0012FC10[];                 /* 0x20-entry IOP queue                */
extern u8 D_0012FC94[];                 /* wait for the file-system thread     */
extern u8 D_0012FCA4[];                 /* queue mutex sema id                 */
extern struct M2c_D_00156880 D_00156880;
extern u8 D_001574C0[];                 /* non-queued completion slot          */
extern u8 D_00157D80[];                 /* iob pool base                       */
extern u8 D_00157F80[];                 /* sceSifCallRpc packet buffer         */
extern s32 CreateSema();
extern s32 DeleteSema();
extern s32 ReadQueueStatus();
extern s32 SignalSema();
extern s32 WaitSema();
extern void _sceFsWaitS();
extern struct M2c_temp_16_19 *get_iob();
extern s32 sceSifCallRpc();
extern s32 sceSifWriteBackDCache();

s32 sceWrite(s32 arg0, u32 arg1, s32 arg2) {
    struct M2c_D_00156880 *st;          /* &D_00156880, live in s2 all function */
    s32 loc[9];                         /* CreateSema block; loc[8] is its out  */
    s32 *var_30_74;                     /* completion slot (s8)                */
    s32 *temp_5_88;                     /* queue slot cursor                   */
    s32 t;                              /* arg1 - 0x10                         */
    s32 *locp;                          /* &loc[8]                             */
    s32 temp_16_119;                    /* clamped transfer length             */
    s32 temp_16_163;                    /* IOP completion word                 */
    s32 temp_20_56;                     /* sema id (s3)                        */
    s32 temp_22_33;                     /* iob flags (s4)                      */
    s32 var_16_109;                     /* 0x10 - (arg1 & 0xF)                 */
    s32 var_16_72;                      /* arg1 & 0xF                          */
    s32 var_5_127;                      /* staging cursor                      */
    s32 var_6_82;                       /* queue index                         */
    u8 *temp_4_132;                     /* &st->pad_1C[0]                      */
    u8 temp_3_133;                      /* staging byte                        */
    struct M2c_temp_16_19 *temp_16_19;  /* get_iob() result (s0)               */

    st = &D_00156880;
    temp_16_19 = get_iob();
    _sceFsWaitS(3);
    if (*(s32 *)D_0012FC94 != 0) {
        goto block_2;
    }
    ReadQueueStatus();
    return -1;
block_2:
    if (temp_16_19 == NULL) {
        goto block_6;
    }
    temp_22_33 = temp_16_19->unk4;
    if (temp_22_33 == 0) {
        goto block_5;
    }
    goto block_7;
block_5:
block_6:
    ReadQueueStatus();
    return -9;
block_7:
    st->unkC = (s32) temp_16_19->unk0;
    loc[1] = 1;
    st->unk2C = (s32) ((s32) (((u8 *)temp_16_19 - (u8 *)D_00157D80)) >> 4);
    st->unk14 = arg2;
    st->unk10 = arg1;
    loc[2] = 0;
    loc[5] = 0;
    temp_20_56 = CreateSema(loc);
    locp = &loc[8];
    st->unk8 = 4;
    st->unk4 = (s32) locp;
    st->unk0 = temp_20_56;
    if (!(temp_22_33 & 0x8000)) {
        goto block_16;
    }
    WaitSema(*(s32 *)D_0012FCA4);
    var_16_72 = arg1 & 0xF;
    if (*(s32 *)D_0012FC10 != -1) {
        goto block_11;
    }
    var_30_74 = (s32 *)D_001574C0;
    *(s32 *)D_0012FC10 = st->unk0;
    st->unk0 = (s32) -st->unk0;
    goto block_15;
block_11:
    var_30_74 = (s32 *)D_001574C0;
    var_6_82 = 1;
loop_12:
    if (var_6_82 >= 0x20) {
        goto block_15;
    }
    temp_5_88 = ((s32 *)D_0012FC10 + var_6_82);
    var_6_82 += 1;
    if (*temp_5_88 != -1) {
        goto loop_12;
    }
    *temp_5_88 = st->unk0;
    st->unk0 = (s32) -st->unk0;
block_15:
    SignalSema(*(s32 *)D_0012FCA4);
    goto block_17;
block_16:
    var_16_72 = arg1 & 0xF;
    var_30_74 = (s32 *)D_001574C0;
block_17:
    if (var_16_72 != 0) {
        goto block_19;
    }
    var_16_109 = 0;
    goto block_20;
block_19:
    t = arg1 - 0x10;
    var_16_109 = ((arg1 >> 4) * 0x10) - t;
block_20:
    if (arg2 >= var_16_109) {
        temp_16_119 = var_16_109;
    } else {
        temp_16_119 = arg2;
    }
    if (temp_22_33 & 0x20000000) {
        goto block_22;
    }
    sceSifWriteBackDCache(arg1, arg2);
block_22:
    st->unk18 = temp_16_119;
    var_5_127 = 0;
    temp_4_132 = (u8 *)st + 0x1C;
    if (temp_16_119 <= 0) {
        goto block_25;
    }
loop_24:
    temp_3_133 = *(volatile u8 *)((arg1 | 0x20000000) + var_5_127);
    *temp_4_132 = temp_3_133;
    temp_4_132 += 1;
    var_5_127 += 1;
    if (var_5_127 < temp_16_119) {
        goto loop_24;
    }
    
block_25:
    if (sceSifCallRpc(D_00157F80, 3, 0, &D_00156880, 0x30, (s32) var_30_74, 4, 0, 0) >= 0) {
        goto block_27;
    }
    DeleteSema(temp_20_56);
    ReadQueueStatus();
    return -0xB;
block_27:
    /* Keep the retail's two separate (recomputed) flags & 0x8000 tests: the
       barrier stops GCC 2.9 from CSE-ing the mask into one long-lived value. */
    __asm__ volatile ("" : "+r" (temp_22_33));
    temp_16_163 = *(volatile u32 *)((u32) var_30_74 | 0x20000000);
    ReadQueueStatus();
    if (temp_16_163 != 0) {
        goto block_29;
    }
    DeleteSema(temp_20_56);
    return -0xB;
block_29:
    if (!(temp_22_33 & 0x8000)) {
        goto block_31;
    }
    DeleteSema(temp_20_56);
    return 0;
block_31:
    WaitSema(temp_20_56);
    DeleteSema(temp_20_56);
    return loc[8];
}
#endif /* NON_MATCHING */
