/*
 * cblas_cdotu_sub.f
 *
 * The program is a C interface to cdotu.
 * It calls the forteran wrapper before calling cdotu.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "cblas_f77.h"

// Use cdotu from BLAS
#define cdotu_ cdotu_
void cblas_cdotu_sub( const int N, const void *X,
                     const int incX, const void *Y, const int incY,void *dotu)
{
#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
#else 
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
#endif
    /* (complex * ret_val, integer *n, complex *cx, integer 
	*incx, complex *cy, integer *incy) */
   cdotu_(dotu, &F77_N, X, &F77_incX, Y, &F77_incY);
   // F77_cdotu_sub( &F77_N, X, &F77_incX, Y, &F77_incY, dotu);
}
