--- ../../../to_patch/CBLAS/src/cblas_dsdot.c	2020-05-25 12:23:51.709509366 +0200
+++ .//src/cblas_dsdot.c	2020-03-18 14:52:00.346157211 +0100
@@ -12,7 +12,9 @@
 double  cblas_dsdot( const int N, const float *X,
                       const int incX, const float *Y, const int incY)
 {
-   double dot;
+   extern double dsdot_(const int *n, const float *sx, const int *incx,
+      const float *sy, const int *incy);
+   // double dot;
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
 #else 
@@ -20,6 +22,7 @@
    #define F77_incX incX
    #define F77_incY incY
 #endif
-   F77_dsdot_sub( &F77_N, X, &F77_incX, Y, &F77_incY, &dot);
-   return dot;
+   // F77_dsdot_sub( &F77_N, X, &F77_incX, Y, &F77_incY, &dot);
+   // return dot;
+   return dsdot_(&F77_N, X, &F77_incX, Y, &F77_incY);
 }   
