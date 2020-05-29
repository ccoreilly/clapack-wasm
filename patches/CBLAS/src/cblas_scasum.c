--- ../../../to_patch/CBLAS/src/cblas_scasum.c	2020-05-25 12:23:51.713509530 +0200
+++ .//src/cblas_scasum.c	2020-03-18 14:52:00.346157211 +0100
@@ -11,13 +11,14 @@
 #include "cblas_f77.h"
 float cblas_scasum( const int N, const void *X, const int incX) 
 {
-   float asum;
+   extern float scasum_(const int *n, complex *cx, const int *incx);
+
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX;
 #else 
    #define F77_N N
    #define F77_incX incX
 #endif
-   F77_scasum_sub( &F77_N, X, &F77_incX, &asum);
-   return asum;
+
+   return scasum_(&F77_N, X, &F77_incX);
 }
