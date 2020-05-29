--- ../../../wasm-clapack/f2c_BLAS-3.8.0/cscal.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///cscal.c	2020-05-25 14:56:39.619788197 +0200
@@ -90,7 +90,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int cscal_(integer *n, complex *ca, complex *cx, integer *
+/* Subroutine */ void cscal_(integer *n, complex *ca, complex *cx, integer *
 	incx)
 {
     /* System generated locals */
@@ -120,7 +120,7 @@
 
     /* Function Body */
     if (*n <= 0 || *incx <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1) {
 
@@ -149,6 +149,6 @@
 	    cx[i__3].r = q__1.r, cx[i__3].i = q__1.i;
 	}
     }
-    return 0;
+    return;
 } /* cscal_ */
 
