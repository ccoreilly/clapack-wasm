--- ../../../to_patch/CBLAS/src/cblas_dzasum.c	2020-05-25 12:23:51.713509530 +0200
+++ .//src/cblas_dzasum.c	2020-03-18 14:52:00.346157211 +0100
@@ -9,15 +9,15 @@
  */
 #include "cblas.h"
 #include "cblas_f77.h"
+
 double cblas_dzasum( const int N, const void *X, const int incX) 
 {
-   double asum;
+   extern double dzasum_(const int *n, doublecomplex *zx, const int *incx);
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX;
 #else 
    #define F77_N N
    #define F77_incX incX
 #endif
-   F77_dzasum_sub( &F77_N, X, &F77_incX, &asum);
-   return asum;
+   return dzasum_(&F77_N, X, &F77_incX);
 }
