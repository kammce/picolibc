/*
Copyright (c) 2002 Red Hat Incorporated.
All rights reserved.
Modified (m) 2017 Thomas Wolff to refer to generated Unicode data tables.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.

Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.

The name of Red Hat Incorporated may not be used to endorse
or promote products derived from this software without specific
prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED.  IN NO EVENT SHALL RED HAT INCORPORATED BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS   
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
FUNCTION
	<<iswlower>>, <<iswlower_l>>---lowercase wide character test

INDEX
	iswlower

INDEX
	iswlower_l

SYNOPSIS
	#include <wctype.h>
	int iswlower(wint_t <[c]>);

	#include <wctype.h>
	int iswlower_l(wint_t <[c]>, locale_t <[locale]>);

DESCRIPTION
<<iswlower>> is a function which classifies wide-character values that
are categorized as lowercase.

<<iswlower_l>> is like <<iswlower>> but performs the check based on the
locale specified by the locale object locale.  If <[locale]> is
LC_GLOBAL_LOCALE or not a valid locale object, the behaviour is undefined.

RETURNS
<<iswlower>>, <<iswlower_l>> return non-zero if <[c]> is a lowercase wide character.

PORTABILITY
<<iswlower>> is C99.
<<iswlower_l>> is POSIX-1.2008.

No supporting OS subroutines are required.
*/
#define _GNU_SOURCE
#include <_ansi.h>
#include <wctype.h>

int
iswlower (wint_t c)
{
  return iswlower_l (c, 0);
}
