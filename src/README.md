# Source layout

`src/` contains the current source units named by subsystem. Descriptive C is
kept in the subsystem directories; assembly-backed units are grouped under
`src/assembly/` so their representation is visible from the path.

The active configuration lists each unit explicitly. Do not infer that a C
file is safe to replace merely because it compiles: consult the source-quality
audit and preserve the exact oracle until all objdiff measures are exact.

Subsystem directories include `core`, `ee`, `gs`, `kernel`, `math`, `sdk`,
and `sys`. SDK/library units are under `sdk/library`; Deci/debug, DMA/IPU/GS,
and SIF/RPC families retain their own directories.
