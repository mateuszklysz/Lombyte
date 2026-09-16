# Configuration

- `us/rnc1.us.yaml` is the active Splat configuration for `SCUS_971.99`.
- `overlays/us/` is the generated map metadata for the per-level overlay ELFs
  (streamed level code); see `overlays/README.md`. Overlay units are namespaced
  `overlay/us/level-NN/` and are not part of the boot link.
- `us/symbol_addrs.txt`, `us/undefined_syms.txt`, and
  `us/undefined_funcs_auto.txt` are active symbol inputs.
- `ghidra/` contains function, call-graph, and data-reference exports used by
  the build tooling.

The ignored `us/SCUS_971.99` file is a local copy of the extracted ELF. It is
never committed.
