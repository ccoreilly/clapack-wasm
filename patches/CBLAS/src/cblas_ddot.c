--- ../../../to_patch/CBLAS/src/cblas_ddot.c	2020-05-25 12:23:51.705509202 +0200
+++ .//src/cblas_ddot.c	2020-03-18 14:52:00.346157211 +0100
@@ -12,7 +12,8 @@
 double cblas_ddot( const int N, const double *X,
                       const int incX, const double *Y, const int incY)
 {
-   double dot;
+   extern double ddot_(const int *n, const double *dx, const int *incx, const double *dy, const int *incy);
+
 #ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
 #else 
@@ -20,6 +21,6 @@
    #define F77_incX incX
    #define F77_incY incY
 #endif
-   F77_ddot_sub( &F77_N, X, &F77_incX, Y, &F77_incY, &dot);
-   return dot;
+
+   return ddot_( &F77_N, X, &F77_incX, Y, &F77_incY);
 }   
