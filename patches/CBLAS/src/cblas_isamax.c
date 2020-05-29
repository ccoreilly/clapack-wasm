--- ../../../to_patch/CBLAS/src/cblas_isamax.c	2020-05-25 12:23:51.713509530 +0200
+++ .//src/cblas_isamax.c	2020-03-18 14:52:00.346157211 +0100
@@ -11,13 +11,15 @@
 #include "cblas_f77.h"
 CBLAS_INDEX cblas_isamax( const int N, const float *X, const int incX)
 {
-   int iamax;
+   extern int isamax_(const int *n, const float *sx, const int *incx);
+
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX;
 #else 
    #define F77_N N
    #define F77_incX incX
 #endif
-   F77_isamax_sub( &F77_N, X, &F77_incX, &iamax);
+
+   int iamax = isamax_(&F77_N, X, &F77_incX);
    return iamax ? iamax-1 : 0;
 }
