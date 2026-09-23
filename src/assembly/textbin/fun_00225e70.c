#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225e70/FUN_00225e70.s", FUN_00225e70);
#else
#include "types.h"

struct M2c_D_001516D0
{
  u8 pad_0[0x8];
  s16 unk8;
  u8 pad_A[0x2];
};
struct M2c_D_001D5BF0
{
  u8 pad_0[0x30];
  s32 unk30;
  s32 unk34;
  s32 unk38;
  u8 pad_3C[0x80];
  s32 unkBC;
  u8 pad_C0[0x8];
  u8 unkC8;
  u8 unkC9;
  u8 unkCA;
  u8 unkCB;
  s32 unkCC;
};
struct M2c_D_001D5EC0
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  u8 pad_C[0x4];
  s32 unk10;
};
struct M2c_D_001D6080
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x4];
  s32 unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
  s32 unk1C;
  s32 unk20;
  s32 unk24;
  s32 unk28;
  s32 unk2C;
  s32 unk30;
  s32 unk34;
};
struct M2c_sp0
{
  u8 pad_0[0x10];
  s32 unk10;
  u8 pad_14[0x2C];
  s32 unk40;
  u8 pad_44[0x2C];
  s32 unk70;
};
struct M2c_temp_6_358
{
  u8 pad_0[0x10];
  s64 unk10;
  u8 pad_18[0x14];
  s32 unk2C;
  u8 pad_30[0x10];
  s64 unk40;
  u8 pad_48[0x5E];
  s32 unkA6;
};
struct M2c_temp_6_411
{
  u8 pad_0[0x10];
  s64 unk10;
  u8 pad_18[0x14];
  s32 unk2C;
  u8 pad_30[0x10];
  s64 unk40;
  u8 pad_48[0x5E];
  s32 unkA6;
};
struct M2c_temp_6_466
{
  u8 pad_0[0x10];
  s64 unk10;
  u8 pad_18[0x14];
  s32 unk2C;
  u8 pad_30[0x10];
  s64 unk40;
  u8 pad_48[0x5E];
  s32 unkA6;
};
extern u8 D_00137B80[];
extern struct M2c_D_001516D0 D_001516D0;
extern s32 D_00160350;
extern u8 D_001863D0[];
extern u8 D_001B3200[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern struct M2c_D_001D5EC0 D_001D5EC0;
extern struct M2c_D_001D6080 D_001D6080;
extern u8 D_00224B68[];
extern void RaiseKernelTrap();
extern void func_002032E0();
extern void func_0020B618();
extern void func_0020DEF8();
extern void func_00212ED8();
extern void func_00212F90();
extern void func_002130D8();
extern s32 func_00216788();
extern s32 func_00225490();
extern s32 func_00225530();
extern s32 func_00225D88();
extern void func_00225DD8();
extern void func_00225E20();
extern void func_00226670();
extern void func_002267B8();
extern void func_00226848();
inline u8 *inline_fn(u8 *arg0)
{
  return (u8 *) (arg0 + (D_001D6080.unk10 * 0x4C));
}

s32 FUN_00225e70(s32 *arg0, s32 *arg1, s32 *arg2, void **arg3, s32 *arg4, s32 *arg5)
{
  struct M2c_sp0 *sp0;
  s32 *sp4;
  s32 *sp8;
  s32 *spC;
  s32 *sp10;
  s32 sp14;
  s32 sp18;
  s32 sp1C;
  s32 *temp_2_341;
  s32 *temp_2_391;
  s32 *temp_2_446;
  s32 new_var;
  struct M2c_temp_6_358 *temp_6_358;
  struct M2c_D_001D6080 *new_var2;
  struct M2c_temp_6_411 *temp_6_411;
  struct M2c_temp_6_466 *temp_6_466;
  s16 temp_5_367;
  s16 temp_5_420;
  s16 temp_5_475;
  s32 *temp_18_127;
  s32 *temp_18_57;
  s32 temp_16_133;
  s32 temp_16_58;
  s32 temp_17_55;
  s32 temp_19_124;
  s32 temp_20_129;
  s32 temp_2_36;
  s32 temp_4_136;
  s32 *temp_30_101;
  sp0 = arg0;
  sp4 = arg1;
  sp8 = arg2;
  spC = arg4;
  sp10 = arg5;
  sp14 = 0;
  sp18 = 0;
  sp1C = 0;
  if (D_00160350 == 0)
  {
    goto block_79;
  }
  if (!(sp0->unk70 & 2))
  {
    goto block_5;
  }
  sp14 = 1;
  temp_2_36 = D_001D6080.unkC - 1;
  if (D_001D6080.unkC == 0)
  {
    goto block_4;
  }
  D_001D6080.unkC = temp_2_36;
  if (temp_2_36 != 0)
  {
    goto block_5;
  }
  block_4:
  sp18 = 1;

  block_5:
  if (D_001D5BF0.unkCB == 0)
  {
    goto block_9;
  }

  if (D_001516D0.unk8 != 0)
  {
    goto block_8;
  }
  temp_17_55 = D_001D5BF0.unkCB - 1;
  temp_18_57 = (temp_17_55 * 4) + (((u8 *) (&D_001D5BF0)) + 0xA0);
  temp_16_58 = *temp_18_57;
  func_0020B618(temp_16_58 + D_001D5BF0.unkBC, temp_16_58);
  D_001D5BF0.unkBC = 0;
  func_00225E20(temp_16_58);
  *((s32 *) (((u8 *) (((u8 *) (&D_001D5BF0)) + temp_17_55)) + 0xC8)) = (u8) D_001D5EC0.unk4;
  D_001D5EC0.unk0 = 2;
  *((s32 *) (((u8 *) ((*((s32 *) D_001B3200)) + (((s32) D_001D5EC0.unk4) * 4))) + 0x48)) = (s32) (*temp_18_57);
  func_002032E0(D_001B3200, (s32) D_001D5EC0.unk4, &D_001D5EC0, &D_001D5EC0, D_001B3200);
  D_001D5BF0.unkCB = 0U;
  block_8:
  if (D_001D5BF0.unkCB != 0)
  {
    goto block_23;
  }

  block_9:
  if (D_001516D0.unk8 != 0)
  {
    goto block_23;
  }

  if (D_00160350 <= 0)
  {
    goto block_46;
  }
  if (D_001D5EC0.unk0 != 0)
  {
    goto block_22;
  }
  temp_30_101 = ((u8 *) (&D_001D5BF0)) + 0xC8;
  if ((*(D_001D5BF0.unkCA + temp_30_101)) == ((u32) D_001D5EC0.unk4))
  {
    goto block_16;
  }
  if ((*((D_001D5BF0.unkCA == 0) + temp_30_101)) == ((u32) D_001D5EC0.unk4))
  {
    goto block_15;
  }
  goto block_17;
  block_15:
  block_16:
  D_001D5EC0.unk0 = 2;


  goto block_22;
  block_17:
  if (((u32) D_001D5EC0.unk4) >= ((u32) D_001D5BF0.unkCC))
  {
    goto block_19;
  }

  D_001D5EC0.unk0 = 3;
  goto block_22;
  block_19:
  temp_19_124 = (((u32) D_001D5EC0.unk4) - D_001D5BF0.unkCC) * 8;

  temp_18_127 = temp_19_124 + (D_00137B80 + 0x1C);
  temp_20_129 = *((s32 *) (((u8 *) (((u8 *) (&D_001D5BF0)) + (D_001D5BF0.unkCA * 4))) + 0xA0));
  temp_16_133 = (*temp_18_127) << 0xB;
  temp_4_136 = (temp_20_129 + func_00225D88(temp_20_129)) - temp_16_133;
  D_001D5BF0.unkBC = (s32) (temp_4_136 - temp_20_129);
  if (func_00216788(temp_4_136, *((s32 *) (((u8 *) (D_00137B80 + temp_19_124)) + 0x18)), *temp_18_127) != 0)
  {
    goto block_21;
  }
  RaiseKernelTrap();
  block_21:
  func_00225DD8(temp_20_129);

  D_001D5EC0.unk0 = 1;
  D_001D5BF0.unkCB = (u8) (D_001D5BF0.unkCA + 1);
  *((D_001D5BF0.unkCA & 0xFF) + temp_30_101) = 0xFF;
  block_22:
  block_23:
  if (D_00160350 <= 0)
  {
    goto block_46;
  }


  if (((u32) (D_001D5EC0.unk0 - 2)) >= 2U)
  {
    goto block_46;
  }
  if (D_001D5EC0.unk10 == 0)
  {
    goto block_30;
  }
  if (D_001D5BF0.unk30 == D_001D5EC0.unk10)
  {
    goto block_31;
  }
  if (D_001D5BF0.unk38 == D_001D5EC0.unk10)
  {
    goto block_31;
  }
  if (D_001D5BF0.unk34 == D_001D5EC0.unk10)
  {
    goto block_31;
  }
  sp1C = 0;
  asm volatile("" : : "r"(&D_001D5BF0));
  func_00226670(&D_001D5BF0, &D_001D5EC0);
  goto block_46;
  new_var2 = &D_001D6080;
  block_30:
  block_31:
  if (D_001D5EC0.unk8 != 0)
  {
    goto block_33;
  }


  sp1C = 1;
  goto block_46;
  block_33:
  if (D_001D5EC0.unk8 == 1)
  {
    goto block_35;
  }

  goto block_40;
  block_35:
  if (sp14 != 0)
  {
    goto block_38;
  }

  goto block_40;
  block_38:
  sp1C = 1;

  goto block_46;
  block_40:
  if (D_001D5EC0.unk8 != 2)
  {
    goto block_44;
  }

  if (sp18 == 0)
  {
    goto block_43;
  }
  sp1C = 1;
  goto block_46;
  block_43:
  block_44:
  if (D_001D5EC0.unk8 != 3)
  {
    goto block_47;
  }


  sp1C = 0;
  func_00226670((void *) 3, &D_001D5EC0);
  block_46:
  block_47:
  if (sp1C == 0)
  {
    goto block_79;
  }


  func_00226670(0, 0, &D_001D6080);
  func_002267B8();
  func_00226848(D_001D6080.unk30, D_001D6080.unk34);
  func_002130D8(sp0, D_001D6080.unk4, 0, 0xA, 5);
  if ((*new_var2).unk4 == D_001D5BF0.unkC8)
  {
    goto block_50;
  }
  goto block_52;
  block_50:
  D_001D5BF0.unkCA = 1U;

  goto block_54;
  block_52:
  if (D_001D6080.unk4 != D_001D5BF0.unkC9)
  {
    goto block_54;
  }

  D_001D5BF0.unkCA = 0U;
  block_54:
  if ((*((s32 *) (inline_fn(D_001863D0) + 0x8))) != 2)
  {
    goto block_59;
  }

  if (sp8 == 0)
  {
    goto block_57;
  }
  func_002130D8(sp8, D_001D6080.unk14, 0, 0xA, 5);
  block_57:
  if (sp4 == 0)
  {
    goto block_61;
  }

  func_00212ED8(sp4, 1, 0);
  goto block_61;
  block_59:
  if (sp4 == 0)
  {
    goto block_61;
  }

  func_002130D8(sp4, D_001D6080.unk14, 0, 0xA, 5);
  block_61:
  *arg3 = func_00225530(*arg3);

  *spC = func_00225530(*spC);
  *sp10 = func_00225530(*sp10, sp10);
  if (D_001D6080.unk18 != (-1))
  {
    goto block_63;
  }
  goto block_69;
  block_63:
  temp_2_341 = func_00225490(D_001D6080.unk18);

  *arg3 = temp_2_341;
  if (temp_2_341 == 0)
  {
    goto block_68;
  }
  func_00212ED8(temp_2_341, D_001D6080.unk1C, 0);
  func_00212F90(*arg3, D_001D6080.unk1C, 0, 0xA);
  *((s32 *) (((u8 *) (*arg3)) + 0x34)) = 0;
  temp_6_358 = *arg3;
  temp_6_358->unk10 = (s64) sp0->unk10;
  temp_6_358->unk40 = (s64) sp0->unk40;
  temp_5_367 = temp_6_358->unkA6;
  if (temp_5_367 != 0x4A)
  {
    goto block_67;
  }
  temp_6_358->unk2C = (f32) ((u32) (temp_6_358->unk2C * 3.0f));
  block_67:
  func_0020DEF8(*arg3, temp_5_367, temp_6_358);

  *((s32 *) (((u8 *) (*arg3)) + 0x74)) = D_00224B68;
  block_68:
  block_69:
  if (D_001D6080.unk20 == (-1))
  {
    goto block_74;
  }


  temp_2_391 = func_00225490(D_001D6080.unk20);
  *spC = temp_2_391;
  if (temp_2_391 == 0)
  {
    goto block_74;
  }
  func_00212ED8(temp_2_391, D_001D6080.unk24, 0);
  func_00212F90(*spC, D_001D6080.unk24, 0, 0xA);
  *((s32 *) (((u8 *) (*spC)) + 0x34)) = 0;
  temp_6_411 = *spC;
  temp_6_411->unk10 = (s64) sp0->unk10;
  temp_6_411->unk40 = (s64) sp0->unk40;
  temp_5_420 = temp_6_411->unkA6;
  new_var = *spC;
  if (temp_5_420 != 0x4A)
  {
    goto block_73;
  }
  temp_6_411->unk2C = (f32) ((u32) (temp_6_411->unk2C * 3));
  block_73:
  func_0020DEF8(*spC, temp_5_420, spC);

  *((s32 *) (0x74 + ((u8 *) new_var))) = D_00224B68;
  block_74:
  if (D_001D6080.unk28 == (-1))
  {
    goto block_80;
  }

  temp_2_446 = func_00225490(D_001D6080.unk28);
  *sp10 = temp_2_446;
  if (temp_2_446 == 0)
  {
    goto block_79;
  }
  func_00212ED8(temp_2_446, D_001D6080.unk2C, 0);
  func_00212F90(*sp10, D_001D6080.unk2C, 0, 0xA);
  *((s32 *) (((u8 *) (*sp10)) + 0x34)) = 0;
  temp_6_466 = *sp10;
  temp_6_466->unk10 = (s64) sp0->unk10;
  temp_6_466->unk40 = (s64) sp0->unk40;
  temp_5_475 = temp_6_466->unkA6;
  if (temp_5_475 != 0x4A)
  {
    goto block_78;
  }
  temp_6_466->unk2C = (f32) ((u32) (temp_6_466->unk2C * 3));
  block_78:
  func_0020DEF8(*sp10, temp_5_475, sp10);

  *((s32 *) (((u8 *) (*sp10)) + 0x74)) = D_00224B68;
  block_79:
  block_80:
  return 0;


}

__attribute__((alias("FUN_00225e70"))) extern s32 func_00225E70(s32 *arg0, s32 *arg1, s32 *arg2, void **arg3, s32 *arg4, s32 *arg5);
#endif /* NON_MATCHING */
