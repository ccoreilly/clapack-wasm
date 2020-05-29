--- ../../../wasm-clapack/f2c_BLAS-3.8.0/drot.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///drot.c	2020-05-25 14:56:39.619788197 +0200
@@ -104,7 +104,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int drot_(integer *n, doublereal *dx, integer *incx, 
+/* Subroutine */ void drot_(integer *n, doublereal *dx, integer *incx, 
 	doublereal *dy, integer *incy, doublereal *c__, doublereal *s)
 {
     /* System generated locals */
@@ -135,7 +135,7 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1 && *incy == 1) {
 
@@ -169,6 +169,6 @@
 	    iy += *incy;
 	}
     }
-    return 0;
+    return;
 } /* drot_ */
 
