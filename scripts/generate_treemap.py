#!/usr/bin/env python3
"""Generate decomp_map.svg - a treemap of decompilation progress.

What the map shows
  Every configured C unit from the linker config
  (``config/us/rnc1.us.yaml`` rows ``- [0xADDR, c, owner]``) is one tile whose
  area is proportional to the unit's executable byte size (the distance to the
  next configured row).

    * green (#40a02b) - unit is matching C. A unit is matching when the newest
      committed audit (``the private evidence archive/source-quality-audit-*.json``) marks
      it ``C_EXACT``, or when it is a promoted path (not under
      ``src/assembly/``) with a source file in ``src/``. Promotions retag the
      config, so the map keeps up automatically; the audit covers legacy
      exact units that still live under ``src/assembly/``.
    * blue (#1f6feb) - intentional low-level asm: hand-written SIMD/VU0/MMI
      code that is kept as assembly and excluded from the C goal.
    * dark grey (#313244) - C still pending: assembly-backed units whose
      readable C is not byte-exact yet.

  Units below ``--min-bytes`` are grouped per class so a compact map stays
  readable; the default (0) draws every configured C unit as its own tile and
  relies on the tall default canvas for label room.

Layout
  The treemap is laid out with the ``squarify`` package when it is installed
  (``pip install squarify``), otherwise with the bundled equivalent
  implementation. The tile order is stable across runs, so a unit's rectangle
  keeps its place and flips grey -> green when it is promoted.

Usage
  python3 scripts/generate_treemap.py
  python3 scripts/generate_treemap.py --min-bytes 512 --output assets/decomp_map.svg
  python3 scripts/generate_treemap.py --width 800 --height 400   # compact variant
"""
from __future__ import annotations

import argparse
import datetime as dt
import html
import json
import re
from pathlib import Path
import sys

GREEN = "#40a02b"
BLUE = "#1f6feb"
GREY = "#313244"
BACKGROUND = "#0d1117"
STROKE = "#0d1117"
TEXT = "#cdd6f4"
MUTED = "#a6adc8"
FONT = "ui-sans-serif, -apple-system, 'Segoe UI', Roboto, Helvetica, Arial, sans-serif"

ROW_RE = re.compile(
    r"^\s*-\s*\[(0x[0-9A-Fa-f]+)\s*,\s*([A-Za-z_][A-Za-z0-9_]*)\s*,\s*([^\]]+?)\s*\]\s*$"
)


# --------------------------------------------------------------------------
# squarify: use the package when available, otherwise the same algorithm
# bundled here (MIT, https://github.com/laserson/squarify).
# --------------------------------------------------------------------------
def _layoutrow(sizes, x, y, dx, dy):
    covered = sum(sizes)
    width = covered / dy if dy else 0.0
    rects = []
    for size in sizes:
        height = size / width if width else 0.0
        rects.append({"x": x, "y": y, "dx": width, "dy": height})
        y += height
    return rects


def _layoutcol(sizes, x, y, dx, dy):
    covered = sum(sizes)
    height = covered / dx if dx else 0.0
    rects = []
    for size in sizes:
        width = size / height if height else 0.0
        rects.append({"x": x, "y": y, "dx": width, "dy": height})
        x += width
    return rects


def _layout(sizes, x, y, dx, dy):
    return _layoutrow(sizes, x, y, dx, dy) if dx >= dy else _layoutcol(sizes, x, y, dx, dy)


def _leftover(sizes, x, y, dx, dy):
    if dx >= dy:
        width = sum(sizes) / dy if dy else 0.0
        return (x + width, y, dx - width, dy)
    height = sum(sizes) / dx if dx else 0.0
    return (x, y + height, dx, dy - height)


def _worst_ratio(sizes, x, y, dx, dy):
    ratios = []
    for rect in _layout(sizes, x, y, dx, dy):
        if rect["dx"] <= 0 or rect["dy"] <= 0:
            continue
        ratios.append(max(rect["dx"] / rect["dy"], rect["dy"] / rect["dx"]))
    return max(ratios) if ratios else float("inf")


def _squarify(sizes, x, y, dx, dy):
    if not sizes:
        return []
    if len(sizes) == 1:
        return _layout(sizes, x, y, dx, dy)
    index = 1
    while index < len(sizes) and _worst_ratio(sizes[:index], x, y, dx, dy) >= _worst_ratio(
        sizes[: index + 1], x, y, dx, dy
    ):
        index += 1
    current, remaining = sizes[:index], sizes[index:]
    leftover = _leftover(current, x, y, dx, dy)
    return _layout(current, x, y, dx, dy) + _squarify(remaining, *leftover)


try:  # pragma: no cover - exercised by whichever branch is installed
    import squarify as _squarify_pkg
except ImportError:  # pragma: no cover
    _squarify_pkg = None


def treemap(sizes, x, y, dx, dy):
    sizes = [float(size) for size in sizes]
    total = sum(sizes)
    if total <= 0 or dx <= 0 or dy <= 0:
        return []
    # squarify (both the package and the bundled copy) expects areas, not raw
    # byte weights.
    normalized = [size * dx * dy / total for size in sizes]
    if _squarify_pkg is not None:
        return _squarify_pkg.squarify(normalized, x, y, dx, dy)
    return _squarify(normalized, x, y, dx, dy)


# --------------------------------------------------------------------------
# Data
# --------------------------------------------------------------------------
def parse_units(config: Path):
    """Configured C units as (owner, address, size) sorted by address."""
    rows = []
    for line in config.read_text().splitlines():
        match = ROW_RE.match(line)
        if match:
            rows.append((int(match.group(1), 16), match.group(2), match.group(3)))
    rows.sort(key=lambda row: row[0])
    units = []
    for index, (address, kind, owner) in enumerate(rows):
        if kind != "c":
            continue
        end = rows[index + 1][0] if index + 1 < len(rows) else address
        size = end - address
        if size > 0:
            units.append((owner, address, size))
    return units


def newest_audit(repo: Path):
    candidates = sorted(
        (repo / "the private evidence archive").glob("source-quality-audit-*.json"),
        key=lambda path: (path.stat().st_mtime, path.name),
    )
    return candidates[-1] if candidates else None


def audit_categories(audit: Path | None):
    if audit is None or not audit.is_file():
        return {}
    try:
        payload = json.loads(audit.read_text())
    except (OSError, json.JSONDecodeError):
        return {}
    records = payload.get("records", payload if isinstance(payload, list) else [])
    return {
        record.get("name"): record.get("category")
        for record in records
        if record.get("name")
    }


def build_units(repo: Path, config: Path, audit: Path | None):
    categories = audit_categories(audit)
    result = []
    for owner, address, size in parse_units(config):
        source = repo / "src" / f"{owner}.c"
        if categories.get(owner) == "C_EXACT" or (
            not owner.startswith("assembly/") and source.is_file()
        ):
            category = "exact"
        elif categories.get(owner) == "INTENTIONAL_LOW_LEVEL_ASM":
            category = "asm"
        else:
            category = "pending"
        result.append({
            "owner": owner, "address": address, "size": size, "category": category,
        })
    return result


# --------------------------------------------------------------------------
# SVG
# --------------------------------------------------------------------------
def esc(value) -> str:
    return html.escape(str(value), quote=True)


def unit_name(tile) -> str:
    """Full unit path (assembly/ prefix dropped); groups have no single name."""
    if tile.get("group"):
        return f"{tile['count']} units"
    return tile["owner"].removeprefix("assembly/")


def base_name(tile) -> str:
    if tile.get("group"):
        return f"{tile['count']} units"
    return tile["owner"].rsplit("/", 1)[-1]


def match_percent(tile) -> str:
    if tile["category"] == "exact":
        return "100.00%"
    if tile["category"] == "asm":
        return "asm"
    return "0.00%"


def draw_tile_label(lines, tile, x, y, dx, dy) -> None:
    """Draw `name · sizekB · percent`, degrading gracefully on small tiles."""
    name = unit_name(tile)
    short = base_name(tile)
    kb = f"{tile['size'] / 1000:.2f}kB"
    pct = match_percent(tile)

    def fits(text: str, size: float) -> bool:
        return len(text) * size * 0.56 <= dx - 8

    options = [
        (name, f"{kb} · {pct}"),          # two lines: path, then size + percent
        (f"{name} · {kb} · {pct}", None),  # single line, full detail
        (f"{name} · {kb}", None),
        (short, f"{kb} · {pct}"),          # compact two-line: name, then details
        (f"{short} · {kb} · {pct}", None),
        (f"{short} · {kb}", None),
        (short, None),
    ]
    for line1, line2 in options:
        for size in (10, 9, 8, 7):
            needed = size * 3.3 if line2 else size + 6
            if dy < needed or not fits(line1, size):
                continue
            if line2 and not fits(line2, size - 1.5):
                continue
            lines.append(
                f'<text x="{x + 4:.2f}" y="{y + size + 3:.2f}" '
                f'font-family="{esc(FONT)}" font-size="{size}" fill="{TEXT}" '
                f'opacity="0.92">{esc(line1)}</text>'
            )
            if line2:
                lines.append(
                    f'<text x="{x + 4:.2f}" y="{y + size + 15:.2f}" '
                    f'font-family="{esc(FONT)}" font-size="{size - 1.5}" fill="{MUTED}">'
                    f'{esc(line2)}</text>'
                )
            return


def render_svg(units, *, width, height, margin, header, footer, min_bytes, title) -> str:
    # Chrome (margins, header, footer, legend) scales with the canvas, while
    # tile label fonts stay at a fixed readable size so a larger map fits
    # names on many more tiles.
    scale = max(1.0, min(width / 800.0, height / 400.0))
    # Keep the chrome compact on large canvases so tiles stay as big as
    # possible and more unit names fit.
    chrome_scale = 1.0 + (scale - 1.0) * 0.1
    text_scale = chrome_scale
    margin_px = round(margin * chrome_scale)
    header_px = round(header * chrome_scale)
    footer_px = round(footer * chrome_scale)
    map_x, map_y = margin_px, header_px
    map_dx = width - 2 * margin_px
    map_dy = height - header_px - footer_px - margin_px

    big = [unit for unit in units if unit["size"] >= min_bytes]
    small = [unit for unit in units if unit["size"] < min_bytes]
    tiles = [
        {"owner": unit["owner"], "address": unit["address"], "size": unit["size"],
         "category": unit["category"], "group": False}
        for unit in big
    ]
    for category in ("exact", "asm", "pending"):
        group = [unit for unit in small if unit["category"] == category]
        if group:
            tiles.append({
                "owner": f"{len(group)} units < {min_bytes} B",
                "address": min(unit["address"] for unit in group),
                "size": sum(unit["size"] for unit in group),
                "category": category, "group": True, "count": len(group),
                "threshold": min_bytes,
            })

    total_units = len(units)
    total_bytes = sum(unit["size"] for unit in units)
    exact = [unit for unit in units if unit["category"] == "exact"]
    asm = [unit for unit in units if unit["category"] == "asm"]
    pending = [unit for unit in units if unit["category"] == "pending"]
    exact_bytes = sum(unit["size"] for unit in exact)
    asm_bytes = sum(unit["size"] for unit in asm)
    pending_bytes = total_bytes - exact_bytes - asm_bytes
    recoverable = total_bytes - asm_bytes
    exact_percent = (100.0 * exact_bytes / total_bytes) if total_bytes else 0.0
    recoverable_percent = (100.0 * exact_bytes / recoverable) if recoverable else 0.0

    # Stable order: biggest first, then by address, so tiles keep their place.
    order = sorted(tiles, key=lambda tile: (-tile["size"], tile["address"], tile["owner"]))
    sizes = [tile["size"] for tile in order]
    rects = treemap(sizes, map_x, map_y, map_dx, map_dy)

    lines = [
        '<?xml version="1.0" encoding="UTF-8"?>',
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" '
        f'viewBox="0 0 {width} {height}" role="img" '
        f'aria-label="Decompilation progress treemap">',
        f'<title>{esc(title)}</title>',
        f'<rect width="{width}" height="{height}" fill="{BACKGROUND}"/>',
    ]

    # Header: title and totals on the left, legend on the right.
    lines.append(
        f'<text x="{margin_px}" y="{round(24 * scale)}" font-family="{esc(FONT)}" '
        f'font-size="{14 * text_scale:.1f}" '
        f'font-weight="600" fill="{TEXT}">{esc(title)}</text>'
    )
    lines.append(
        f'<text x="{margin_px}" y="{round(41 * scale)}" font-family="{esc(FONT)}" '
        f'font-size="{10 * text_scale:.1f}" '
        f'fill="{MUTED}">{len(exact)} matching C &#183; {len(asm)} intentional asm '
        f'&#183; {len(pending)} pending &#183; {exact_bytes:,} of {total_bytes:,} bytes '
        f'({exact_percent:.1f}%; {recoverable_percent:.1f}% of recoverable C)</text>'
    )
    legend_x = width - margin_px - round(250 * scale)
    for offset, (color, text) in enumerate((
        (GREEN, f"matching C &#183; {exact_bytes:,} B"),
        (BLUE, f"intentional asm &#183; {asm_bytes:,} B"),
        (GREY, f"pending C &#183; {pending_bytes:,} B"),
    )):
        y = round(14 * scale) + offset * round(17 * scale)
        swatch = round(10 * scale)
        lines.append(f'<rect x="{legend_x}" y="{y}" width="{swatch}" height="{swatch}" rx="2" fill="{color}"/>')
        lines.append(
            f'<text x="{legend_x + round(15 * scale)}" y="{y + round(9 * scale)}" '
            f'font-family="{esc(FONT)}" font-size="{10 * text_scale:.1f}" fill="{MUTED}">{text}</text>'
        )

    for tile, rect in zip(order, rects):
        x, y = rect["x"], rect["y"]
        dx, dy = max(rect["dx"], 0.0), max(rect["dy"], 0.0)
        if dx <= 0 or dy <= 0:
            continue
        color = {"exact": GREEN, "asm": BLUE, "pending": GREY}[tile["category"]]
        dash = ' stroke-dasharray="3 2"' if tile.get("group") else ""
        lines.append(
            f'<rect x="{x:.2f}" y="{y:.2f}" width="{dx:.2f}" height="{dy:.2f}" rx="1" '
            f'fill="{color}" stroke="{STROKE}" stroke-width="0.6"{dash} '
            f'shape-rendering="geometricPrecision"/>'
        )
        draw_tile_label(lines, tile, x, y, dx, dy)

    generated = dt.datetime.now(dt.timezone.utc).strftime("%Y-%m-%d")
    separator_y = height - footer_px
    lines.append(
        f'<line x1="{margin_px}" y1="{separator_y:.1f}" x2="{width - margin_px}" '
        f'y2="{separator_y:.1f}" stroke="{GREY}" stroke-width="1" opacity="0.8"/>'
    )
    lines.append(
        f'<text x="{width - margin_px}" y="{height - round(8 * scale)}" text-anchor="end" '
        f'font-family="{esc(FONT)}" font-size="{9 * text_scale:.1f}" fill="{MUTED}" opacity="0.85">'
        f'generated {generated} &#183; scripts/generate_treemap.py</text>'
    )
    lines.append("</svg>")
    return "\n".join(lines) + "\n"


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--config", type=Path,
                        help="linker config (default: <repo>/config/us/rnc1.us.yaml)")
    parser.add_argument("--audit", type=Path,
                        help="audit JSON (default: newest the private evidence archive/source-quality-audit-*.json)")
    parser.add_argument("--output", type=Path, help="SVG path (default: <repo>/assets/decomp_map.svg)")
    parser.add_argument("--width", type=int, default=800)
    parser.add_argument("--height", type=int, default=1600)
    parser.add_argument("--margin", type=int, default=10)
    parser.add_argument("--header", type=int, default=48)
    parser.add_argument("--footer", type=int, default=22)
    parser.add_argument("--min-bytes", type=int, default=0,
                        help="units below this size are grouped per class; 0 (default) "
                             "draws every unit as its own tile")
    parser.add_argument("--title", default="Ratchet & Clank - decompilation progress")
    args = parser.parse_args(argv)

    repo = args.repo.resolve()
    config = (args.config or repo / "config/us/rnc1.us.yaml").resolve()
    if not config.is_file():
        print(f"error: linker config not found: {config}", file=sys.stderr)
        return 2
    audit = (args.audit or newest_audit(repo))
    if audit is not None:
        audit = Path(audit).resolve()
    output = (args.output or repo / "assets" / "decomp_map.svg").resolve()

    units = build_units(repo, config, audit)
    if not units:
        print("error: no configured C units found", file=sys.stderr)
        return 1

    svg = render_svg(units, width=args.width, height=args.height, margin=args.margin,
                     header=args.header, footer=args.footer, min_bytes=args.min_bytes,
                     title=args.title)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(svg)

    total = sum(unit["size"] for unit in units)
    exact = [unit for unit in units if unit["category"] == "exact"]
    asm = [unit for unit in units if unit["category"] == "asm"]
    pending = [unit for unit in units if unit["category"] == "pending"]
    exact_bytes = sum(unit["size"] for unit in exact)
    asm_bytes = sum(unit["size"] for unit in asm)
    shown = sum(1 for unit in units if unit["size"] >= args.min_bytes)
    print(f"wrote {output}")
    print(f"  matching C: {len(exact)}/{len(units)} units, {exact_bytes:,}/{total:,} bytes "
          f"({100.0 * exact_bytes / total:.2f}%; "
          f"{100.0 * exact_bytes / (total - asm_bytes):.2f}% of recoverable C)")
    print(f"  intentional asm: {len(asm)} units, {asm_bytes:,} B")
    print(f"  pending C: {len(pending)} units, {total - exact_bytes - asm_bytes:,} B")
    print(f"  tiles: {shown} individual + grouped units below {args.min_bytes} B" if args.min_bytes > 0
          else f"  tiles: {shown} individual (no grouping)")
    print(f"  layout: {'squarify' if _squarify_pkg is not None else 'bundled fallback'}")
    if audit:
        print(f"  audit: {audit.relative_to(repo) if audit.is_relative_to(repo) else audit}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
