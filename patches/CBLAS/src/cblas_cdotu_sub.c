--- ../../../to_patch/CBLAS/src/cblas_cdotu_sub.c	2020-05-25 12:23:51.701509038 +0200
+++ .//src/cblas_cdotu_sub.c	2020-03-18 14:52:00.346157211 +0100
@@ -9,9 +9,12 @@
  */
 #include "cblas.h"
 #include "cblas_f77.h"
+
 void cblas_cdotu_sub( const int N, const void *X,
                      const int incX, const void *Y, const int incY,void *dotu)
 {
+   extern void cdotu_(complex * ret_val, const int *n, complex *cx,
+      const int *incx, complex *cy, const int *incy);
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
 #else 
@@ -19,5 +22,5 @@
    #define F77_incX incX
    #define F77_incY incY
 #endif
-   F77_cdotu_sub( &F77_N, X, &F77_incX, Y, &F77_incY, dotu);
+   cdotu_(dotu, &F77_N, X, &F77_incX, Y, &F77_incY);
 }
