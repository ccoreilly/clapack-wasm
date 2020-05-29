--- ../../../to_patch/CBLAS/src/cblas_zdotu_sub.c	2020-05-25 12:23:51.717509695 +0200
+++ .//src/cblas_zdotu_sub.c	2020-03-18 14:52:00.350157380 +0100
@@ -9,9 +9,13 @@
  */
 #include "cblas.h"
 #include "cblas_f77.h"
+
 void cblas_zdotu_sub( const int N, const void *X, const int incX,
                       const void *Y, const int incY, void *dotu)
 {
+   extern void zdotu_(doublecomplex * ret_val, const int *n, doublecomplex *zx,
+      const int *incx, doublecomplex *zy, const int *incy);
+
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
 #else 
@@ -19,6 +23,7 @@
    #define F77_incX incX
    #define F77_incY incY
 #endif
-   F77_zdotu_sub( &F77_N, X, &F77_incX, Y, &F77_incY, dotu);
+
+   zdotu_(dotu, &F77_N, X, &F77_incX, Y, &F77_incY);
    return;
 }
