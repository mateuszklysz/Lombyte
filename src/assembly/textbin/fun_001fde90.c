#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fde90/FUN_001fde90.s", FUN_001fde90);
#else
#include "types.h"

struct M2c_D_001516D0
{
  u8 pad_0[0x1C];
  s32 unk1C;
  u8 pad_20[0x30];
  s32 unk50;
  s16 unk54;
  u8 pad_56[0x4];
  s16 unk5A;
  u8 pad_5C[0x2];
};
struct M2c_D_001996D0
{
  s32 unk0;
  s32 unk4;
  u8 pad_8[0x1C];
  s32 unk24;
  u8 pad_28[0x8];
  s32 unk30;
  s32 unk34;
};
struct M2c_temp_16_152
{
  u8 pad_0[0x20];
  s32 unk20;
  s32 unk24;
};
struct M2c_temp_16_332
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x18];
  s32 unk20;
};
struct M2c_temp_16_536
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x18];
  s32 unk20;
};
struct M2c_temp_16_68
{
  u8 pad_0[0x20];
  s32 unk20;
  u8 pad_24[0x4];
  s32 unk28;
  u8 pad_2C[0xC];
  s16 unk38;
  s16 unk3A;
};
struct M2c_temp_19_105
{
  u8 pad_0[0x20];
  s32 unk20;
  u8 pad_24[0x4];
  s32 unk28;
  u8 pad_2C[0xE];
  s16 unk3A;
  u8 pad_3C[0x2];
};
struct M2c_temp_19_195
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x20];
  s32 unk28;
};
struct M2c_temp_19_440
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x20];
  s32 unk28;
};
struct M2c_temp_3_504
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x18];
  s32 unk20;
};
struct M2c_temp_3_678
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x18];
  s32 unk20;
  u8 pad_24[0x14];
  s16 unk38;
  u8 pad_3A[0x2];
};
struct M2c_var_19_274
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x20];
  s32 unk28;
};
struct M2c_var_3_259
{
  u8 pad_0[0x4];
  s32 unk4;
};
extern s32 D_0013CAE0[];
extern s32 D_0013CAE4[];
extern u8 D_00141968[];
extern struct M2c_D_001516D0 D_001516D0;
extern s32 D_0015ED84[];
extern s32 D_0015EE1D;
extern s32 D_0015EEA4[];
extern s32 D_0015F604[];
extern s32 D_0015F6A0[];
extern struct M2c_D_001996D0 D_001996D0;
extern s32 func_001F96F8();
extern s32 func_001F9740();
extern s32 func_001FDCA0();
extern void func_001FDD58();
extern s32 func_002151D8();
extern s32 func_00215B10();
void FUN_001fde90(void)
{
  s32 *temp_5_140;
  s32 *temp_5_245;
  s32 *temp_5_490;
  s32 *var_4_324;
  s32 temp_16_30;
  s32 temp_2_156;
  s32 temp_3_348;
  s32 temp_4_153;
  s32 temp_4_549;
  s32 temp_4_662;
  s32 temp_5_176;
  s32 temp_5_515;
  s32 var_2_265;
  s32 var_2_326;
  s32 var_2_350;
  s32 var_3_328;
  s32 var_5_325;
  u16 *temp_3_201;
  u16 *temp_3_280;
  u16 *temp_3_372;
  u16 *temp_3_446;
  u16 *temp_3_576;
  u16 *temp_3_93;
  u16 temp_2_202;
  u16 temp_2_281;
  u16 temp_2_373;
  u16 temp_2_447;
  u16 temp_2_577;
  u16 temp_2_94;
  struct M2c_temp_16_152 *temp_16_152;
  struct M2c_temp_16_332 *temp_16_332;
  struct M2c_temp_16_536 *temp_16_536;
  struct M2c_temp_16_68 *temp_16_68;
  struct M2c_temp_19_105 *temp_19_105;
  struct M2c_temp_19_195 *temp_19_195;
  struct M2c_temp_19_440 *temp_19_440;
  struct M2c_temp_3_504 *temp_3_504;
  struct M2c_temp_3_678 *temp_3_678;
  struct M2c_var_19_274 *var_19_274;
  struct M2c_var_3_259 *var_3_259;
  if (D_001996D0.unk30 == 0)
  {
    if (D_001996D0.unk34 == 0)
    {
      if (D_0013CAE0[0] & 0xF000)
      {
        D_001996D0.unk34 = 1;
      }
      if (D_001996D0.unk34 != 0)
      {
        goto block_5;
      }
    }
    else
    {
      block_5:
      temp_16_30 = D_001996D0.unk34 + 1;

      D_001996D0.unk34 = temp_16_30;
      if (temp_16_30 >= func_001F96F8(0x78))
      {
        D_001996D0.unk30 = 1;
      }
    }
  }
  if (D_0015F604[0] == 0)
  {
    if (D_001996D0.unk30 != 0)
    {
      D_001996D0.unk4 = (s32) (D_001996D0.unk4 + 1);
      switch (D_001996D0.unk0)
      {
        case 8:
          temp_16_68 = (&D_001996D0) - 0x6930;
          if (temp_16_68->unk38 == 0)
        {
          if (temp_16_68->unk20 >= 0)
          {
            if (temp_16_68->unk3A != 0)
            {
              temp_3_93 = (temp_16_68->unk28 * 8) + D_00141968;
              temp_2_94 = *temp_3_93;
              if (temp_2_94 <= 0xFFFEU)
              {
                *temp_3_93 = temp_2_94 + 1;
              }
              goto block_25;
            }
            if (func_001F9740(((u8 *) temp_16_68) + 0x3C) != 0)
            {
              func_001FDD58();
              temp_16_68->unk3A = (s16) (((u16) temp_16_68->unk3A) + 1);
            }
          }
          else
          {
            block_25:
            temp_19_105 = (&D_001996D0) - 0x6930;

            if (((s32) (*((s32 *) (((u8 *) ((temp_19_105->unk28 * 8) + D_00141968)) + 0x2)))) < (func_001F96F8(D_0015EEA4[0]) / 600))
            {
              *((s32 *) (((u8 *) ((temp_19_105->unk28 * 8) + D_00141968)) + 0x2)) = (s16) (func_001F96F8(D_0015EEA4[0]) / 600);
            }
            temp_5_140 = (temp_19_105->unk28 * 8) + (D_00141968 + 4);
            temp_19_105->unk20 = -1;
            *((s32 *) (((u8 *) (&D_001996D0)) - 0x6930)) = 0;
            temp_19_105->unk3A = 0;
            *temp_5_140 = ((*temp_5_140) | (1 << D_0015ED84[0])) | 0x80000000;
          }
        }
          break;

        case 0:
          temp_16_152 = (&D_001996D0) - 0x6930;
          temp_4_153 = temp_16_152->unk24;
          if (temp_4_153 >= 0)
        {
          temp_2_156 = func_001FDCA0(temp_4_153);
          temp_16_152->unk20 = temp_2_156;
          temp_16_152->unk24 = -1;
          if (temp_2_156 >= 0)
          {
            func_001FDD58();
          }
        }
          break;

        case 1:
          func_002151D8(5, 0);
          ;
          if (temp_5_176 >= 0)
        {
          if ((D_001516D0.unk50 == 0) && (D_001516D0.unk1C == (-1)))
          {
            D_001516D0.unk1C = (s32) (temp_5_176 + 0x7530);
          }
        }
          temp_19_195 = (&D_001996D0) - 0x6930;
          if (D_0013CAE4[0] & 0x10)
        {
          temp_3_201 = (temp_19_195->unk28 * 8) + D_00141968;
          temp_2_202 = *temp_3_201;
          if (temp_2_202 <= 0xFFFEU)
          {
            *temp_3_201 = temp_2_202 + 1;
          }
          if (((s32) (*((s32 *) (((u8 *) ((temp_19_195->unk28 * 8) + D_00141968)) + 0x2)))) < (func_001F96F8(D_0015EEA4[0], temp_5_176) / 600))
          {
            *((s32 *) (((u8 *) ((temp_19_195->unk28 * 8) + D_00141968)) + 0x2)) = (s16) (func_001F96F8(D_0015EEA4[0]) / 600);
          }
          temp_5_245 = (temp_19_195->unk28 * 8) + (D_00141968 + 4);
          temp_19_195->unk4 = (s32) (8 - ((u32) temp_19_195->unk4));
          *temp_5_245 = ((*temp_5_245) | (1 << D_0015ED84[0])) | 0x80000000;
          *((s32 *) (((u8 *) (&D_001996D0)) - 0x6930)) = 7;
        }
        else
        {
          var_3_259 = (&D_001996D0) - 0x6930;
          if (var_3_259->unk4 >= 6)
          {
            var_2_265 = 2;
            block_63:
            var_3_259->unk4 = 0;

            *((s32 *) (((u8 *) (&D_001996D0)) - 0x6930)) = var_2_265;
          }
        }
          break;

        case 2:
          func_002151D8(5, 0);
          var_19_274 = (&D_001996D0) - 0x6930;
          if (D_0013CAE4[0] & 0x10)
        {
          temp_3_280 = (var_19_274->unk28 * 8) + D_00141968;
          temp_2_281 = *temp_3_280;
          if (temp_2_281 <= 0xFFFEU)
          {
            *temp_3_280 = temp_2_281 + 1;
          }
          if (((s32) (*((s32 *) (((u8 *) ((var_19_274->unk28 * 8) + D_00141968)) + 0x2)))) < (func_001F96F8(D_0015EEA4[0]) / 600))
          {
            *((s32 *) (((u8 *) ((var_19_274->unk28 * 8) + D_00141968)) + 0x2)) = (s16) (func_001F96F8(D_0015EEA4[0]) / 600);
          }
          var_4_324 = (var_19_274->unk28 * 8) + (D_00141968 + 4);
          var_5_325 = 1 << D_0015ED84[0];
          var_2_326 = *var_4_324;
          var_3_328 = 7;
          block_89:
          *((s32 *) (((u8 *) (&D_001996D0)) - 0x6930)) = var_3_328;

          var_19_274->unk4 = 0;
          *var_4_324 = (var_2_326 | var_5_325) | 0x80000000;
        }
        else
        {
          temp_16_332 = (&D_001996D0) - 0x6930;
          if (temp_16_332->unk4 >= func_001F96F8(0x18))
          {
            if (D_001516D0.unk5A != 3)
            {
              temp_3_348 = *((s32 *) (((u8 *) ((temp_16_332->unk20 * 0x10) + D_0015F6A0[0])) + 0x8));
              var_2_350 = 3;
              if (temp_3_348 != (-1))
              {
                if (temp_3_348 != (D_001516D0.unk54 - 0x7530))
                {
                  goto block_54;
                }
              }
              else
              {
                goto block_94;
              }
            }
            else
            {
              block_54:
              var_2_350 = 3;

              block_94:
              *((s32 *) (((u8 *) (&D_001996D0)) - 0x6930)) = var_2_350;

              *((s32 *) (((u8 *) ((&D_001996D0) - 0x6930)) + 0x4)) = 0;
            }
          }
        }
          break;

        case 3:
          func_002151D8(5, 0);
          var_19_274 = (&D_001996D0) - 0x6930;
          if (D_0013CAE4[0] & 0x10)
        {
          temp_3_372 = (var_19_274->unk28 * 8) + D_00141968;
          temp_2_373 = *temp_3_372;
          if (temp_2_373 <= 0xFFFEU)
          {
            *temp_3_372 = temp_2_373 + 1;
          }
          if (((s32) (*((s32 *) (((u8 *) ((var_19_274->unk28 * 8) + D_00141968)) + 0x2)))) < (func_001F96F8(D_0015EEA4[0]) / 600))
          {
            *((s32 *) (((u8 *) ((var_19_274->unk28 * 8) + D_00141968)) + 0x2)) = (s16) (func_001F96F8(D_0015EEA4[0]) / 600);
          }
          var_4_324 = (var_19_274->unk28 * 8) + (D_00141968 + 4);
          var_5_325 = D_0015ED84[0];
          var_5_325 = 1 << var_5_325;
          var_2_326 = *var_4_324;
          var_3_328 = 7;
          goto block_89;
        }
          var_3_259 = (&D_001996D0) - 0x6930;
          if (var_3_259->unk4 >= 8)
        {
          var_2_265 = 4;
          goto block_63;
        }
          break;

        case 4:
          func_002151D8(5, 0);
          temp_19_440 = (&D_001996D0) - 0x6930;
          if (D_0013CAE4[0] & 0x10)
        {
          temp_3_446 = (temp_19_440->unk28 * 8) + D_00141968;
          temp_2_447 = *temp_3_446;
          if (temp_2_447 <= 0xFFFEU)
          {
            *temp_3_446 = temp_2_447 + 1;
          }
          if (((s32) (*((s32 *) (((u8 *) ((temp_19_440->unk28 * 8) + D_00141968)) + 0x2)))) < (func_001F96F8(D_0015EEA4[0]) / 600))
          {
            *((s32 *) (((u8 *) ((temp_19_440->unk28 * 8) + D_00141968)) + 0x2)) = (s16) (func_001F96F8(D_0015EEA4[0]) / 600);
          }
          temp_4_549 = (u32) temp_19_440->unk4;
          temp_5_490 = (temp_19_440->unk28 * 8) + (D_00141968 + 4);
          *((s32 *) (((u8 *) (&D_001996D0)) - 0x6930)) = 6;
          *temp_5_490 = ((*temp_5_490) | (1 << D_0015ED84[0])) | 0x80000000;
          temp_19_440->unk4 = (s32) (4 - temp_4_549);
        }
        else
        {
          temp_3_504 = (&D_001996D0) - 0x6930;
          if (temp_3_504->unk4 >= 4)
          {
            temp_5_515 = *((s32 *) (((u8 *) ((temp_3_504->unk20 * 0x10) + D_0015F6A0[0])) + 0x8));
            if (temp_5_515 != (-1))
            {
              var_2_350 = 5;
              if (temp_5_515 == (D_001516D0.unk54 - 0x7530))
              {
                var_2_350 = 5;
                if (D_001516D0.unk5A == 3)
                {
                  func_00215B10(-1, temp_5_515);
                  goto block_75;
                }
              }
            }
            else
            {
              block_75:
              var_2_350 = 5;

            }
            goto block_94;
          }
        }
          break;

        case 5:
          func_002151D8(5, 0);
          temp_16_536 = (&D_001996D0) - 0x6930;
          if (temp_16_536->unk4 >= func_001F96F8(0x1A4))
        {
          temp_4_549 = *((s32 *) (((u8 *) ((temp_16_536->unk20 * 0x10) + D_0015F6A0[0])) + 0x8));
          if (temp_4_549 != (-1))
          {
            var_19_274 = (&D_001996D0) - 0x6930;
            if ((temp_4_549 == (D_001516D0.unk54 - 0x7530)) && ((D_001516D0.unk50 != 0) || (D_001516D0.unk1C != (-1))))
            {
              goto block_82;
            }
            goto block_84;
          }
          goto block_83;
        }
          block_82:
        if (D_0013CAE4[0] & 0x10)
        {
          block_83:
          var_19_274 = (&D_001996D0) - 0x6930;

          block_84:
          temp_3_576 = (var_19_274->unk28 * 8) + D_00141968;

          temp_2_577 = *temp_3_576;
          if (temp_2_577 <= 0xFFFEU)
          {
            *temp_3_576 = temp_2_577 + 1;
          }
          if (((s32) (*((s32 *) (((u8 *) ((var_19_274->unk28 * 8) + D_00141968)) + 0x2)))) < (func_001F96F8(D_0015EEA4[0]) / 600))
          {
            if (&D_001516D0)
            {
              *((s32 *) (((u8 *) ((var_19_274->unk28 * 8) + D_00141968)) + 0x2)) = (s16) (func_001F96F8(D_0015EEA4[0]) / 600);
            }
            else
            {
              *((s32 *) (((u8 *) ((var_19_274->unk28 * 8) + D_00141968)) + 0x2)) = (s16) (func_001F96F8(D_0015EEA4[0]) / 600);
            }
          }
          var_4_324 = (var_19_274->unk28 * 8) + (D_00141968 + 4);
          var_5_325 = 1 << D_0015ED84[0];
          var_2_326 = *var_4_324;
          var_3_328 = 6;
          goto block_89;
        }

          break;

        case 6:
          if (((D_0015EE1D == 0) || ((*((s32 *) (((u8 *) ((&D_001996D0) - 0x6930)) + 0x4))) >= 4)) || (D_0013CAE4[0] & 0x10))
        {
          var_2_350 = 7;
          goto block_94;
        }
          break;

        case 7:
          func_002151D8(5, 0);
          ;
          if (((temp_4_662 != (-1)) && (temp_4_662 == (D_001516D0.unk54 - 0x7530))) && (((u32) (((u16) D_001516D0.unk5A) - 6)) >= 2U))
        {
          D_001516D0.unk5A = 5;
        }
          temp_3_678 = (&D_001996D0) - 0x6930;
          if (temp_3_678->unk4 >= 8)
        {
          if (temp_3_678->unk38 != 0)
          {
            *((s32 *) (((u8 *) (&D_001996D0)) - 0x6930)) = 8;
          }
          else
          {
            *((s32 *) (((u8 *) (&D_001996D0)) - 0x6930)) = 0;
            temp_3_678->unk20 = -1;
          }
          *((s32 *) (((u8 *) ((&D_001996D0) - 0x6930)) + 0x4)) = 0;
        }
          break;

      }

    }
    else
    {
      goto block_13;
    }
  }
  else
  {
    block_13:
    D_001996D0.unk24 = -1;

    D_001996D0.unk0 = 0U;
    D_001996D0.unk4 = 0;
  }
}

__attribute__((alias("FUN_001fde90"))) extern void func_001FDE90(void);
#endif /* NON_MATCHING */
