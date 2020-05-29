--- ../../../wasm-clapack/f2c_BLAS-3.8.0/cswap.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///cswap.c	2020-05-25 14:56:39.619788197 +0200
@@ -93,7 +93,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int cswap_(integer *n, complex *cx, integer *incx, complex *
+/* Subroutine */ void cswap_(integer *n, complex *cx, integer *incx, complex *
 	cy, integer *incy)
 {
     /* System generated locals */
@@ -124,7 +124,7 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1 && *incy == 1) {
 
@@ -165,6 +165,6 @@
 	    iy += *incy;
 	}
     }
-    return 0;
+    return;
 } /* cswap_ */
 
