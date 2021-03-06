#ifndef INFFAST_H_
#define INFFAST_H_
/* inffast.h -- header to use inffast.c
 * Copyright (C) 1995-2003, 2010 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */

/* WARNING: this file should *not* be used by applications. It is
   part of the implementation of the compression library and is
   subject to change. Applications should only use zlib.h.
 */

void ZLIB_INTERNAL inflate_fast(PREFIX3(stream) *strm, unsigned long start);


#if (defined(__GNUC__) || defined(__clang__)) && defined(__ARM_NEON__)
#  include <arm_neon.h>
typedef uint8x16_t inffast_chunk_t;
#  define INFFAST_CHUNKSIZE sizeof(inffast_chunk_t)
#endif

#define INFLATE_FAST_MIN_HAVE 8
#define INFLATE_FAST_MIN_LEFT 258

#endif /* INFFAST_H_ */
