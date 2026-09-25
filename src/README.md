# Source layout

`src/` is organized by semantic subsystem: `audio`, `gameplay`, `input`,
`math`, `rendering`, `runtime`, `sdk`, `storage`, `ui`, `video`, and `world`.

- `src/assembly/` marks units whose current implementation still uses an
  assembly oracle. Its subdirectories follow the same subsystem boundaries;
  `src/assembly/textbin/` retains the owner paths for those oracle-backed
  functions.
- Semantically grouped C units live directly under their logical subsystem,
  even when they were first recovered from a textbin region. Compiler routing
  for those moved units is recorded explicitly in `configure.py`.
- `src/textbin/` contains flat C owners whose physical subsystem placement is
  still uncertain. The progress views can carry a tentative logical group
  without turning that guess into a source-directory decision.

The active configuration lists every build owner explicitly. Keep each owner
path aligned with its source file. Do not infer that a C file is safe to replace
merely because it compiles: consult the source-quality audit and preserve the
exact oracle until all objdiff measures are exact.
