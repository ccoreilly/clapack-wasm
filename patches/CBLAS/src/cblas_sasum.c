--- ../../../to_patch/CBLAS/src/cblas_sasum.c	2020-05-25 12:23:51.713509530 +0200
+++ .//src/cblas_sasum.c	2020-03-18 14:52:00.346157211 +0100
@@ -11,13 +11,13 @@
 #include "cblas_f77.h"
 float cblas_sasum( const int N, const float *X, const int incX) 
 {
-   float asum;
+   extern float sasum_(const int *n, const float *sx, const int *incx);
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX;
 #else 
    #define F77_N N
    #define F77_incX incX
 #endif
-   F77_sasum_sub( &F77_N, X, &F77_incX, &asum);
+   float asum = sasum_(&F77_N, X, &F77_incX);
    return asum;
 }
