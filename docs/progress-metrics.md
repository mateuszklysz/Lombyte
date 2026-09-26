> Moved verbatim from README.md when the front page was simplified.
> Paths, commands and links below are relative to the repository root, as they
> were in README.md; read them from the checkout root.

## Decompilation Progress

<p align="center">
  <img src="assets/decomp_map.svg" alt="Decompilation progress map" width="800">
</p>

Each tile is one logical function group, sized by the combined executable bytes of its functions. Its label shows byte-weighted **C_EXACT** progress, and **C_FUZZY** when similarity scores are available. **Orange** groups have all recoverable C functions matching exactly, **chrome** groups contain intentional low-level asm only (SIMD/VU0 helpers excluded from the C goal), and **dark steel** groups contain pending C. On [decomp.dev](https://decomp.dev), selecting a group opens its member functions. Rebuild the map locally with:

```sh
.venv/bin/python scripts/generate_treemap.py
```

After a baseline build, pass `--workspace build/baseline` to also measure the pending C bodies and report C_FUZZY alongside C_EXACT.

The same progress is published on [decomp.dev](https://decomp.dev) from the committed objdiff-format report `progress/report.json`. Report units are logical groups containing their member functions; C_EXACT functions count as matched, pending functions carry their measured similarity, and intentional asm is excluded. Regenerate it after `make elf` with `make progress`; the `progress` workflow only checks, validates and uploads it and never builds the game.

Percentages cover the configured code in the boot executable, not the entire disc. Its embedded DVP overlay blobs are rebuilt as raw data; overlays or executables elsewhere on the disc are out of scope. C versus intentional-asm classification comes from `config/us/unit_categories.json`; group assignments and proposed names come from `config/us/recovered_names.json`.

A matching executable does not mean the decompilation is complete. Unconverted
units keep using assembly or raw machine-code _oracles_ to preserve the
original bytes; matching C replaces them over time. The oracles are generated
at build time from your own `config/us/SCUS_971.99` into the gitignored
`config/us/expected/asm/` tree; the repository stores none.

Matching is verified at two levels: objdiff per compiled object, and a
whole-ELF comparison against the original (SHA-256 below).
