#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _dispRefImageField; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/disprefimagefield/_dispRefImageField.s", _dispRefImageField);
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
struct M2c_arg0
{
  u8 pad_0[0x80];
  s32 unk80;
  u8 pad_84[0x4];
  s32 unk88;
  u8 pad_8C[0x24];
  s32 unkB0;
  s32 unkB4;
  s32 unkB8;
  u8 pad_BC[0x4];
  s32 unkC0;
  s32 unkC4;
  u8 pad_C8[0x4];
  s32 unkCC;
  s32 unkD0;
  u8 pad_D4[0xA0];
  s32 unk174;
  u8 pad_178[0x6E0];
  struct M2c_temp_7_45 *unk858;
};
struct M2c_arg1
{
  u8 pad_0[0x10];
  s32 unk10;
  u8 pad_14[0x14];
  s32 unk28;
};
struct M2c_arg2
{
  u8 pad_0[0x28];
  s32 unk28;
};
struct M2c_temp_7_35
{
  u8 pad_0[0x10];
  s32 unk10;
};
struct M2c_temp_7_45
{
  u8 pad_0[0x20];
  s64 unk20;
  s32 unk28;
  u8 pad_2C[0xC];
  s64 unk38;
};
struct M2c_var_19_19
{
  u8 pad_0[0x44];
  s32 unk44;
  u8 pad_48[0x8];
  s32 unk50;
  u8 pad_54[0x8];
  s32 unk5C;
  s32 unk60;
};
struct M2c_var_20_20
{
  u8 pad_0[0x48];
  s32 unk48;
  u8 pad_4C[0x8];
  s32 unk54;
};
extern s32 _cpr8();
extern s32 _csc_storeRefImage();
extern s32 _getPtsDtsFlags();
extern s32 _isOutSizeOK();
void _dispRefImageField(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1, struct M2c_arg2 *arg2)
{
  s32 temp_3_73;
  s32 temp_6_59;
  s32 *temp_7_27;
  s32 new_var3;
  u64 var_22_7;
  struct M2c_temp_7_35 *temp_7_35;
  struct M2c_temp_7_45 *temp_7_45;
  struct M2c_var_19_19 *var_19_19;
  s32 new_var;
  struct M2c_var_20_20 *var_20_20;
  u8 *new_var2;
  var_22_7 = 0;
  if (arg0->unk174 == 2)
  {
    var_19_19 = arg1;
    var_20_20 = arg2;
    var_22_7 = 0x40;
  }
  else
  {
    var_19_19 = arg2;
    var_20_20 = arg1;
  }
  temp_7_27 = arg0->unk858;
  _getPtsDtsFlags(arg0, var_19_19, (s32 *) (((u8 *) temp_7_27) + 0x10), (s32 *) (((u8 *) temp_7_27) + 0x18), (s32 *) (((u8 *) temp_7_27) + 0x20));
  temp_7_35 = arg0->unk858;
  temp_3_73 = temp_7_35->unk10;
  arg0->unk88 = 1;
  arg0->unk80 = (s32) temp_3_73;
  new_var2 = ((u8 *) temp_7_35) + 0x38;
  _getPtsDtsFlags(arg0, var_20_20, ((u8 *) temp_7_35) + 0x28, ((u8 *) temp_7_35) + 0x30, new_var2);
  temp_7_45 = arg0->unk858;
  new_var = temp_7_45->unk28;
  arg0->unk88 = 1;
  arg0->unk80 = (s32) new_var;
  temp_6_59 = var_19_19->unk60;
  temp_7_45->unk20 = (s64) (temp_7_45->unk20 | var_22_7);
  arg0->unkD0 = temp_6_59;
  arg0->unkCC = (s32) var_19_19->unk5C;
  temp_7_45->unk38 = (s64) (temp_7_45->unk38 | var_22_7);
  arg0->unkB4 = (s32) var_19_19->unk44;
  arg0->unkB8 = (s32) var_20_20->unk48;
  arg0->unkC0 = (s32) var_19_19->unk50;
  arg0->unkC4 = (s32) var_20_20->unk54;
  if (_isOutSizeOK(arg0, arg1, temp_6_59, temp_7_45, var_22_7) != 0)
  {
    new_var3 = arg1->unk28;
    if (arg0)
    {
      temp_3_73 = (new_var = new_var3);
    }
    else
    {
      temp_3_73 = arg1->unk28;
    }
    if (temp_3_73 == 1)
    {
      if (arg2->unk28 == temp_3_73)
      {
        arg1->unk10 = (s32) (arg1->unk10 * 2);
        if (arg0->unkB0 != 0)
        {
          _csc_storeRefImage(arg0, arg1);
        }
        else
        {
          _cpr8(arg0, arg1);
        }
        arg1->unk10 = (s32) (((s32) arg1->unk10) >> 1);
        func_00129B38(arg0);
      }
      if (1)
      {
      }
    }
  }
}
#endif /* NON_MATCHING */
