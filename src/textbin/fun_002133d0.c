/*
STATE: C_EXACT
SYMBOL: FUN_002133d0
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: cc_himuro_patched (v3) + Ps2EeAs padless -O2 -g2 -gstabs
DECISION: promoted
*/

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
extern f32 func_001F9DC8(f32);
f32 FUN_002133d0(s32 arg0, f32 fparg0, f32 fparg1, f32 fparg2)
{
  if (fparg2 != 0.0f)
  {
    goto block_2;
  }
  return fparg0;
  block_2:
  if (fparg2 != 1.0f)
  {
    block_4:
    return fparg0 + ((fparg1 - fparg0) * ((1.0f - func_001F9DC8(fparg2 * 3.1415927f)) * 0.5f));

    goto block_4;
  }

  return fparg1;
}

