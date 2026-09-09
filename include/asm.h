#ifndef RNCDECOMP_ASM_H
#define RNCDECOMP_ASM_H

/*
 * Assembly-backed C fallback support.
 *
 * The normal matching build leaves NON_MATCHING undefined, so the original
 * expected assembly is included verbatim.  Defining NON_MATCHING selects the
 * descriptive C branch for coverage-oriented builds and review.  Keep this
 * macro deliberately small: the expected .s file is the single source of
 * truth for the exact branch and the symbol parameter documents the oracle
 * identity without changing the assembler input.
 */
#define INCLUDE_ASM(path, symbol) __asm__(".include \"macro.inc\"\n.include \"" path "\"")

#endif /* RNCDECOMP_ASM_H */
