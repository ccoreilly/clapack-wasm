--- ../../../to_patch/CBLAS/src/cblas_dznrm2.c	2020-05-25 12:23:51.713509530 +0200
+++ .//src/cblas_dznrm2.c	2020-03-18 14:52:00.346157211 +0100
@@ -11,13 +11,14 @@
 #include "cblas_f77.h"
 double cblas_dznrm2( const int N, const void *X, const int incX) 
 {
-   double nrm2;
+   extern double dznrm2_(const int *n, doublecomplex *x, const int *incx);
+
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX;
 #else 
    #define F77_N N
    #define F77_incX incX
 #endif
-   F77_dznrm2_sub( &F77_N, X, &F77_incX, &nrm2);
-   return nrm2;
+ 
+   return dznrm2_( &F77_N, X, &F77_incX);
 }
