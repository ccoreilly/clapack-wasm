--- ../../../wasm-clapack/f2c_BLAS-3.8.0/caxpy.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///caxpy.c	2020-05-25 14:56:39.615788032 +0200
@@ -100,7 +100,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int caxpy_(integer *n, complex *ca, complex *cx, integer *
+/* Subroutine */ void caxpy_(integer *n, complex *ca, complex *cx, integer *
 	incx, complex *cy, integer *incy)
 {
     /* System generated locals */
@@ -134,10 +134,10 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (scabs1_(ca) == 0.f) {
-	return 0;
+	return;
     }
     if (*incx == 1 && *incy == 1) {
 
@@ -180,6 +180,6 @@
 	}
     }
 
-    return 0;
+    return;
 } /* caxpy_ */
 
