/*
STATE: C_EXACT
SYMBOL: GetCoreDataTable
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Return the fixed core-data table address used by parser helpers. */
typedef unsigned char u8;

extern u8 CoreDataTable[1] __asm__("D_00132D40")
    __attribute__((section(".data")));

void *GetCoreDataTable(void) __asm__("GetCoreDataTable");

void *GetCoreDataTable(void) {
    return CoreDataTable;
}
