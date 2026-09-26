#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/map/draw_map_overlay/FUN_00205640.s", FUN_00205640);
#else
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef volatile s8 vs8;
typedef volatile u8 vu8;
typedef volatile s16 vs16;
typedef volatile u16 vu16;
typedef volatile s32 vs32;
typedef volatile u32 vu32;
typedef volatile s64 vs64;
typedef volatile u64 vu64;
typedef float f32;
typedef double f64;
typedef s32 b32;
struct M2c_D_0013E500
{
  u8 pad_0[0x10];
  s32 unk10;
  s32 unk14;
};
struct M2c_D_0013F350
{
  u8 pad_0[0x80];
  f32 unk80;
  f32 unk84;
  u8 pad_88[0x10];
  f32 unk98;
  u8 pad_9C[0x1FF0];
  s32 unk208C;
};
struct M2c_D_00160F00
{
  s32 unk0;
  u16 unk4;
  u8 pad_6[0x2];
  s32 unk8;
  s32 unkC;
};
struct M2c_D_0019A3E8
{
  u8 pad_0[0x20];
  s32 unk20;
  s32 unk24;
};
struct M2c_D_001A00F0
{
  u8 pad_0[0x8];
  s32 unk8;
  u8 pad_C[0xC];
  s32 unk18;
  s32 unk1C;
  struct M2c_D_001A00F0_unk20 *unk20;
  s32 unk24;
  u8 pad_28[0x4];
  s32 unk2C;
  u8 pad_30[0x1F8];
  s32 unk228;
  u8 pad_22C[0x14];
  s32 unk240;
};
struct M2c_D_001A00F0_unk20
{
  u8 pad_0[0x4];
  u16 unk4;
  u8 pad_6[0x26];
  u16 unk2C;
  u8 pad_2E[0x2];
};
struct M2c_temp_10_562
{
  u8 pad_0[0x4];
  s32 unk4;
  s32 unk8;
  s32 unkC;
};
struct M2c_temp_3_259
{
  u8 pad_0[0x10];
  s64 unk10;
};
struct M2c_packet
{
  s64 unk0;
  s64 unk8;
  s64 unk10;
  s64 unk18;
  s64 unk20;
  s64 unk28;
  s64 unk30;
  s64 unk38;
  s64 unk40;
  s64 unk48;
};
struct M2c_temp_3_543
{
  u8 pad_0[0x4];
  u16 unk4;
  s32 unk6;
  u8 pad_A[0x16];
  s32 unk24;
};
struct M2c_temp_3_62
{
  u8 pad_0[0xB4];
  s32 unkB4;
  u8 pad_B8[0x4C];
  s32 unk104;
  u8 pad_108[0x4C];
  s32 unk154;
};
struct M2c_temp_3_865
{
  u8 pad_0[0x4];
  u16 unk4;
  u8 pad_6[0x8];
  u16 unkE;
  u16 unk10;
  u16 unk12;
  s32 unk14;
};
struct M2c_temp_4_460
{
  u8 pad_0[0x6];
  u16 unk6;
  s32 unk7;
};
struct M2c_temp_4_590
{
  u8 pad_0[0x4];
  u16 unk4;
  s32 unk6;
  u8 pad_A[0x1A];
  s32 unk24;
};
struct M2c_temp_4_696
{
  u8 pad_0[0x4];
  u16 unk4;
  u16 unk6;
  s32 unk8;
  u8 pad_C[0x18];
  s32 unk24;
};
struct M2c_temp_5_407
{
  u8 pad_0[0x4];
  u16 unk4;
  u16 unk6;
  s32 unk8;
  u8 pad_C[0x18];
  s32 unk24;
};
struct M2c_temp_5_438
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x14];
  s32 unk1C;
};
struct M2c_temp_6_171
{
  s64 unk0;
  s64 unk8;
  s64 unk10;
  s64 unk18;
  s64 unk20;
  s64 unk28;
  s64 unk30;
  s64 unk38;
  s64 unk40;
  s64 unk48;
};
struct M2c_temp_7_261
{
  s64 unk0;
  s64 unk8;
  s64 unk10;
  s64 unk18;
  s64 unk20;
  s64 unk28;
  s64 unk30;
  s64 unk38;
  s64 unk40;
  s64 unk48;
};
struct M2c_var_16_402
{
  f32 unk0;
  u16 unk4;
  u8 pad_6[0x2];
  s32 unk8;
  s32 unkC;
};
struct M2c_var_19_691
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
};
struct M2c_var_4_740
{
  s16 unk0;
  u16 unk2;
  u16 unk4;
  u16 unk6;
  s16 unk8;
  u8 pad_A[0x16];
  f32 unk20;
};
struct M2c_var_6_566
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
};
union M2c_slot
{
  u8 b[0x80];
  f32 f[2];
};
extern u8 D_0013D5BC[];
extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_0013F350 D_0013F350;
extern u16 D_001518D2[];
extern s32 D_0015ED84;
extern u8 D_0015EDB4[];
extern s32 D_0015FD60;
extern f32 D_0015FD80;
extern f32 D_0015FD84;
extern f32 D_0015FD88;
extern f32 D_0015FD8C;
extern f32 D_0015FD90;
extern f32 D_0015FD94;
extern struct M2c_D_00160F00 *D_00160F00[];
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern struct M2c_D_001A00F0 D_001A00F0;
extern u8 D_001A01A4[];
extern u8 D_001E8068[];
extern u8 D_70000010[];
extern void func_001F0C50(s32, s32, s32, u8 *);
extern void func_001F4280(s32);
extern void func_001F4398(void);
extern void func_001F5F18(s32, s32, s32, s32, s32);
extern void func_001F75F0(void *, u32, void *, s32);
extern f32 func_001FA580(f32, f32);
extern f32 func_001FA5C8(f32, f32);
extern s32 func_001FF960(s32, s32);
extern s32 func_001FFA10(s32);
extern void func_00200080(s32, s32, s32, s32, s32, s32);
extern void func_00200600(u32, u32, s64, f32, f32, f32, f32, f32);
extern void func_00200E08(s32, s32, s32, s32, u64, s32);
extern void func_00208280(s32, void *);
extern void func_00208408(void *, f32 *, s32, f32, f32);
extern void func_00208508(s32, s32, s32, s32);
extern void func_00233980(s32, s64);
extern void *memset(void *, s32, u32);
void FUN_00205640(void)
{
  struct M2c_D_001A00F0 *p;
  union M2c_slot sp_slot;
  s16 sp80[0x10];
  s32 spA0;
  s32 spA4;
  s32 spA8;
  s32 spAC;
  long spB0;
  s32 spB4;
  s32 spB8;
  struct M2c_temp_3_259 *temp_3_259;
  s32 temp_6_110;
  struct M2c_temp_6_171 *temp_6_171;
  s32 temp_7_104;
  struct M2c_temp_7_261 *temp_7_261;
  s32 temp_8_100;
  struct M2c_var_16_402 *var_16_402;
  f32 var_f22_747;
  s32 var_20_748;
  register f32 temp_f0_493 asm("$29");
  f32 temp_f0_67;
  register f32 temp_f0_84 asm("$20");
  s32 temp_f1_452;
  f32 temp_f1_80;
  f32 temp_f20_1080;
  register f32 temp_f20_836 asm("$24");
  register f32 temp_f21_834 asm("$24");
  f32 temp_f22_1004;
  f32 temp_f25_396;
  f32 temp_f3_78;
  f32 var_f20_420;
  f32 var_f20_733;
  f32 var_f23_749;
  f32 var_f24_751;
  f32 var_f2_468;
  s16 temp_16_873;
  s16 temp_16_922;
  s16 temp_17_923;
  s16 temp_5_876;
  s16 temp_6_871;
  register s16 var_16_706 asm("s2");
  s16 var_18_909;
  s16 var_20_885;
  s32 *var_20_323;
  s32 temp_10_345;
  register s32 temp_11_353 asm("s0");
  s32 temp_17_330;
  s32 temp_17_546;
  s32 temp_17_982;
  s32 temp_18_329;
  register s32 temp_2_108 asm("s2");
  s32 temp_2_339;
  s32 temp_2_344;
  s32 temp_2_561;
  s32 temp_3_105;
  s32 temp_4_342;
  s32 temp_5_333;
  s32 temp_5_586;
  register s32 temp_5_854 asm("s2");
  s32 temp_6_346;
  s32 temp_6_63;
  s32 temp_6_819;
  register s32 temp_6_856 asm("s2");
  s32 temp_7_581;
  s32 temp_7_822;
  s32 temp_8_571;
  s32 temp_9_576;
  s32 temp_lo_111;
  s32 temp_lo_123;
  s32 temp_lo_125;
  s32 temp_lo_127;
  s32 var_11_601;
  s32 var_12_602;
  s32 var_13_603;
  s32 var_14_606;
  s32 var_15_560;
  s32 var_16_567;
  unsigned short var_17_403;
  s32 var_19_327;
  s32 var_22_693;
  s32 var_2_609;
  s32 var_2_620;
  s32 var_3_540;
  s32 var_3_890;
  s32 var_3_912;
  s32 var_5_536;
  s64 temp_6_307;
  u16 temp_18_704;
  u16 temp_2_870;
  u16 temp_3_414;
  u16 temp_3_700;
  u16 temp_3_741;
  u16 temp_4_411;
  register u32 temp_4_872 asm("s4");
  u64 temp_22_172;
  struct M2c_temp_10_562 *temp_10_562;
  struct M2c_temp_3_543 *temp_3_543;
  struct M2c_temp_3_62 *temp_3_62;
  struct M2c_temp_3_865 *temp_3_865;
  struct M2c_temp_4_460 *temp_4_460;
  struct M2c_temp_4_590 *temp_4_590;
  struct M2c_temp_4_696 *temp_4_696;
  u8 *temp_5_381;
  struct M2c_temp_5_407 *temp_5_407;
  struct M2c_temp_5_438 *temp_5_438;
  register struct M2c_var_19_691 *var_19_691 asm("s3");
  struct M2c_var_4_740 *var_4_740;
  register struct M2c_var_6_566 *var_6_566 asm("s3");
  f32 var_f21_999;
  p = &D_001A00F0;
  if (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk24 == 0)
  {
    func_001F4280(0);
    func_001F0C50(0x100, ((s32) (D_001518D2[0] << 0x10)) >> 0x11, 0x80909090, D_001E8068);
    func_001F4398();
    return;
  }
  if (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk228 >= 0)
  {
    spA0 = 0x1000;
    func_001F4280(0);
    spA4 = 0x800;
    temp_3_62 = (struct M2c_temp_3_62 *) (((u8 *) ((struct M2c_D_001A00F0 *) (&D_001A00F0))) + (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk228 * 4));
    temp_6_63 = (D_0015EDB4[0] != 0) ? (-1) : (1);
    temp_f0_67 = temp_3_62->unkB4;
    temp_f3_78 = (f32) (((s32) temp_3_62->unk154) >> 0xF);
    temp_f1_80 = temp_f0_67 * ((f32) (((s32) temp_3_62->unk104) >> 0xF));
    temp_f0_84 = temp_f0_67 * temp_f3_78;
    spB4 = 0x50000005;
    spB0 = 0x10000005;
    temp_8_100 = spA4 - ((s32) temp_f1_80);
    temp_7_104 = temp_8_100 + ((s32) temp_f1_80);
    temp_3_105 = spA0 - (((s32) temp_f3_78) * temp_6_63);
    spA4 = temp_8_100;
    temp_2_108 = ((s32) temp_f0_84) + 0x2000;
    temp_6_110 = temp_3_105 + (((s32) temp_f1_80) * temp_6_63);
    temp_lo_111 = ((s32) ((temp_3_105 + ((s32) temp_f0_84)) - 1)) / ((s32) temp_f0_84);
    spAC = temp_7_104;
    spA0 = temp_3_105;
    spA8 = temp_6_110;
    temp_lo_123 = ((s32) ((temp_8_100 + ((s32) temp_f0_84)) - 1)) / ((s32) temp_f0_84);
    temp_lo_125 = ((s32) ((temp_2_108 - temp_6_110) - 1)) / ((s32) temp_f0_84);
    temp_lo_127 = ((s32) ((temp_2_108 - temp_7_104) - 1)) / ((s32) temp_f0_84);
    func_00233980(8, 0);
    func_00233980(0x47, 0);
    D_00160F00[0]->unk0 = spB0;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unkC = spB4;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0] += 0x10;
    temp_6_171 = D_00160F00[0];
    temp_22_172 = func_001FFA10(func_001FF960(0xE999U, ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk228));
    temp_6_171->unk8 = 0x05353106;
    temp_6_171->unk10 = temp_22_172;
    temp_6_171->unk0 = (((s64) 0xE800) << 0x2F) | 0x8001;
    temp_6_171->unk18 = 0x156;
    temp_6_171->unk20 = (((s64) 0x8080) << 0x10) | 0x8080;
    temp_6_171->unk28 = 0;
    temp_6_171->unk38 = (s64) ((((temp_lo_111 + temp_lo_125) << 9) + 0x2000) | ((((temp_lo_123 + temp_lo_127) << 9) + 0x2000) << 0x10));
    temp_6_171->unk30 = (s64) (((((temp_3_105 - (((s32) temp_f0_84) * temp_lo_111)) + D_0013E500.unk10) - 8) | ((((temp_8_100 - (((s32) temp_f0_84) * temp_lo_123)) + D_0013E500.unk14) - 8) << 0x10)) | (((s64) ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk18) << 0x20));
    temp_6_171->unk40 = (s64) ((((s32) (((temp_6_110 + (((s32) temp_f0_84) * temp_lo_125)) + D_0013E500.unk10) - 8)) | (((s64) (((temp_7_104 + (((s32) temp_f0_84) * temp_lo_127)) + D_0013E500.unk14) - 8)) << 0x10)) | (((s64) ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk18) << 0x20));
    temp_6_171->unk48 = 0;
    D_00160F00[0] += 0x50;
    func_00233980(8, 5);
    func_00233980(0x47, 0x60B);
    D_00160F00[0]->unk0 = spB0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = spB4;
    temp_3_259 = D_00160F00[0];
    D_00160F00[0]->unk4 = 0;
    temp_7_261 = ((u8 *) temp_3_259) + 0x10;
    D_00160F00[0] = temp_7_261;
    temp_3_259->unk10 = (((s64) 0xE800) << 0x2F) | 0x8001;
    temp_7_261->unk8 = 0x05353106;
    temp_7_261->unk10 = (((s64) ((((s32) ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk240) >> 8) | 0x25320000)) | (((((s64) (((temp_22_172 >> 0x25) & 0x3FFF) << 0x20)) >> 0x20) << 0x25) | (((s64) 0xC800) << 0x13))) | (((s64) (-1)) << 0x3F);
    temp_7_261->unk18 = 0x156;
    temp_7_261->unk20 = (((s64) 0x8080) << 0x10) | 0x8080;
    temp_7_261->unk28 = 0;
    temp_7_261->unk38 = 0x20002000;
    temp_7_261->unk30 = (s64) ((((s32) ((spA0 + D_0013E500.unk10) - 8)) | (((s64) ((spA4 + D_0013E500.unk14) - 8)) << 0x10)) | (((s64) ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk18) << 0x20));
    temp_7_261->unk48 = 0;
    temp_6_307 = ((s64) ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk18) << 0x20;
    temp_7_261->unk40 = (s64) ((((s32) ((spA8 + D_0013E500.unk10) - 8)) | (((s64) ((spAC + D_0013E500.unk14) - 8)) << 0x10)) | temp_6_307);
    D_00160F00[0] += 0x50;
    func_00233980(0x47, 0x360B);
    if ((((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk2C != 0) && (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk8 != 0))
    {
      var_20_323 = (s32 *) (((u8 *) ((struct M2c_D_001A00F0 *) (&D_001A00F0))) + 0x30);
      var_19_327 = 7;
      temp_18_329 = spA8 - spA0;
      temp_17_330 = spAC - spA4;
      do
      {
        temp_5_333 = *var_20_323;
        if (temp_5_333 >= 0)
        {
          temp_2_339 = ((s32) ((temp_5_333 > (-1)) ? (temp_5_333) : (temp_5_333 + 0xF))) >> 4;
          temp_4_342 = temp_2_339 * temp_17_330;
          temp_7_581 = ((s32) ((temp_4_342 > (-1)) ? (temp_4_342) : (temp_4_342 + 0xF))) >> 4;
          temp_2_344 = temp_5_333 - (temp_2_339 * 0x10);
          temp_10_345 = temp_2_344 * temp_18_329;
          temp_6_346 = (temp_2_339 * temp_17_330) + temp_17_330;
          temp_11_353 = (temp_2_344 * temp_18_329) + temp_18_329;
          func_00200E08(spA0 + (((s32) ((temp_10_345 > (-1)) ? (temp_10_345) : (temp_10_345 + 0xF))) >> 4), spA4 + temp_7_581, spA0 + (((s32) ((temp_11_353 > (-1)) ? (temp_11_353) : (temp_11_353 + 0xF))) >> 4), spA4 + (((s32) ((temp_6_346 > (-1)) ? (temp_6_346) : (temp_6_346 + 0xF))) >> 4), 0x20000000, 1);
        }
        var_19_327 -= 1;
        var_20_323 += 0x10;
      }
      while (var_19_327 >= 0);
    }
    temp_5_381 = ((u8 *) ((struct M2c_D_001A00F0 *) (&D_001A00F0))) + 0xB4;
    if (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20 != 0)
    {
      temp_f25_396 = ((2.0f * (*((f32 *) (temp_5_381 + (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk228 * 4))))) + 5.0f) / 13.0f;
      if (!(((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20->unk4 & 4))
      {
        var_16_402 = D_70000010;
        var_17_403 = 0;
        do
        {
          temp_5_407 = var_17_403 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20;
          if (temp_5_407->unk24 != 0)
          {
            temp_4_411 = temp_5_407->unk6;
            if (temp_4_411 != 0)
            {
              temp_3_414 = temp_5_407->unk4;
              if (!(temp_3_414 & 1))
              {
                var_f20_420 = 1.0f;
                if (temp_3_414 & 0x80)
                {
                  var_f20_420 = 1.5f;
                }
                temp_5_438 = var_17_403 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20;
                temp_f1_452 = temp_5_438->unk1C * ((f32) (spAC - spA4));
                temp_4_460 = D_0019A3E8.unk24 + ((*((s32 *) (((u8 *) ((func_001FF960(temp_4_411, (s32) temp_5_407->unk8) * 4) + D_0019A3E8.unk20)) + 0x2))) * 8);
                if (temp_5_438->unk4 & 0x200)
                {
                  var_f2_468 = *((f32 *) (temp_5_381 + (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk228 * 4)));
                }
                else
                {
                  var_f2_468 = temp_f25_396;
                }
                var_16_402->unk0 = temp_f1_452;
                temp_f0_493 = (var_f20_420 * var_f2_468) * ((f32) (1 << (temp_4_460->unk6 + 4)));
                var_16_402->unk8 = temp_f0_493;
                var_16_402->unk4 = (f32) (((f32) temp_f1_452) + temp_f0_493);
                var_16_402->unkC = (f32) (1 << (temp_4_460->unk7 + 4));
              }
            }
          }
          var_17_403 += 0x28;
        }
        while (!((*((s32 *) (((u8 *) (var_17_403 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)) + 0x4))) & 4));
      }
      var_5_536 = 0;
      if (!(((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20->unk2C & 4))
      {
        var_3_540 = 0 * 0x28;
        do
        {
          temp_3_543 = var_3_540 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20;
          temp_17_546 = var_5_536 + 1;
          if (temp_3_543->unk24 != 0)
          {
            if (temp_3_543->unk6 == 0)
            {
              var_5_536 = temp_17_546;
            }
            else
              if (temp_3_543->unk4 & 3)
            {
              var_5_536 = temp_17_546;
            }
            else
              if ((*((s32 *) (((u8 *) ((temp_17_546 * 0x28) + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)) + 0x4))) & 4)
            {
              var_5_536 = temp_17_546;
            }
            else
            {
              var_15_560 = temp_17_546 * 0x28;
              temp_2_561 = var_5_536 * 0x10;
              temp_10_562 = temp_2_561 + 0x70000000;
              var_6_566 = (temp_17_546 * 0x10) + 0x70000000;
              var_16_567 = var_15_560;
              do
              {
                temp_8_571 = var_6_566->unk8 - (*((volatile u32 *) (0x70000000 + temp_2_561)));
                if (temp_8_571 > 0)
                {
                  temp_9_576 = temp_10_562->unk8 - var_6_566->unk0;
                  if (temp_9_576 > 0)
                  {
                    temp_7_581 = var_6_566->unkC - temp_10_562->unk4;
                    if (temp_7_581 > 0)
                    {
                      temp_5_586 = temp_10_562->unkC - var_6_566->unk4;
                      if (temp_5_586 > 0)
                      {
                        temp_4_590 = var_16_567 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20;
                        if (((temp_4_590->unk24 != 0) && (temp_4_590->unk6 != 0)) && (!(temp_4_590->unk4 & 3)))
                        {
                          var_11_601 = 0;
                          var_13_603 = 0;
                          var_14_606 = 0;
                          var_12_602 = 0;
                          if (temp_9_576 >= temp_8_571)
                          {
                            var_2_609 = temp_7_581 < temp_9_576;
                            if ((temp_7_581 >= temp_8_571) && ((var_2_609 = temp_7_581 < temp_9_576, (temp_5_586 < temp_8_571) == 0)))
                            {
                              var_11_601 = temp_8_571 >> 1;
                              var_13_603 = var_11_601 - temp_8_571;
                            }
                            else
                            {
                              goto block_50;
                            }
                          }
                          else
                          {
                            var_2_609 = temp_7_581 < temp_9_576;
                            block_50:
                            var_2_620 = temp_5_586 < temp_7_581;

                            if ((var_2_609 == 0) && ((var_2_620 = temp_5_586 < temp_7_581, (temp_5_586 < temp_9_576) == 0)))
                            {
                              var_13_603 = temp_9_576 >> 1;
                              var_11_601 = var_13_603 - temp_9_576;
                            }
                            else
                            {
                              var_14_606 = temp_5_586 >> 1;
                              if (var_2_620 == 0)
                              {
                                var_12_602 = temp_7_581 >> 1;
                                var_14_606 = var_12_602 - temp_7_581;
                              }
                              else
                              {
                                var_12_602 = var_14_606 - temp_5_586;
                              }
                            }
                          }
                          *((volatile u32 *) (0x70000000 + temp_2_561)) = (s32) ((*((volatile u32 *) (0x70000000 + temp_2_561))) + var_11_601);
                          temp_10_562->unk8 = (s32) (temp_10_562->unk8 + var_11_601);
                          temp_10_562->unk4 = (s32) (temp_10_562->unk4 + var_12_602);
                          temp_10_562->unkC = (s32) (temp_10_562->unkC + var_12_602);
                          var_6_566->unk0 = (s32) (var_6_566->unk0 + var_13_603);
                          var_6_566->unk8 = (s32) (var_6_566->unk8 + var_13_603);
                          var_6_566->unk4 = (s32) (var_6_566->unk4 + var_14_606);
                          var_6_566->unkC = (s32) (var_6_566->unkC + var_14_606);
                        }
                      }
                    }
                  }
                }
                var_16_567 += 0x28;
                var_15_560 += 0x28;
              }
              while (!((*((s32 *) (((u8 *) (var_15_560 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)) + 0x4))) & 4));
              goto block_58;
            }
          }
          else
          {
            block_58:
            var_5_536 = temp_17_546;

          }
          var_3_540 = var_5_536 * 0x28;
        }
        while (!((*((s32 *) (((u8 *) ((var_5_536 * 0x28) + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)) + 0x2C))) & 4));
      }
      spB8 = 0;
      if (!(((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20->unk4 & 4))
      {
        var_19_691 = (void *) 0x70000000;
        var_22_693 = 0;
        do
        {
          temp_4_696 = var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20;
          if (temp_4_696->unk24 != 0)
          {
            temp_3_700 = temp_4_696->unk4;
            if (!(temp_3_700 & 1))
            {
              temp_18_704 = temp_4_696->unk6;
              var_16_706 = temp_4_696->unk8;
              if (temp_18_704 != 0)
              {
                if (temp_3_700 & 0x40)
                {
                  func_00200E08(var_19_691->unk0 - 0x20, var_19_691->unk4 - 0x20, var_19_691->unk8 + 0x20, var_19_691->unkC + 0x20, ((u64) 0x8000) << 0x10, 1);
                }
                if ((*((s32 *) (((u8 *) (var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)) + 0x4))) & 0x200)
                {
                  var_f20_733 = *((((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk228 * 4) + D_001A01A4);
                }
                else
                {
                  var_f20_733 = temp_f25_396;
                }
                var_4_740 = var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20;
                temp_3_741 = var_4_740->unk4;
                if (temp_3_741 & 0x100)
                {
                  var_f22_747 = var_4_740->unk20;
                  var_20_748 = 0x20;
                  var_f23_749 = var_f20_733 * 256.0f;
                  var_f24_751 = var_f23_749;
                  if (temp_3_741 & 0x400)
                  {
                    var_20_748 = 0x40;
                    var_f22_747 = func_001FA580(var_f22_747, 1.5707964f);
                    var_f24_751 = var_f20_733 * D_0015FD88;
                    var_f23_749 = var_f20_733 * (*((f32 *) 0x15FD8C));
                    if ((*((s32 *) (D_0013D5BC + ((*((s16 *) ((u8 *) (var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)))) * 0x10)))) & 2)
                    {
                      var_16_706 = var_16_706 + 1;
                    }
                  }
                  if ((*((s32 *) (((u8 *) (var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)) + 0x4))) & 0x800)
                  {
                    var_20_748 = 0x40;
                    var_f22_747 = func_001FA580(var_f22_747, 1.5707964f);
                    var_f24_751 = var_f20_733 * D_0015FD80;
                    var_f23_749 = var_f20_733 * (*((f32 *) 0x15FD84));
                    if ((*((s32 *) (D_0013D5BC + ((*((s16 *) ((u8 *) (var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)))) * 0x10)))) & 2)
                    {
                      var_16_706 = var_16_706 + 1;
                    }
                  }
                  if ((*((s32 *) (((u8 *) (var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)) + 0x4))) & 0x1000)
                  {
                    var_f22_747 = func_001FA580(var_f22_747, 1.5707964f);
                    var_f23_749 = var_f20_733 * D_0015FD94;
                    var_f24_751 = var_f20_733 * D_0015FD90;
                  }
                  temp_6_819 = var_19_691->unkC;
                  temp_7_822 = var_19_691->unk8;
                  temp_f21_834 = ((f32) ((u32) (var_19_691->unk0 + temp_7_822))) * 0.5f;
                  temp_f20_836 = ((f32) ((u32) (var_19_691->unk4 + temp_6_819))) * 0.5f;
                  func_00200600(var_20_748, 0x20, func_001FFA10(func_001FF960(temp_18_704, (s32) var_16_706)), temp_f21_834, temp_f20_836, var_f24_751, var_f23_749, (f32) ((u32) var_f22_747));
                }
                else
                {
                  temp_5_854 = var_19_691->unk0;
                  temp_6_856 = var_19_691->unk4;
                  func_00200080(func_001FF960(temp_18_704, (s32) var_16_706), temp_5_854, temp_6_856, var_19_691->unk8 - temp_5_854, var_19_691->unkC - temp_6_856, 0x80);
                }
                temp_3_865 = var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20;
                if (temp_3_865->unk4 & 0x10)
                {
                  temp_2_870 = temp_3_865->unkE;
                  temp_6_871 = temp_3_865->unk12;
                  temp_4_872 = temp_2_870 << 0x10;
                  temp_16_873 = temp_3_865->unk14;
                  temp_5_876 = temp_3_865->unk10;
                  if (temp_6_871 == 0)
                  {
                    var_20_885 = (((s32) (var_19_691->unk0 + var_19_691->unk8)) >> 5) - (((s32) (((s16) temp_2_870) + (temp_4_872 >> 0x1F))) >> 1);
                  }
                  else
                  {
                    if (temp_6_871 <= 0)
                    {
                      var_3_890 = var_19_691->unk0;
                    }
                    else
                    {
                      var_3_890 = var_19_691->unk8;
                    }
                    var_20_885 = ((var_3_890 >> 4) - (((s32) (((s16) temp_2_870) + (temp_4_872 >> 0x1F))) >> 1)) + temp_6_871;
                  }
                  if (temp_16_873 == 0)
                  {
                    var_18_909 = (((s32) (var_19_691->unk4 + var_19_691->unkC)) >> 5) - (((s32) (temp_5_876 + (((u32) temp_5_876) >> 0x1F))) >> 1);
                  }
                  else
                  {
                    if (temp_16_873 > 0)
                    {
                      var_3_912 = var_19_691->unkC;
                    }
                    else
                    {
                      var_3_912 = var_19_691->unk4;
                    }
                    var_18_909 = ((var_3_912 >> 4) - (((s32) (temp_5_876 + (((u32) temp_5_876) >> 0x1F))) >> 1)) + temp_16_873;
                  }
                  temp_16_922 = temp_5_876;
                  temp_16_922 += var_18_909;
                  temp_17_923 = var_20_885 + ((s16) temp_2_870);
                  func_001F5F18(var_18_909, temp_16_922, var_20_885, temp_17_923, 0x40);
                  func_00208280(spB8, sp_slot.b);
                  memset(sp80, 0, 0x18);
                  sp80[8] = 0xF;
                  sp80[1] = temp_16_922;
                  sp80[3] = temp_17_923;
                  sp80[4] = var_20_885 + (((s32) (((s16) temp_2_870) + (((u32) ((s16) temp_2_870)) >> 0x1F))) >> 1);
                  sp80[9] = 1;
                  sp80[5] = var_18_909 + 4;
                  sp80[0] = var_18_909;
                  sp80[2] = var_20_885;
                  func_001F75F0(sp80, 0x80FFA888, sp_slot.b, -1);
                }
              }
            }
          }
          var_22_693 += 0x28;
          spB8 += 1;
        }
        while (!((*((s32 *) (((u8 *) (var_22_693 + ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk20)) + 0x4))) & 4));
      }
    }
    if ((*((s32 *) 0x15ED84)) == ((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk228)
    {
      temp_17_982 = func_001FF960(0xE99AU, 5);
      var_f21_999 = D_0013F350.unk98;
      temp_f22_1004 = ((((*((f32 *) ((((u8 *) ((struct M2c_D_001A00F0 *) (&D_001A00F0))) + (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk228 * 4)) + 0xB4))) * 4.0f) + 10.0f) * 0.75f) / 13.0f;
      if ((D_0013F350.unk208C ^ 0xF) == 0)
      {
        var_f21_999 = func_001FA580(var_f21_999, 1.5707964f);
      }
      if (D_0015FD60 != 0)
      {
        func_00208408(sp_slot.b, &sp_slot.f[1], D_0015ED84 + 0x64, D_0013F350.unk80, D_0013F350.unk84);
        var_f21_999 = func_001FA580(var_f21_999, 1.5707964f);
      }
      else
      {
        func_00208408(sp_slot.b, &sp_slot.f[1], D_0015ED84, D_0013F350.unk80, D_0013F350.unk84);
      }
      sp_slot.f[0] = ((f32) spA0) + (sp_slot.f[0] * ((f32) (spA8 - spA0)));
      sp_slot.f[1] = ((f32) spA4) + (sp_slot.f[1] * ((f32) (spAC - spA4)));
      if (D_0015EDB4[0] != 0)
      {
        var_f21_999 = func_001FA5C8(-func_001FA580(var_f21_999, 1.5707964f), 1.5707964f);
      }
      temp_f20_1080 = temp_f22_1004 * 256.0f;
      func_00200600(0x40, 0x40, func_001FFA10(temp_17_982), sp_slot.f[0], sp_slot.f[1], temp_f20_1080, temp_f20_1080, var_f21_999);
    }
    func_001F4398();
    if (((struct M2c_D_001A00F0 *) (&D_001A00F0))->unk1C != 0)
    {
      func_001F4280(0);
      func_00208508(spA0, spA4, spA8, spAC);
      func_001F4398();
    }
  }
}

__attribute__((alias("FUN_00205640"))) extern void func_00205640(void);
#endif /* NON_MATCHING */
