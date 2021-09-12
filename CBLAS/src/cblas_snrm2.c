/*
 * cblas_snrm2.c
 *
 * The program is a C interface to snrm2.
 * It calls the fortran wrapper before calling snrm2.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "cblas_f77.h"
float cblas_snrm2( const int N, const float *X, const int incX) 
{
   extern float snrm2_(const int *n, const float *x, const int *incx);

#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX;
#else 
   #define F77_N N
   #define F77_incX incX
#endif

   return snrm2_( &F77_N, X, &F77_incX);
}
