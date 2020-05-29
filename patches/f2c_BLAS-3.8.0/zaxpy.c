--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zaxpy.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zaxpy.c	2020-05-25 14:56:39.623788362 +0200
@@ -100,7 +100,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zaxpy_(integer *n, doublecomplex *za, doublecomplex *zx, 
+/* Subroutine */ void zaxpy_(integer *n, doublecomplex *za, doublecomplex *zx, 
 	integer *incx, doublecomplex *zy, integer *incy)
 {
     /* System generated locals */
@@ -134,10 +134,10 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (dcabs1_(za) == 0.) {
-	return 0;
+	return;
     }
     if (*incx == 1 && *incy == 1) {
 
@@ -180,6 +180,6 @@
 	}
     }
 
-    return 0;
+    return;
 } /* zaxpy_ */
 
