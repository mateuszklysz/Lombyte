/* ROLE: recovered function `voBufIsFull__FP5VoBuf` (movie/vobuf.cpp, 0x18 bytes) starts here; this unit covers only its first fragment. */
/* Report whether the two state fields contain the same value. */
int CompareStateFields(int *state_fields) __asm__("func_0023D1F8");

int CompareStateFields(int *state_fields) {
    return state_fields[3] == state_fields[4];
}
