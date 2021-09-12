/*
 * cblas_ddot.c
 *
 * The program is a C interface to ddot.
 * It calls the fortran wrapper before calling ddot.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "cblas_f77.h"
double cblas_ddot( const int N, const double *X,
                      const int incX, const double *Y, const int incY)
{
   extern double ddot_(const int *n, const double *dx, const int *incx, const double *dy, const int *incy);

#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
#else 
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
#endif

   return ddot_( &F77_N, X, &F77_incX, Y, &F77_incY);
}   
