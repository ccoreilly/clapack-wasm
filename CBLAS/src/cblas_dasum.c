/*
 * cblas_dasum.c
 *
 * The program is a C interface to dasum.
 * It calls the fortran wrapper before calling dasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "cblas_f77.h"

double cblas_dasum( const int N, const double *X, const int incX) 
{
   extern double dasum_(const int *n, const double *dx, const int *incx);

#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX;
#else 
   #define F77_N N
   #define F77_incX incX
#endif

   return dasum_(&F77_N, X, &F77_incX);
}
