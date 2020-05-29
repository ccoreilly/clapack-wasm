--- ../../../to_patch/CBLAS/src/cblas_sdsdot.c	2020-05-25 12:23:51.713509530 +0200
+++ .//src/cblas_sdsdot.c	2020-03-18 14:52:00.346157211 +0100
@@ -12,7 +12,9 @@
 float cblas_sdsdot( const int N, const float alpha, const float *X,
                       const int incX, const float *Y, const int incY)
 {
-   float dot;
+   extern float sdsdot_(const int *n, const float *sb, const float *sx,
+      const int *incx, const float *sy, const int *incy);
+
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
 #else 
@@ -20,6 +22,6 @@
    #define F77_incX incX
    #define F77_incY incY
 #endif
-   F77_sdsdot_sub( &F77_N, &alpha, X, &F77_incX, Y, &F77_incY, &dot);
-   return dot;
+
+   return sdsdot_(&F77_N, &alpha, X, &F77_incX, Y, &F77_incY);
 }   
