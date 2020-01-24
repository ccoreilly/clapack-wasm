/*
 * cblas_sasum.c
 *
 * The program is a C interface to sasum.
 * It calls the fortran wrapper before calling sasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "cblas_f77.h"
float cblas_sasum( const int N, const float *X, const int incX) 
{
   extern float sasum_(const int *n, const float *sx, const int *incx);
#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX;
#else 
   #define F77_N N
   #define F77_incX incX
#endif
   float asum = sasum_(&F77_N, X, &F77_incX);
   return asum;
}
