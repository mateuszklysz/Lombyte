#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/map/draw_map_screen/FUN_0021be60.s", FUN_0021be60);
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
struct M2c_D_0013C940
{
  u8 pad_0[0x1C4];
  s32 unk1C4;
};
struct M2c_D_001516D0
{
  u8 pad_0[0x8];
  s16 unk8;
  u8 pad_A[0x2];
};
struct M2c_D_001A00F0
{
  u8 pad_0[0xC];
  s32 unkC;
  u8 pad_10[0x214];
  s32 unk224;
  s32 unk228;
  s32 unk22C;
  s32 unk230;
  s32 unk234;
  u8 pad_238[0x4];
  s32 unk23C;
  s32 unk240;
  s32 unk244;
  s32 unk248;
  s32 unk24C;
  s32 unk250;
  u8 pad_254[0x4];
  s64 unk258;
  s64 unk260;
  s64 unk268;
  u8 pad_270[0x8];
  s32 unk278;
  u8 pad_27C[0x24];
  s32 unk2A0;
};
struct M2c_D_001D5BF0
{
  u8 pad_0[0x4];
  struct M2c_D_001D5BF0_unk4 *unk4;
  s32 unk8;
  s32 unkC;
  u8 pad_10[0xD4];
  s32 unkE4;
  u8 pad_E8[0x8];
  s32 unkF0;
  s32 unkF4;
  u8 pad_F8[0x2C];
  s32 unk124;
};
struct M2c_D_001D5BF0_unk4
{
  u8 pad_0[0x38];
  s32 unk38;
};
struct M2c_arg0
{
  u8 pad_0[0x14];
  s32 unk14;
  u8 pad_18[0x1C];
  s32 unk34;
};
struct M2c_temp_18_163
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
};
struct M2c_temp_18_345
{
  s32 unk0;
  s32 unk4;
};
extern u8 D_001383A0[];
extern u8 D_00138438[];
extern struct M2c_D_0013C940 D_0013C940;
extern s32 D_0013D4E1;
extern u8 D_0013DD58[];
extern u8 D_00141EC0[];
extern struct M2c_D_001516D0 D_001516D0;
extern s32 D_0015ED84;
extern s32 D_001601E0;
extern struct M2c_D_001A00F0 D_001A00F0;
extern u8 D_001CF418[];
extern u8 D_001CF678[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 D_001D5BF8;
extern s32 D_001D5CBB[];
extern s32 D_001D5D14[];
extern s32 func_00204E30();
extern s32 func_00204F60();
extern s32 func_00205000();
extern s32 func_002050A0();
extern s32 func_002050E8();
extern s32 func_00205220();
extern s32 func_00205278();
extern s32 func_002053D8();
extern s32 func_00205440();
extern s32 func_00206710();
extern s32 func_00207BB0();
extern s32 func_0020B4A8();
extern s32 func_0020B618();
extern s32 func_0020B950();
extern s32 func_0020BF90();
extern s32 func_00216788();
extern s32 func_00225C18();
extern s32 func_00225CD8();
extern s32 func_0022DA68();
extern s32 func_00232F20();
s32 FUN_0021be60(struct M2c_arg0 *arg0)
{
  u8 *new_var4;
  s32 *var_2_339;
  s32 *temp_3_290;
  struct M2c_temp_18_163 *new_var;
  s32 temp_16_138;
  s32 temp_16_371;
  s32 temp_17_147;
  char new_var3;
  u8 *new_var7;
  s32 temp_18_28;
  s32 temp_2_100;
  s32 *temp_16_230;
  int new_var5;
  struct M2c_temp_18_163 *new_var11;
  s32 temp_2_168;
  s32 temp_2_308;
  s32 temp_2_87;
  s32 temp_30_135;
  s32 temp_3_114;
  s32 temp_3_44;
  struct M2c_D_001A00F0 *new_var8;
  s32 var_16_321;
  s32 var_20_302;
  s32 var_2_150;
  s32 var_2_34;
  s32 *new_var10;
  s32 var_3_337;
  s32 *temp_17_231;
  struct M2c_temp_18_163 *temp_18_163;
  s32 *temp_18_226;
  struct M2c_temp_18_345 *temp_18_345;
  unsigned char new_var6;
  s32 *temp_21_169;
  s32 *temp_22_167;
  u8 *new_var9;
  s32 new_var2;
  s32 *temp_5_178;
  s32 *temp_7_224;
  func_00205440();
  if (!(arg0->unk34 & 0x40))
  {
    temp_18_28 = D_001A00F0.unk224;
    if (D_0013C940.unk1C4 & 0xD00)
    {
      if (1)
      {
      }
      if (D_001D5D14[0] == 0)
      {
        var_2_34 = 1;
      }
      else
      {
        goto block_5;
      }
    }
    else
    {
      new_var8 = &D_001A00F0;
      block_5:
      if (D_0013C940.unk1C4 & 0x10)
      {
        temp_3_44 = D_001D5BF0.unk4->unk38;
        if (temp_3_44 != 0)
        {
          D_001D5BF0.unk8 = temp_3_44;
          goto block_11;
        }
        if (D_001D5BF0.unk124 == 0)
        {
          var_2_34 = -1;
        }
        else
        {
          goto block_12;
        }
      }
      else
      {
        block_11:
        block_12:
        if (D_0013C940.unk1C4 & 0x40)
        {
          *((s32 *) ((short) 0x1D5BF8)) = D_001CF678;
          do
          {
          }
          while (0);
        }


        new_var2 = (*new_var8).unk224;
        new_var3 = 3;
        if ((D_0013C940.unk1C4 & 0x20) && (D_001A00F0.unk224 != 0))
        {
          new_var9 = D_001CF418;
          D_001D5BF0.unkE4 = (s32) D_001A00F0.unk224;
          D_001D5BF0.unkF0 = new_var9;
          D_001D5BF0.unkF4 = 0xB;
          D_001D5BF0.unkC = new_var3;
          func_0022DA68(0, 0x11, arg0->unk14, new_var3);
          goto block_69;
        }
        temp_2_87 = func_00205220(D_001A00F0.unk224);
        if (temp_2_87 >= 0)
        {
          if (D_0013C940.unk1C4 & 8)
          {
            if (temp_2_87 < 0x13)
            {
              temp_2_100 = *((s32 *) (((u8 *) ((temp_2_87 * 4) + D_001601E0)) + 0x4));
              if (temp_2_100 != 0)
              {
                D_001A00F0.unk224 = temp_2_100;
              }
            }
          }
          if ((D_0013C940.unk1C4 & 4) && (temp_2_87 != 0))
          {
            temp_3_114 = *((s32 *) (((u8 *) ((temp_2_87 * 4) + D_001601E0)) - 0x4));
            if (temp_3_114 != 0)
            {
              D_001A00F0.unk224 = temp_3_114;
            }
          }
        }
        if (D_001A00F0.unk224 != temp_18_28)
        {
          func_0022DA68(1, 0x11, arg0->unk14);
          func_0020B950();
        }
        goto block_30;
      }

    }
  }
  else
  {
    do
    {
      block_30:
      temp_30_135 = ((*((s32 *) 0x13D4E1)) != 0) ? (D_001A00F0.unk224 + 0x100) : (D_001A00F0.unk224);

      temp_16_138 = (var_20_302 = func_002050A0(temp_30_135));
      if (D_001A00F0.unk224 != D_001A00F0.unk228)
      {
        if (temp_16_138 != (-1))
        {
          temp_17_147 = func_00205278();
          asm volatile("" : "+r"(temp_17_147));
          var_2_150 = 2 * (2 * temp_16_138);
          do
          {
            if ((D_001A00F0.unk278 != 0) && (temp_17_147 > 0))
            {
              do
              {
                do
                {
                }
                while (0);
                var_3_337 = temp_16_138;
                func_00205000(temp_17_147, 0);
                var_2_150 = ((var_3_337 == 0) ? (temp_17_147) : (temp_16_138)) * 4;
              }
              while (0);
            }
          }
          while (0);
          temp_2_87 = 0x278;
          new_var7 = ((u8 *) (((u8 *) (&D_001A00F0)) + var_2_150)) + temp_2_87;
          func_0020B618(*((s32 *) new_var7), D_001A00F0.unk23C);
          temp_18_163 = D_001A00F0.unk23C;
          temp_22_167 = ((u8 *) temp_18_163) + temp_18_163->unk8;
          temp_21_169 = ((u8 *) temp_18_163) + temp_18_163->unkC;
          temp_2_168 = func_00225C18(0);
          new_var = temp_18_163;
          if (temp_2_168 != 0)
          {
            temp_5_178 = (D_001A00F0.unk23C + new_var->unk0) + 8;
            if (D_001A00F0.unk224 == D_0015ED84)
            {
              func_002053D8(temp_21_169, temp_22_167, temp_21_169, D_001A00F0.unkC);
            }
            else
            {
              if ((*(D_001A00F0.unk224 + D_0013DD58)) != 0)
              {
                func_00207BB0(temp_2_168, (D_001A00F0.unk224 << 0xB) + D_00141EC0, D_001A00F0.unk23C + new_var->unk4, D_001A00F0.unk23C);
              }
              else
              {
                func_00206710(temp_2_168, temp_5_178, temp_5_178, D_001A00F0.unk23C);
              }
              func_002053D8(temp_21_169, temp_22_167, temp_21_169, temp_2_168);
            }
          }
          if (!(arg0->unk34 & 0x80))
          {
            temp_7_224 = D_001A00F0.unk23C + new_var->unk10;
            temp_18_226 = temp_7_224 + 0x20;
            temp_16_230 = (D_001A00F0.unk23C + new_var->unk14) + 0x420;
            new_var11 = new_var;
            temp_17_231 = (D_001A00F0.unk23C + new_var->unk18) + 0x420;
            D_001A00F0.unk258 = func_00204E30(7, 7, temp_18_226, (D_001A00F0.unk23C + new_var11->unk10) + 0x420, D_001A00F0.unk244, D_001A00F0.unk248);
            D_001A00F0.unk260 = func_00204E30(7, 7, temp_18_226, temp_16_230, D_001A00F0.unk244, D_001A00F0.unk24C);
            D_001A00F0.unk268 = func_00204E30(7, 7, temp_18_226, temp_17_231, D_001A00F0.unk244, D_001A00F0.unk250);
            if (temp_2_168 != 0)
            {
              func_00204E30(9, 9, temp_21_169, temp_21_169, 0x3FF000, D_001A00F0.unk240);
            }
            func_0020B4A8();
          }
          if (temp_2_168 != 0)
          {
            func_00225CD8(temp_2_168);
          }
          D_001A00F0.unk278 = temp_22_167;
          D_001A00F0.unk228 = (s32) D_001A00F0.unk224;
          func_0020BF90(D_001A00F0.unk224, 0);
        }
      }
      if (D_001516D0.unk8 == 0)
      {
        if (D_001A00F0.unk2A0 != (-1))
        {
          temp_3_290 = (D_001A00F0.unk2A0 * 4) + (((u8 *) (&D_001A00F0)) + 0x28C);
          D_001D5CBB[0] = 0;
          *temp_3_290 = (*temp_3_290) ^ 0x1000;
          new_var6 = -1;
          D_001A00F0.unk2A0 = new_var6;
        }
      }
      var_20_302 = -1;
      if (D_001516D0.unk8 == 0)
      {
        var_20_302 = func_00204F60();
        temp_3_114 = -1;
        if (var_20_302 != temp_3_114)
        {
          temp_2_308 = func_002050E8();
          new_var5 = D_0015ED84 + D_001A00F0.unk230;
          temp_16_371 = (new_var5 == 0) ? (0) : (0x100);
          if (temp_2_308 != temp_3_114)
          {
            if (temp_16_371 == temp_2_308)
            {
              var_16_321 = var_20_302 * 4;
              var_2_339 = ((u8 *) (&D_001A00F0)) - (-var_16_321);
              func_00232F20(*((s32 *) (((u8 *) var_2_339) + 0x278)), D_001A00F0.unk22C, 0, D_001A00F0.unk234, 0);
              *((s32 *) (((u8 *) var_2_339) + 0x2A4)) = (s32) D_001A00F0.unk234;
            }
            else
            {
              new_var5 = temp_2_308 ^ 0x100;
              if (temp_2_308 & 0x100)
              {
                var_3_337 = new_var5 * 8;
                var_2_339 = D_00138438;
              }
              else
              {
                var_3_337 = temp_2_308 * 8;
                var_2_339 = D_001383A0;
              }
              temp_18_345 = var_3_337 + var_2_339;
              var_16_321 = var_20_302 * 4;
              func_00216788(*((s32 *) (((u8 *) (((u8 *) (&D_001A00F0)) - (-var_16_321))) + 0x278)), temp_18_345->unk0, temp_18_345->unk4);
              D_001D5CBB[0] = 1;
              new_var10 = &temp_18_345->unk4;
              var_2_34 = (short) (((s32) ((*new_var10) << 0xB)) >> 4);
              *((s32 *) (((u8 *) (((u8 *) (&D_001A00F0)) + var_16_321)) + 0x2A4)) = (s32) var_2_34;
            }
            new_var4 = (u8 *) (((u8 *) (&D_001A00F0)) - (-var_16_321));
            *((s32 *) (new_var4 - (-0x28C))) = (s32) (temp_2_308 | 0x1000);
            D_001A00F0.unk2A0 = var_20_302;
          }
        }
      }
    }
    while (0);
    temp_16_371 = func_002050A0(temp_30_135);
    if (D_001A00F0.unk224 != D_001A00F0.unk228)
    {
      var_2_34 = D_001516D0.unk8;
      new_var5 = (var_2_34 == 0) && ((var_2_34 = 0, temp_16_371 == (-1)));
      temp_2_87 = new_var5;
      var_2_34 = 0;
      if (temp_2_87)
      {
        if (var_20_302 == temp_16_371)
        {
          func_00205278(D_001A00F0.unk228);
          goto block_69;
        }
      }
    }
    else
    {
      block_69:
      var_2_34 = 0;

    }
  }
  return var_2_34;
}

__attribute__((alias("FUN_0021be60"))) extern s32 func_0021BE60(struct M2c_arg0 *arg0);
#endif /* NON_MATCHING */
