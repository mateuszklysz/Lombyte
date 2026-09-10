/* ROLE: recovered function `voBufIsEmpty` (movie/vobuf.cpp, 0x10 bytes) starts here; this unit covers only its first fragment. */
/* Report whether the state field at byte offset 0x0C is zero. */
int IsStateFieldZero(int *state_fields) __asm__("func_0023D2C8");

int IsStateFieldZero(int *state_fields) {
    return state_fields[3] == 0;
}
