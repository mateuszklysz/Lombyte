# Configuration

- `us/rnc1.us.yaml` is the active Splat configuration for `SCUS_971.99`.
- `us/symbol_addrs.txt`, `us/undefined_syms.txt`, and
  `us/undefined_funcs_auto.txt` are active symbol inputs.
- `ghidra/` contains function, call-graph, and data-reference exports used by
  the build tooling.

The ignored `us/SCUS_971.99` file is a local copy of the extracted ELF. It is
never committed.
