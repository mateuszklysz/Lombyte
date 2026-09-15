# Patched EE-GCC 2.9-ee-991111-01
Source patch for the optional compiler profile used by some units in `src/`.
`make elf` does not need it: without it those units are rebuilt from the retail
oracle. Build instructions and requirements:
[`docs/patched-toolchain.md`](../../docs/patched-toolchain.md).
- Base: <https://github.com/SSXModding/ps2-ee-toolchain> at `b595ded`
  (public Sony EE-GCC 2.9 snapshot).
- File: [`patched-ee-gcc.patch`](patched-ee-gcc.patch), applied with
  `git apply` at the source root.
- Patch SHA-256:
  `d1ec36b24eea0d7fbf854690d144a1f19c75ef54cebe1eff6e2ec64a5b863163`.
Changes (124 inserted, 13 deleted lines across 8 files):
| File                                              | Change                                                                  |
| :------------------------------------------------ | :---------------------------------------------------------------------- |
| `ee/gcc/c-parse.in`                               | typed midrule actions, so bison 1.28 parses the grammar on modern hosts |
| `ee/gcc/config/mips/mips.h`                       | opt-in `-mastra-*` target options, inert unless selected                |
| `ee/gcc/config/mips/mips.c`, `mips.md`            | R5900 `sq`/`lq` callee saves; `mulsi3` uses classic `mult`/`mflo`       |
| `ee/gcc/calls.c`, `cse.c`, `reload1.c`, `reorg.c` | codegen policies behind the opt-in flags                                |
Reference binaries (the maintainer's build; rebuilds elsewhere differ because
GCC embeds build paths):
```text
cc1   a1f7ac64514a5cdf772b349904f8caf100696c6aca8b736786dfff12b3bf4e3d
cpp   1f3b11af4a696d01180c3bf6a9dcd0ab3992ac4d57d2eb1be36d6743cdf3b5b9
xgcc  56bb73b37a91882c3038c61ccea5c3dd31b9562d5a8634dcbd7c7dbbc32ca6b1
```
Patch and binaries are GPLv2-or-later, like the base; see
[`licenses/GPL-2.0.txt`](../../licenses/GPL-2.0.txt). Binaries are not
distributed with this repository.
