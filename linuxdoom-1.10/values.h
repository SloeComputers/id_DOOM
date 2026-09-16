//-------------------------------------------------------------------------------
// Copyright (c) 2026 John D. Haughton
// SPDX-License-Identifier: GPL-2.0-only
//-------------------------------------------------------------------------------

#pragma once

#include <limits.h>
#include <float.h>
#include <math.h>

#define _TYPEBITS(type) (sizeof(type) * CHAR_BIT)

#define CHARBITS    _TYPEBITS(char)
#define SHORTBITS   _TYPEBITS(short int)
#define INTBITS     _TYPEBITS(int)
#define LONGBITS    _TYPEBITS(long int)
#define PTRBITS     _TYPEBITS(char *)
#define DOUBLEBITS  _TYPEBITS(double)
#define FLOATBITS   _TYPEBITS(float)

#define MINSHORT    SHRT_MIN
#define MININT      INT_MIN
#define MINLONG     LONG_MIN

#define MAXSHORT    SHRT_MAX
#define MAXINT      INT_MAX
#define MAXLONG     LONG_MAX

#define HIBITS      MINSHORT
#define HIBITL      MINLONG
