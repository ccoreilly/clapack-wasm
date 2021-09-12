/*
 * cblas_dznrm2.c
 *
 * The program is a C interface to dznrm2.
 * It calls the fortran wrapper before calling dznrm2.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "cblas_f77.h"
double cblas_dznrm2( const int N, const void *X, const int incX) 
{
   extern double dznrm2_(const int *n, doublecomplex *x, const int *incx);

#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX;
#else 
   #define F77_N N
   #define F77_incX incX
#endif
 
   return dznrm2_( &F77_N, X, &F77_incX);
}
