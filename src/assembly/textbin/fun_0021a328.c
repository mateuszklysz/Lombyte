#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021a328/FUN_0021a328.s", FUN_0021a328);
#else
#include "types.h"

struct M2c_D_001D5BF4
{
  u8 pad_0[0x40];
  struct M2c_D_001D5BF4_unk40 *unk40;
};
struct M2c_D_001D5BF4_unk40
{
  u8 pad_0[0x40];
  s32 unk40;
};
struct M2c_arg0
{
  u8 pad_0[0x20];
  s32 unk20;
  s32 unk24;
  u8 pad_28[0x8];
  s32 unk30;
  s32 unk34;
  s32 unk38;
  s32 unk3C;
  u8 pad_40[0x4];
  s32 unk44;
  s32 unk48;
  s32 unk4C;
};
struct M2c_temp_2_121
{
  u8 pad_0[0x34];
  s32 unk34;
  u8 pad_38[0x8];
  s32 unk40;
};
struct M2c_temp_3_136
{
  u8 pad_0[0x3C];
  s32 unk3C;
  u8 pad_40[0x8];
  s32 unk48;
};
struct M2c_temp_3_91
{
  u8 pad_0[0x3C];
  s32 unk3C;
  u8 pad_40[0x8];
  struct M2c_temp_5_95 *unk48;
};
struct M2c_temp_5_95
{
  u8 pad_0[0x4];
  s16 unk4;
  s32 unk6;
};
extern s32 D_0013CAE0[];
extern u8 D_0013D388[];
extern u8 D_0013D408[];
extern u8 D_0013D4C0[];
extern u8 D_0013E520[];
extern s32 D_0015ED80;
extern s32 D_0015ED84;
extern s32 D_001601B0;
extern s32 D_001601B4;
extern s32 D_001601B8;
extern s32 D_001601BC;
extern s32 D_00160258;
extern s32 D_00160268;
extern u8 D_00160270[];
extern u8 D_00160278[];
extern u8 D_00160280[];
extern u8 D_00160288[];
extern s32 D_001A0314;
extern struct M2c_D_001D5BF4 *D_001D5BF4[];
extern u8 D_001DF050[];
extern u8 D_001DF3F0[];
extern u8 D_001DF790[];
extern void func_001F4280();
extern void func_001F4398();
extern s32 func_001F44B8();
extern void func_001F61E8();
extern void func_001F61F8();
extern void func_001F7090();
extern s32 func_001F96F8();
extern s32 func_001FA6E0();
extern s32 func_001FDD10();
extern void func_001FECC8();
extern s32 func_0021B6D8();
extern void func_00233980();
extern void memset();
extern void sprintf();
s32 FUN_0021a328(struct M2c_arg0 *arg0)
{
  u16 sp4E;
  u8 sp_slot[0x120];
  s16 sp40;
  s16 sp42;
  u16 sp44;
  u16 sp46;
  u16 sp48;
  u16 sp4A;
  u16 sp52;
  u16 sp60;
  s16 sp62;
  s16 sp64;
  s16 sp66;
  s16 sp68;
  s16 sp6A;
  u16 sp70;
  s16 sp72;
  s16 sp76;
  s32 *var_19_12;
  s32 *var_23_8;
  s32 *var_3_101;
  register s32 var_20_10 asm("s3");
  s16 temp_11_486;
  s16 temp_11_553;
  s16 temp_3_141;
  s16 temp_6_355;
  s16 temp_7_451;
  s16 temp_7_520;
  s16 temp_9_449;
  s16 temp_9_517;
  s16 var_18_317;
  u16 new_var[2];
  s32 temp_2_171;
  s32 temp_2_175;
  s32 temp_2_178;
  s32 temp_2_181;
  s32 temp_2_573;
  s32 temp_2_581;
  s32 temp_3_266;
  s32 temp_3_431;
  s32 temp_4_20;
  s32 temp_4_227;
  s32 temp_4_289;
  s32 temp_5_407;
  s32 temp_5_41;
  s32 var_16_23;
  s32 var_16_283;
  s32 var_22_285;
  s32 var_2_206;
  s32 var_2_293;
  s32 var_2_311;
  s32 var_2_84;
  s32 var_30_284;
  s32 var_4_204;
  s64 temp_16_395;
  s64 temp_5_398;
  u16 temp_10_489;
  u16 temp_10_556;
  u16 temp_11_346;
  u16 temp_4_447;
  u16 temp_4_521;
  u16 temp_5_454;
  u16 temp_5_522;
  u16 temp_6_456;
  u16 temp_6_519;
  u16 temp_8_453;
  u16 temp_8_515;
  u32 temp_18_46;
  u32 var_18_49;
  struct M2c_temp_2_121 *temp_2_121;
  struct M2c_temp_3_136 *temp_3_136;
  struct M2c_temp_3_91 *temp_3_91;
  struct M2c_temp_5_95 *temp_5_95;
  var_23_8 = D_001DF050;
  var_20_10 = 1;
  var_19_12 = D_00160270;
  temp_4_20 = arg0->unk30;
  var_16_23 = 0;
  if (temp_4_20 & 8)
  {
    var_20_10 = 3;
    var_23_8 = D_001DF790;
  }
  if (temp_4_20 & 0x10)
  {
    var_20_10 = 2;
    var_23_8 = D_001DF3F0;
  }
  func_00233980(0x42, 0x44);
  func_00233980(0x47, 0x2004B);
  temp_5_41 = arg0->unk30;
  if (temp_5_41 & 0x20)
  {
    temp_18_46 = D_0015ED84 - 1;
    var_18_49 = (temp_18_46 >= 0x12U) ? (-1U) : (temp_18_46);
  }
  else
    if (temp_5_41 & 0x40)
  {
    var_18_49 = D_001A0314 - 1;
  }
  else
    if (temp_5_41 & 4)
  {
    var_18_49 = 0;
    if (arg0->unk44 < func_001F96F8(D_001601B4, temp_5_41))
    {
      arg0->unk44 = func_001F96F8(D_001601B4);
      var_18_49 = 0;
    }
    arg0->unk48 = 0U;
    arg0->unk4C = 0;
  }
  else
    if (temp_5_41 & 0x80)
  {
    var_18_49 = D_001D5BF4[0]->unk40->unk40;
    if (temp_5_41 & 0x8000)
    {
      var_2_84 = D_0015ED80;
      goto block_26;
    }
  }
  else
    if (temp_5_41 & 0x100)
  {
    temp_3_91 = D_001D5BF4[0]->unk40;
    var_18_49 = temp_3_91->unk3C;
    temp_5_95 = temp_3_91->unk48 + (var_18_49 * 0xA);
    if (temp_5_95->unk4 == 0)
    {
      var_3_101 = D_0013D4C0;
    }
    else
    {
      var_3_101 = D_0013D388;
    }
    if ((*(temp_5_95->unk6 + var_3_101)) == 0)
    {
      var_18_49 = -1U;
    }
  }
  else
    if (temp_5_41 & 0x1000)
  {
    temp_2_121 = D_001D5BF4[0]->unk40;
    var_18_49 = temp_2_121->unk40;
    arg0->unk34 = 0xFFFF;
    func_001FECC8(*((s32 *) ((var_18_49 * 0xC) + temp_2_121->unk34)), 1, ((u8 *) arg0) + 0x34, 0xFFFF);
  }
  else
  {
    temp_3_136 = D_001D5BF4[0]->unk40;
    temp_3_141 = *((s32 *) (((u8 *) ((temp_3_136->unk3C * 0xA) + temp_3_136->unk48)) + 0x6));
    var_18_49 = (u32) temp_3_141;
    var_2_84 = (s32) (*((s32 *) (temp_3_141 + D_0013E520)));
    block_26:
    var_16_23 = var_2_84 != 0;

  }
  if (arg0->unk44 == (-1))
  {
    arg0->unk44 = func_001F96F8(D_001601B4);
    arg0->unk48 = var_18_49;
    arg0->unk4C = var_16_23;
  }
  if (var_18_49 == arg0->unk48)
  {
    arg0->unk44 = (s32) (arg0->unk44 + 3);
  }
  else
  {
    if (func_001F96F8(D_001601B4) < arg0->unk44)
    {
      arg0->unk44 = func_001F96F8(D_001601B4);
    }
    temp_2_171 = arg0->unk44;
    temp_2_175 = (temp_2_171 < 1) ? (0) : (temp_2_171 - 1);
    temp_2_178 = (temp_2_175 < 1) ? (0) : (temp_2_175 - 1);
    temp_2_181 = (temp_2_178 < 1) ? (0) : (temp_2_178 - 1);
    arg0->unk44 = temp_2_181;
    if (temp_2_181 != 0)
    {
      var_18_49 = arg0->unk48;
      var_16_23 = arg0->unk4C;
    }
    else
    {
      arg0->unk48 = var_18_49;
      arg0->unk4C = var_16_23;
      arg0->unk30 = (s32) (arg0->unk30 & (~0x400));
      arg0->unk3C = 0;
    }
  }
  new_var[1] = arg0->unk30;
  if (new_var[1] & 4)
  {
    var_4_204 = arg0->unk34;
    var_2_206 = 1;
    if (var_4_204 != 0)
    {
      goto block_49;
    }
    return var_2_206;
  }
  if (new_var[1] & 0x1000)
  {
    var_4_204 = arg0->unk34;
    if (var_4_204 == 0xFFFF)
    {
      return 1;
    }
    goto block_49;
  }
  if ((new_var[1] & 0x100) && (var_18_49 == (-1U)))
  {
    var_19_12 = D_00160278;
  }
  else
  {
    temp_4_227 = arg0->unk34;
    if (temp_4_227 != 0)
    {
      var_4_204 = *((s32 *) (((((u32) (var_18_49 * arg0->unk38)) >> 2) * 4) + ((var_16_23 * 4) + temp_4_227)));
      block_49:
      var_19_12 = func_001FDD10(var_4_204);

    }
  }
  if ((!(arg0->unk30 & 0x11E4)) && ((*((s32 *) (var_18_49 + D_0013D4C0))) == 0))
  {
    var_19_12 = D_00160278;
  }
  if (arg0->unk30 & 0x200)
  {
    temp_3_266 = *((s32 *) (((((u32) (var_18_49 * arg0->unk38)) >> 2) * 4) + arg0->unk34));
    if (((temp_3_266 != 0x4ED2) && (temp_3_266 != 0x4ED9)) && (temp_3_266 != 0x4EDD))
    {
      sprintf(sp_slot, D_00160280, func_001FDD10(0x4ECC), var_19_12);
      var_19_12 = sp_slot;
    }
  }
  var_16_283 = arg0->unk30;
  var_30_284 = 4;
  var_22_285 = 4;
  temp_4_289 = var_16_283;
  if ((var_16_283 & 0x4004) == 0x4004)
  {
    var_2_293 = temp_4_289 & 0x800;
    if (arg0->unk34 == 0x523E)
    {
      var_16_283 |= 1;
      var_22_285 = 0xC;
      goto block_61;
    }
  }
  else
  {
    block_61:
    var_2_293 = temp_4_289 & 0x800;

  }
  if ((var_2_293 != 0) && ((*((s32 *) (var_18_49 + D_0013D408))) == 0))
  {
    var_16_283 |= 3;
    var_19_12 = func_001FDD10(0x4F54);
  }
  var_2_311 = var_16_283 & 1;
  if (var_19_12 == 0)
  {
    var_19_12 = D_00160288;
    var_2_311 = var_16_283 & 1;
  }
  var_18_317 = 8;
  if (var_2_311 != 0)
  {
    var_18_317 = 9;
    var_30_284 = ((s32) arg0->unk20) / 2;
  }
  if (var_16_283 & 2)
  {
    var_18_317 |= 2;
    var_22_285 = ((s32) arg0->unk24) / 2;
  }
  func_001F4280(0);
  new_var[0] = func_001F44B8(var_20_10);
  memset(&sp60, 0, 0x18);
  temp_11_346 = (u16) arg0->unk24;
  temp_6_355 = temp_11_346 - D_00160258;
  sp62 = temp_6_355;
  sp64 = 1;
  sp66 = ((u16) arg0->unk20) - 4;
  sp68 = (s16) var_30_284;
  sp6A = var_22_285 - (((s32) arg0->unk3C) >> 4);
  sp70 = D_00160268;
  sp72 = var_18_317;
  sp76 = -(((u16) arg0->unk3C) & 0xF);
  temp_5_407 = 0x10000;
  sp60 = D_00160258;
  if (arg0->unk30 & 0x10000)
  {
    sp42 = temp_11_346 - 1;
  }
  temp_16_395 = func_0021B6D8(arg0->unk44, func_001FA6E0(D_001601B0, 0x80FFA888, temp_6_355, D_00160268, D_00160258, temp_5_407, 1, temp_11_346, 0x3F000000), 0x80FFA888);
  temp_5_398 = temp_16_395;
  sp52 |= 4;
  func_001F7090(&sp40, temp_5_398, var_19_12, -1, new_var[0], var_23_8);
  temp_5_407 = arg0->unk30;
  sp52 ^= 4;
  if ((!(temp_5_407 & 0x2000)) && ((sp4E + 4) >= (sp42 - sp40)))
  {
    if (!(temp_5_407 & 0x400))
    {
      arg0->unk30 = (s32) (temp_5_407 | 0x400);
      arg0->unk3C = (s32) (-(arg0->unk24 * 8));
    }
  }
  else
  {
    temp_3_431 = arg0->unk30;
    if (temp_3_431 & 0x400)
    {
      arg0->unk3C = 0;
      arg0->unk30 = (s32) (temp_3_431 ^ 0x400);
    }
  }
  temp_4_447 = (var_22_285 - (((s32) arg0->unk3C) >> 4)) + D_001601BC;
  temp_9_449 = ((u16) sp40) + D_001601BC;
  temp_7_451 = ((u16) sp42) + D_001601BC;
  temp_8_453 = sp44 + D_001601B8;
  temp_5_454 = sp46 + D_001601B8;
  sp40 = temp_9_449;
  temp_6_456 = sp48 + D_001601B8;
  sp42 = temp_7_451;
  sp44 = temp_8_453;
  sp46 = temp_5_454;
  sp48 = temp_6_456;
  sp4A = temp_4_447;
  func_001F61F8(temp_4_447, temp_5_454, temp_6_456, temp_7_451, temp_8_453, temp_9_449);
  func_001F7090(&sp40, 0x8000 << 0x10, var_19_12, -1, new_var[0], var_23_8);
  func_001F61E8();
  temp_11_486 = ((u16) sp42) - D_001601BC;
  temp_10_489 = sp48 - D_001601B8;
  sp40 = ((u16) sp40) - D_001601BC;
  sp44 = (sp46 -= D_001601B8);
  sp4A -= D_001601BC;
  sp42 = temp_11_486;
  sp48 = temp_10_489;
  func_001F7090(&sp40, temp_16_395, var_19_12, -1, new_var[0], var_23_8, temp_10_489, temp_11_486);
  if (arg0->unk30 & 0x400)
  {
    temp_8_515 = (sp4A + (((u16) sp4E) + (((s32) D_00160268) * 3))) + D_001601BC;
    temp_9_517 = ((u16) sp40) + D_001601BC;
    temp_6_519 = ((u16) sp42) + D_001601BC;
    temp_7_520 = sp44 + D_001601B8;
    temp_4_521 = sp46 + D_001601B8;
    temp_5_522 = sp48 + D_001601B8;
    sp40 = temp_9_517;
    sp42 = temp_6_519;
    sp44 = temp_7_520;
    sp46 = temp_4_521;
    sp48 = temp_5_522;
    sp4A = temp_8_515;
    func_001F61F8(temp_4_521, temp_5_522, temp_6_519, temp_7_520, temp_8_515, temp_9_517);
    func_001F7090(&sp40, 0x8000 << 0x10, var_19_12, -1, new_var[0], var_23_8);
    func_001F61E8();
    temp_11_553 = sp42 - D_001601BC;
    temp_10_556 = sp48 - D_001601B8;
    sp40 = ((u16) sp40) - D_001601BC;
    sp46 -= D_001601B8;
    sp4A -= D_001601BC;
    sp42 = temp_11_553;
    sp44 = ((u16) sp44) - D_001601B8;
    sp48 = temp_10_556;
    func_001F7090(&sp40, temp_16_395, var_19_12, -1, new_var[0], var_23_8, temp_10_556, temp_11_553);
    if (arg0->unk30 & 0x400)
    {
      temp_2_573 = arg0->unk3C;
      temp_2_581 = (D_0013CAE0[0] & 1) ? (temp_2_573 + 0xA) : (temp_2_573 + 3);
      arg0->unk3C = temp_2_581;
      arg0->unk3C = (s32) (temp_2_581 % ((s32) ((sp4E + (((s32) D_00160268) * 3)) * 0x10)));
    }
  }
  func_001F4398();
  var_2_206 = 2;
  return var_2_206;
}

__attribute__((alias("FUN_0021a328"))) extern s32 func_0021A328(struct M2c_arg0 *arg0);
#endif /* NON_MATCHING */
