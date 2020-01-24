/*
 * cblas_dzasum.c
 *
 * The program is a C interface to dzasum.
 * It calls the fortran wrapper before calling dzasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "cblas_f77.h"

double cblas_dzasum( const int N, const void *X, const int incX) 
{
   extern double dzasum_(const int *n, doublecomplex *zx, const int *incx);
#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX;
#else 
   #define F77_N N
   #define F77_incX incX
#endif
   return dzasum_(&F77_N, X, &F77_incX);
}
