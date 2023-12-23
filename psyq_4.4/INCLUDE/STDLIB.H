/*
 * File:stdlib.h
*/
/*
 * $PSLibId: Run-time Library Release 4.4$
 */

#ifndef _STDLIB_H
#define _STDLIB_H

#include <STDDEF.H>
#include <ABS.H>
#include <CONVERT.H>
#include <MALLOC.H>
#include <QSORT.H>
#include <RAND.H>

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern "C" {
#endif

extern void *bsearch(unsigned char *, unsigned char *, size_t, size_t, int (*)());
extern void exit();

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

#endif /* _STDLIB_H */
