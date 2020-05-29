--- ../../../wasm-clapack/f2c_BLAS-3.8.0/csscal.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///csscal.c	2020-05-25 14:56:39.619788197 +0200
@@ -90,7 +90,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int csscal_(integer *n, real *sa, complex *cx, integer *incx)
+/* Subroutine */ void csscal_(integer *n, real *sa, complex *cx, integer *incx)
 {
     /* System generated locals */
     integer i__1, i__2, i__3, i__4;
@@ -125,7 +125,7 @@
 
     /* Function Body */
     if (*n <= 0 || *incx <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1) {
 
@@ -156,6 +156,6 @@
 	    cx[i__3].r = q__1.r, cx[i__3].i = q__1.i;
 	}
     }
-    return 0;
+    return;
 } /* csscal_ */
 
