/*
STATE: C_EXACT
SYMBOL: __muldi3
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: __muldi3
unit: assembly/sdk/library/__muldi3
code_percent: 0.0000
function_percent: 0.0000
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "96", "object": "__muldi3.c.o", "text_size": "96"}
current: {"code_percent": 0.0, "data_percent": 100.0, "function_percent": 0.0, "function_size": "200", "object": "candidate.o", "text_size": "200"}
objdiff: {"code_percent": 0.0, "compile_elapsed_s": 0.006015753002429847, "current": {"code_percent": 0.0, "data_percent": 100.0, "function_percent": 0.0, "function_size": "200", "object": "candidate.o", "text_size": "200"}, "data_percent": 100.0, "diff": {"code_gap_percent": 100.0, "current_instruction_mismatch_count": 52, "data_gap_percent": 0.0, "function_gap_percent": 100.0, "instruction_mismatches": [{"current": "addiu sp, sp, -0x80", "expected": "dsra32 a2, a0, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s6, 0x60(sp)", "expected": "dsra32 v1, a1, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s5, 0x50(sp)", "expected": "dsll32 a0, a0, 0", "kind": "DIFF_REPLACE"}, {"current": "daddu s6, a0, zero", "expected": "dsra32 a0, a0, 0", "kind": "DIFF_REPLACE"}, {"current": "daddu s5, a1, zero", "expected": "dsll32 a1, a1, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s3, 0x30(sp)", "expected": "dsra32 a1, a1, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s1, 0x10(sp)", "expected": "mult v1, a0, v1", "kind": "DIFF_REPLACE"}, {"current": "daddu s3, s5, zero", "expected": "mult1 a2, a2, a1", "kind": "DIFF_REPLACE"}, {"current": "daddu s1, s6, zero", "expected": "multu a0, a1", "kind": "DIFF_REPLACE"}, {"current": "sd s4, 0x40(sp)", "expected": "mflo a0", "kind": "DIFF_REPLACE"}, {"current": "sd s2, 0x20(sp)", "expected": "mfhi v0", "kind": "DIFF_REPLACE"}, {"current": "daddu a0, s1, zero", "expected": "dsll32 a0, a0, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s0, 0x0(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "sd ra, 0x70(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "jal MULTU_HI", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu a1, s3, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu s4, v0, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu a0, s1, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "jal __muldi3", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu a1, s3, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsll32 s0, v0, 0", "expected": "dsll32 v0, v0, 0", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ori s2, zero, 0xffff", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsll s2, s2, 16", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsrl32 s0, s0, 0", "expected": "dsrl32 a0, a0, 0", "kind": "DIFF_ARG_MISMATCH"}, {"current": "daddu a0, s1, zero", "expected": "addu v1, v1, a2", "kind": "DIFF_REPLACE"}, {"current": "or s0, s4, s0", "expected": "or a0, a0, v0", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui a1, 0xffff", "kind": "DIFF_DELETE"}, {"current": null, "expected": "dsrl32 a1, a1, 0", "kind": "DIFF_DELETE"}, {"current": "dsra32 a1, s5, 0", "expected": "dsra32 v0, a0, 0", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "addu v0, v0, v1", "kind": "DIFF_DELETE"}, {"current": "and s2, s0, s2", "expected": "and a0, a0, a1", "kind": "DIFF_ARG_MISMATCH"}, {"current": "jal __muldi3", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsra32 s0, s0, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu s1, v0, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsra32 a0, s6, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "jal __muldi3", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu a1, s3, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu s1, s1, v0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld ra, 0x70(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu s0, s0, s1", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s6, 0x60(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsll32 s0, s0, 0", "expected": "dsll32 v0, v0, 0", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld s5, 0x50(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "or s2, s2, s0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s4, 0x40(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsll32 v0, s2, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsra32 v0, v0, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s3, 0x30(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s2, 0x20(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s1, 0x10(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s0, 0x0(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "addiu sp, sp, 0x80", "expected": "or v0, a0, v0", "kind": "DIFF_REPLACE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 52}, "elapsed_s": 0.0023991810012375936, "exact": false, "exact_code_and_function": false, "expected": {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "96", "object": "__muldi3.c.o", "text_size": "96"}, "function_percent": 0.0, "raw_report": "objdiff-__muldi3.json", "relocation_comparison": "name_address", "status": "ok"}
re-seeded from m2c on the real oracle (replaces a foreign reference-seed transplant)
diff: {"code_gap_percent": 100.0, "current_instruction_mismatch_count": 52, "data_gap_percent": 0.0, "function_gap_percent": 100.0, "instruction_mismatches": [{"current": "addiu sp, sp, -0x80", "expected": "dsra32 a2, a0, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s6, 0x60(sp)", "expected": "dsra32 v1, a1, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s5, 0x50(sp)", "expected": "dsll32 a0, a0, 0", "kind": "DIFF_REPLACE"}, {"current": "daddu s6, a0, zero", "expected": "dsra32 a0, a0, 0", "kind": "DIFF_REPLACE"}, {"current": "daddu s5, a1, zero", "expected": "dsll32 a1, a1, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s3, 0x30(sp)", "expected": "dsra32 a1, a1, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s1, 0x10(sp)", "expected": "mult v1, a0, v1", "kind": "DIFF_REPLACE"}, {"current": "daddu s3, s5, zero", "expected": "mult1 a2, a2, a1", "kind": "DIFF_REPLACE"}, {"current": "daddu s1, s6, zero", "expected": "multu a0, a1", "kind": "DIFF_REPLACE"}, {"current": "sd s4, 0x40(sp)", "expected": "mflo a0", "kind": "DIFF_REPLACE"}, {"current": "sd s2, 0x20(sp)", "expected": "mfhi v0", "kind": "DIFF_REPLACE"}, {"current": "daddu a0, s1, zero", "expected": "dsll32 a0, a0, 0", "kind": "DIFF_REPLACE"}, {"current": "sd s0, 0x0(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "sd ra, 0x70(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "jal MULTU_HI", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu a1, s3, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu s4, v0, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu a0, s1, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "jal __muldi3", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu a1, s3, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsll32 s0, v0, 0", "expected": "dsll32 v0, v0, 0", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ori s2, zero, 0xffff", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsll s2, s2, 16", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsrl32 s0, s0, 0", "expected": "dsrl32 a0, a0, 0", "kind": "DIFF_ARG_MISMATCH"}, {"current": "daddu a0, s1, zero", "expected": "addu v1, v1, a2", "kind": "DIFF_REPLACE"}, {"current": "or s0, s4, s0", "expected": "or a0, a0, v0", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui a1, 0xffff", "kind": "DIFF_DELETE"}, {"current": null, "expected": "dsrl32 a1, a1, 0", "kind": "DIFF_DELETE"}, {"current": "dsra32 a1, s5, 0", "expected": "dsra32 v0, a0, 0", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "addu v0, v0, v1", "kind": "DIFF_DELETE"}, {"current": "and s2, s0, s2", "expected": "and a0, a0, a1", "kind": "DIFF_ARG_MISMATCH"}, {"current": "jal __muldi3", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsra32 s0, s0, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu s1, v0, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsra32 a0, s6, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "jal __muldi3", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu a1, s3, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu s1, s1, v0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld ra, 0x70(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "daddu s0, s0, s1", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s6, 0x60(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsll32 s0, s0, 0", "expected": "dsll32 v0, v0, 0", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld s5, 0x50(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "or s2, s2, s0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s4, 0x40(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsll32 v0, s2, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "dsra32 v0, v0, 0", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s3, 0x30(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s2, 0x20(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s1, 0x10(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ld s0, 0x0(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "addiu sp, sp, 0x80", "expected": "or v0, a0, v0", "kind": "DIFF_REPLACE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 52}
*/

/* __muldi3: GCC 2.95.2 libgcc2 L_muldi3 with the longlong.h MIPS umul macro.
 *
 * Evidence: tools/compilers/ee-gcc-2.95.2/lib/gcc-lib/ee/2.95.2/libgcc.a
 * _muldi3.o is byte-identical (96 B .text) to the retail expected object
 * build/workspace/rnc-refval/config/us/expected/obj/assembly/sdk/library/__muldi3.c.o
 * (verified 2026-09-11, run pipeline-2026-09-11-6).
 */

typedef int SItype __attribute__((mode(SI)));
typedef unsigned int USItype __attribute__((mode(SI)));
typedef int DItype __attribute__((mode(DI)));
typedef unsigned int UDItype __attribute__((mode(DI)));

struct DIstruct {
    SItype low;
    SItype high;
};

typedef union {
    struct DIstruct s;
    DItype ll;
} DIunion;

#define umul_ppmm(w1, w0, u, v)                                                \
    __asm__("multu %2,%3"                                                      \
            : "=l"((USItype)(w0)),                                             \
              "=h"((USItype)(w1))                                              \
            : "d"((USItype)(u)),                                               \
              "d"((USItype)(v)))

#define __umulsidi3(u, v)                                                      \
    ({                                                                         \
        DIunion __w;                                                           \
        umul_ppmm(__w.s.high, __w.s.low, u, v);                                \
        __w.ll;                                                                \
    })

DItype __muldi3(DItype u, DItype v)
{
    DIunion w;
    DIunion uu, vv;

    uu.ll = u, vv.ll = v;

    w.ll = __umulsidi3(uu.s.low, vv.s.low);
    w.s.high += ((USItype)uu.s.low * (USItype)vv.s.high +
                 (USItype)uu.s.high * (USItype)vv.s.low);

    return w.ll;
}
