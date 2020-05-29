--- ../../../wasm-clapack/f2c_BLAS-3.8.0/srot.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///srot.c	2020-05-25 14:56:39.623788362 +0200
@@ -104,7 +104,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int srot_(integer *n, real *sx, integer *incx, real *sy, 
+/* Subroutine */ void srot_(integer *n, real *sx, integer *incx, real *sy, 
 	integer *incy, real *c__, real *s)
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
 } /* srot_ */
 
