--- ../../../to_patch/CBLAS/src/cblas_sdot.c	2020-05-25 12:23:51.713509530 +0200
+++ .//src/cblas_sdot.c	2020-03-18 14:52:00.346157211 +0100
@@ -12,7 +12,8 @@
 float cblas_sdot( const int N, const float *X,
                       const int incX, const float *Y, const int incY)
 {
-   float dot;
+   extern float sdot_(const int *n, const float *sx, const int *incx,
+      const float *sy, const int *incy);
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
 #else 
@@ -20,6 +21,5 @@
    #define F77_incX incX
    #define F77_incY incY
 #endif
-   F77_sdot_sub( &F77_N, X, &F77_incX, Y, &F77_incY, &dot);
-   return dot;
+   return sdot_(&F77_N, X, &F77_incX, Y, &F77_incY);
 }   
