/* ROLE: recovered function `snd_UnkFunction_0012eaf0` starts here; this unit covers only its beginning. */
typedef int s32;

extern s32 GlobalTableStatus __asm__("D_0015ECC4");

void ReadGlobalTableEntry(void) __asm__("ReadGlobalTableEntry");

void ReadGlobalTableEntry(void) {
    GlobalTableStatus = 1;
}
