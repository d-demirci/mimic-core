/*************************************************************************/
/*                                                                       */
/*                  Language Technologies Institute                      */
/*                     Carnegie Mellon University                        */
/*                        Copyright (c) 1999                             */
/*                        All Rights Reserved.                           */
/*                                                                       */
/*  Permission is hereby granted, free of charge, to use and distribute  */
/*  this software and its documentation without restriction, including   */
/*  without limitation the rights to use, copy, modify, merge, publish,  */
/*  distribute, sublicense, and/or sell copies of this work, and to      */
/*  permit persons to whom this work is furnished to do so, subject to   */
/*  the following conditions:                                            */
/*   1. The code must retain the above copyright notice, this list of    */
/*      conditions and the following disclaimer.                         */
/*   2. Any modifications must be clearly marked as such.                */
/*   3. Original authors' names are not deleted.                         */
/*   4. The authors' names are not used to endorse or promote products   */
/*      derived from this software without specific prior written        */
/*      permission.                                                      */
/*                                                                       */
/*  CARNEGIE MELLON UNIVERSITY AND THE CONTRIBUTORS TO THIS WORK         */
/*  DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING      */
/*  ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT   */
/*  SHALL CARNEGIE MELLON UNIVERSITY NOR THE CONTRIBUTORS BE LIABLE      */
/*  FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES    */
/*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   */
/*  AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,          */
/*  ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF       */
/*  THIS SOFTWARE.                                                       */
/*                                                                       */
/*************************************************************************/
/*             Author:  Alan W Black (awb@cs.cmu.edu)                    */
/*               Date:  August 2000                                      */
/*************************************************************************/
/*                                                                       */
/*    endianness                                                         */
/*                                                                       */
/*************************************************************************/

#ifndef CST_ENDIAN_H
#define CST_ENDIAN_H

#include <inttypes.h>
#include <stdlib.h>
#include "cst_lib_visibility.h"

/* This gets set to 1 and we test where the on bit is to determine byteorder */
MIMIC_CORE_PUBLIC extern const int32_t cst_endian_loc;
/* Sun, HP, SGI Mips, M68000, PowerPC */
#define CST_BIG_ENDIAN (((char *)&cst_endian_loc)[0] == 0)
/* Intel, Alpha, DEC Mips, Vax, ARM, Other MIPS (Casio, Ben Nanonote etc) */
#define CST_LITTLE_ENDIAN (((char *)&cst_endian_loc)[0] != 0)
/* Perq (from Three Rivers) has a third byte order -- but we have no support */


#ifndef UINTPTR_MAX
#error "Cannot determine pointer size"
#endif

#if (UINTPTR_MAX == UINT32_MAX)
#define MIMIC_CPU_BITS 32
#elif (UINTPTR_MAX == UINT64_MAX)
#define MIMIC_CPU_BITS 64
#else
#error "Unknown architecture size"
#endif


#endif /* Header guard */

