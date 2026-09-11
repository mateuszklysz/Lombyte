# Third-party notices

Parts of `src/` reconstruct runtime code that was statically linked into the
retail executable. Those files remain under their original licenses and are
**not** covered by the repository's MIT license. The upstream notices are
reproduced verbatim in the affected files and below.

## GCC runtime — libgcc2

/* Copyright (C) 1989, 92-98, 1999 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */

Files:

- `src/sdk/library/__divdi3.c`
- `src/sdk/library/__muldi3.c`
- `src/sdk/library/udivdi3.c`
- `src/sdk/library/umoddi3.c`
- `src/sdk/library/moddi3.c`
- `src/sdk/library/__fixunsdfdi.c`
- `src/sdk/library/__floatdidf.c`

Full license text: [`licenses/GPL-2.0.txt`](licenses/GPL-2.0.txt).

## GCC runtime — fp-bit

/* This is a software floating point library which can be used instead of
   the floating point routines in libgcc1.c for targets without hardware
   floating point. 
 Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.

This file is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file with other programs, and to distribute
those programs without any restriction coming from the use of this
file.  (The General Public License restrictions do apply in other
respects; for example, they cover modification of the file, and
distribution when not linked into another program.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */

Files:

- `src/sdk/library/dpadd.c`
- `src/sdk/library/dpcmp.c`
- `src/sdk/library/dpdiv.c`
- `src/sdk/library/dpsub.c`
- `src/sdk/library/dptoli.c`
- `src/sdk/library/dptoul.c`
- `src/sdk/library/fptodp.c`
- `src/sdk/library/litodp.c`
- `src/sdk/library/__make_dp.c`
- `src/sdk/library/__pack_d.c`
- `src/sdk/library/unpack_d.c`
- `src/sdk/library/__unpack_f.c`
- `src/sdk/library/fpadd_parts.c`
- `src/sdk/library/fpcmp_parts_d.c`

## newlib

/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

Files:

- `src/sdk/library/_strtol_r.c`
- `src/sdk/library/exit.c`
- `src/sdk/library/fwalk.c`
- `src/sdk/library/sinit.c`
- `src/sdk/library/sread.c`
- `src/sdk/library/sseek.c`
- `src/sdk/library/__sprint.c`
- `src/sdk/library/_flushBuf.c`
- `src/sdk/library/get_iob.c`
- `src/sdk/library/new_iob.c`
- `src/sdk/library/cvt.c`

### dlmalloc (Doug Lea, public domain)

`_calloc_r`, `free_r`, `malloc_extend_top`, and `malloc_trim_r` derive from
dlmalloc 2.6.5 by Doug Lea, released to the public domain and adapted by newlib.

Files:

- `src/sdk/library/_calloc_r.c`
- `src/sdk/library/free_r.c`
- `src/sdk/library/malloc_extend_top.c`
- `src/sdk/library/malloc_trim_r.c`

Other newlib-derived files cite newlib in their headers. The newlib collection
license is in [`licenses/COPYING.NEWLIB.txt`](licenses/COPYING.NEWLIB.txt).

## David Gay dtoa

/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/

Files:

- `src/sdk/library/hi0bits.c`
- `src/sdk/library/lo0bits.c`
- `src/sdk/library/lshift.c`
- `src/sdk/library/_multadd.c`

## Sony and Insomniac code

Files reconstructing Sony SDK and libmpeg routines (`sce*`, `_decodeOrSkip`,
slice and picture helpers, `motion_vector`, kernel veneers), as well as the
game's own code, are not distributed under the MIT license and no license is
claimed over them; all rights remain with their respective owners.
