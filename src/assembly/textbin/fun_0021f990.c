#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021f990/FUN_0021f990.s", FUN_0021f990);
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
struct M2c_D_0013D290
{
  u8 pad_0[0xD4];
  s32 unkD4;
  u8 pad_D8[0x4];
  s32 unkDC;
};
struct M2c_D_001A00F0
{
  u8 pad_0[0x244];
  s32 unk244;
  s32 unk248;
  u8 pad_24C[0xC];
  s64 unk258;
};
struct M2c_D_001D5BF4
{
  u8 pad_0[0x40];
  struct M2c_D_001D5BF4_unk40 *unk40;
};
struct M2c_D_001D5BF4_unk40
{
  u8 pad_0[0x3C];
  s32 unk3C;
  s32 unk40;
};
struct M2c_arg0
{
  u8 pad_0[0x30];
  s32 unk30;
  s32 unk34;
  u8 pad_38[0xC];
  s32 unk44;
  struct M2c_temp_16_170 *unk48;
  u8 pad_4C[0x4];
  s32 unk50;
  u8 pad_54[0x4];
  s32 unk58;
  u8 pad_5C[0x4];
  s32 unk60;
};
struct M2c_temp_16_170
{
  u8 pad_0[0x8];
  s32 unk8;
  s32 unkC;
};
struct M2c_temp_2_131
{
  s32 unk0;
  s32 unk4;
};
struct M2c_temp_2_139
{
  s32 unk0;
  s32 unk4;
};
struct M2c_var_5_0
{
  u8 pad_0[0x40];
  struct M2c_var_5_0_unk40 *unk40;
};
struct M2c_var_5_0_unk40
{
  u8 pad_0[0x40];
  s32 unk40;
};
extern struct M2c_D_0013D290 D_0013D290;
extern s16 D_001516D8;
extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 D_001A0314[];
extern struct M2c_D_001D5BF4 *D_001D5BF4[];
extern s32 func_001F97A0();
extern s32 func_00204E30();
extern s32 func_0020B4A8();
extern s32 func_0020B618();
extern s32 func_00216788();
extern s32 func_00225D88();
extern void func_00225DD8();
extern s32 func_00225E20();
inline u8 *inline_fn(s32 arg0, struct M2c_arg0 *arg1)
{
  return ((u8 *) (arg0 + arg1->unk30)) + 0x4;
}

s32 FUN_0021f990(struct M2c_arg0 *arg0, s32 *arg1, s32 arg2, s32 *arg3, s32 arg4)
{
  struct M2c_var_5_0 *var_5_0;
  struct M2c_D_001D5BF4 **new_var4;
  s32 *var_7_0;
  s32 temp_16_46;
  s32 temp_16_48;
  s32 temp_16_74;
  s32 temp_18_107;
  u8 *new_var9;
  u8 *new_var11;
  struct M2c_D_001D5BF4 **new_var7;
  struct M2c_arg0 *new_var;
  s32 temp_18_178;
  s32 temp_2_122;
  s32 temp_3_11;
  s32 temp_3_78;
  s32 var_16_15;
  struct M2c_temp_16_170 **new_var10;
  u8 *new_var2;
  s32 var_2_133;
  s32 var_2_145;
  s32 var_6_0;
  s32 var_8_0;
  struct M2c_temp_16_170 *temp_16_170;
  s32 new_var3;
  struct M2c_temp_2_131 *temp_2_131;
  s32 new_var6;
  struct M2c_temp_2_139 *temp_2_139;
  s32 *temp_4_100;
  unsigned int new_var5;
  s32 *temp_4_164;
  s32 *var_17_115;
  struct M2c_temp_16_170 *new_var8;
  var_6_0 = arg2;
  var_7_0 = arg3;
  var_8_0 = arg4;
  temp_3_11 = arg0->unk34;
  if (!(temp_3_11 & 1))
  {
    goto block_3;
    var_5_0 = arg1;
  }
  var_16_15 = arg0->unk58;
  if (var_16_15 != (-1))
  {
    goto block_16;
  }
  goto block_39;
  block_3:
  if (!(temp_3_11 & 2))
  {
    goto block_5;
  }

  var_16_15 = D_001A0314[0];
  goto block_16;
  var_16_15 = (new_var3 = temp_3_11);
  block_5:
  if (!(var_16_15 & 4))
  {
    goto block_7;
  }

  new_var4 = D_001D5BF4;
  var_16_15 = new_var4[0]->unk40->unk3C;
  goto block_16;
  block_7:
  if (!(temp_3_11 & 0x100))
  {
    goto block_15;
  }

  var_5_0 = new_var4[0];
  new_var8 = arg0->unk48;
  var_7_0 = &D_0013D290;
  var_8_0 = -1;
  var_6_0 = 4;
  temp_16_46 = var_5_0->unk40->unk40;
  temp_16_48 = (temp_16_46 <= (-1)) ? (0) : (temp_16_46);
  var_16_15 = (temp_16_48 >= 5) ? (4) : (temp_16_48);
  if (D_0013D290.unkD4 >= 3)
  {
    goto block_13;
  }
  if (D_0013D290.unkDC >= 0)
  {
    goto block_14;
  }
  if (arg0->unk44 != (-1))
  {
    goto block_12;
  }
  do
  {
    arg0->unk44 = 0;
    block_12:
    var_16_15 = *((s32 *) (((u8 *) ((var_16_15 * 0x1C) + (&D_0013D290))) + 0x20));

    goto block_16;
    block_13:
    block_14:
    arg0->unk44 = -1;


    goto block_16;
    new_var7 = &D_001D5BF4[0];
    block_15:
    var_5_0 = new_var7;

    temp_16_74 = (new_var6 = D_001D5BF4[0]->unk40->unk40);
    var_16_15 = (temp_16_74 <= (-1)) ? (0) : (temp_16_74);
    block_16:
    temp_3_78 = arg0->unk44;

    if (temp_3_78 == 1)
    {
      goto block_34;
    }
    if (temp_3_78 >= 2)
    {
      goto block_20;
    }
    if (temp_3_78 == 0)
    {
      goto block_23;
    }
    return 0;
    block_20:
    if (temp_3_78 == 2)
    {
      goto block_23;
    }

    if (temp_3_78 == 3)
    {
      goto block_34;
    }
  }
  while (0);
  return 0;
  block_23:
  if (var_16_15 == arg0->unk50)
  {
    do
    {
      goto block_40;
    }
    while (0);
    if (1)
    {
    }
  }

  temp_4_100 = arg0->unk48;
  new_var10 = &arg0->unk48;
  if (temp_4_100 == 0)
  {
    goto block_39;
  }
  if ((*((s16 *) 0x1516D8)) != 0)
  {
    goto block_40;
  }
  temp_18_107 = var_16_15 * 8;
  if (0 == (*((s32 *) inline_fn(temp_18_107, arg0))))
  {
    goto block_40;
  }
  var_17_115 = temp_4_100;
  if (!(arg0->unk34 & 0x20))
  {
    goto block_29;
  }
  temp_2_122 = func_00225D88(temp_4_100, var_5_0, var_6_0, var_7_0, var_8_0) - ((*((s32 *) (((u8 *) (temp_18_107 + arg0->unk30)) + 0x4))) << 0xB);
  arg0->unk60 = temp_2_122;
  var_17_115 += temp_2_122;
  block_29:
  if (!(arg0->unk34 & 0x10))
  {
    goto block_31;
  }

  temp_2_131 = temp_18_107 + arg0->unk30;
  var_2_133 = func_00216788(var_17_115, temp_2_131->unk0, temp_2_131->unk4);
  goto block_32;
  block_31:
  temp_2_139 = temp_18_107 + arg0->unk30;

  var_2_133 = func_00216788(var_17_115, temp_2_139->unk0, temp_2_139->unk4);
  block_32:
  var_2_145 = -1;

  if (var_2_133 == 0)
  {
    goto block_38;
  }
  func_00225DD8(*new_var10);
  arg0->unk50 = var_16_15;
  arg0->unk44 = (temp_16_46 = (s32) (arg0->unk44 + 1));
  new_var = arg0;
  goto block_39;
  block_34:
  if ((*((s16 *) 0x1516D8)) != 0)
  {
    goto block_40;
  }

  func_00225E20(new_var8, var_5_0, var_6_0, var_7_0, var_8_0);
  if (!(arg0->unk34 & 0x20))
  {
    {
      goto block_37;
    }
  }
  temp_4_164 = new_var->unk48;
  func_0020B618(temp_4_164 - (-arg0->unk60), temp_4_164);
  arg0->unk60 = 0;
  block_37:
  temp_16_170 = new_var->unk48;

  new_var2 = ((u8 *) temp_16_170) + 0x20;
  new_var11 = (u8 *) temp_16_170;
  new_var5 = func_001F97A0(temp_16_170->unkC);
  new_var9 = new_var11 + 0x420;
  temp_18_178 = func_001F97A0(temp_16_170->unk8);
  D_001A00F0.unk258 = func_00204E30(temp_18_178, new_var5, new_var9, new_var2, D_001A00F0.unk244, D_001A00F0.unk248);
  func_0020B4A8();
  ;
  block_38:
  arg0->unk44 = 2;

  block_39:
  block_40:
  return 0;


}
#endif /* NON_MATCHING */
