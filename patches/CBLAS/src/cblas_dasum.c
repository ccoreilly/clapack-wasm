--- ../../../to_patch/CBLAS/src/cblas_dasum.c	2020-05-25 12:23:51.705509202 +0200
+++ .//src/cblas_dasum.c	2020-03-18 14:52:00.346157211 +0100
@@ -9,15 +9,17 @@
  */
 #include "cblas.h"
 #include "cblas_f77.h"
+
 double cblas_dasum( const int N, const double *X, const int incX) 
 {
-   double asum;
+   extern double dasum_(const int *n, const double *dx, const int *incx);
+
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX;
 #else 
    #define F77_N N
    #define F77_incX incX
 #endif
-   F77_dasum_sub( &F77_N, X, &F77_incX, &asum);
-   return asum;
+
+   return dasum_(&F77_N, X, &F77_incX);
 }
