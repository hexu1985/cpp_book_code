/***
*plstring.h - declarations for PASCAL string manipulation functions
*
*       Copyright (c) 1994-1997, Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file contains the function declarations for the PASCAL string
*       manipulation functions.
*
*       [Public]
*
****/

#if _MSC_VER > 1000
#pragma once
#endif  /* _MSC_VER > 1000 */

#ifdef _MAC

#ifdef _M_MPPC
#define __pascal
#endif  /* _M_MPPC */

#ifndef _INC_PLSTRING
#define _INC_PLSTRING

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#ifndef _INTERNAL_IFSTRIP_
#include <cruntime.h>
#endif  /* _INTERNAL_IFSTRIP_ */

_CRTIMP short  __pascal PLstrcmp(const unsigned char * str1, const unsigned char * str2);
_CRTIMP short  __pascal PLstrncmp(const unsigned char * str1, const unsigned char * str2, short num);
_CRTIMP unsigned char * __pascal        PLstrcpy(unsigned char * str1, const unsigned char * str2);
_CRTIMP unsigned char * __pascal        PLstrncpy(unsigned char * str1, const unsigned char * str2, short num);
_CRTIMP unsigned char * __pascal        PLstrcat(unsigned char * str1, const unsigned char * str2);
_CRTIMP unsigned char * __pascal        PLstrncat(unsigned char * str1, const unsigned char * str2, short num);
_CRTIMP char *  __pascal        PLstrchr(const unsigned char * str1, short ch1);
_CRTIMP char *  __pascal        PLstrrchr(const unsigned char * str1, short ch1);
_CRTIMP char *  __pascal        PLstrpbrk(const unsigned char * str1, const unsigned char * str2);
_CRTIMP short  __pascal PLstrspn(const unsigned char * str1, const unsigned char * str2);
_CRTIMP char *  __pascal        PLstrstr(const unsigned char * str1, const unsigned char * str2);
_CRTIMP short  __pascal PLstrlen(const unsigned char * str);

#ifndef __STDC__
#define _PUC    unsigned char *
#define _CPUC   const unsigned char *
#define _PC     char *
#define _SH     short
__inline  _CRTIMP _SH  __pascal _PLstrcmp(_CPUC str1, _CPUC str2) { return ((_SH)PLstrcmp((_CPUC) str1, (_CPUC) str2));}
__inline  _CRTIMP _SH  __pascal _PLstrncmp(_CPUC str1, _CPUC str2, _SH num) { return ((_SH)PLstrncmp((_CPUC) str1, (_CPUC) str2, (_SH) num));}
__inline  _CRTIMP _PUC __pascal _PLstrcpy(_PUC str1, _CPUC str2) { return((_PUC)PLstrcpy((_PUC) str1, (_CPUC) str2));}
__inline  _CRTIMP _PUC __pascal _PLstrncpy(_PUC str1, _CPUC str2, _SH num) { return((_PUC)PLstrncpy((_PUC) str1, (_CPUC) str2, (_SH) num));}
__inline  _CRTIMP _PUC __pascal _PLstrcat(_PUC str1, _CPUC str2) { return((_PUC)PLstrcat((_PUC) str1, (_CPUC) str2));}
__inline  _CRTIMP _PUC __pascal _PLstrncat(_PUC str1, _CPUC str2, _SH num) { return((_PUC)PLstrncat((_PUC) str1,(_CPUC) str2, (_SH) num));}
__inline  _CRTIMP _PC  __pascal _PLstrchr(_CPUC str1, _SH ch1) { return ((_PC)PLstrchr((_CPUC) str1, (_SH) ch1));}
__inline  _CRTIMP _PC  __pascal _PLstrrchr(_CPUC str1, _SH ch1) { return ((_PC)PLstrrchr((_CPUC) str1, (_SH) ch1));}
__inline  _CRTIMP _PC  __pascal _PLstrpbrk(_CPUC str1, _CPUC str2) { return ((_PC)PLstrpbrk((_CPUC) str1, (_CPUC) str2));}
__inline  _CRTIMP _SH  __pascal _PLstrspn(_CPUC str1, _CPUC str2) { return ((_SH)PLstrspn((_CPUC) str1, (_CPUC) str2));}
__inline  _CRTIMP _PC  __pascal _PLstrstr(_CPUC str1, _CPUC str2) { return ((_PC)PLstrstr((_CPUC) str1, (_CPUC) str2));}
__inline  _CRTIMP _SH  __pascal _PLstrlen(_CPUC str) { return ((_SH)PLstrlen((_CPUC) str));}
#endif  /* __STDC__ */

#ifdef __cplusplus
}

#endif  /* __cplusplus */

#endif  /* _INC_PLSTRING */

#endif  /* _MAC */
