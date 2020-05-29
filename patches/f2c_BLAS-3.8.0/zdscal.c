--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zdscal.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zdscal.c	2020-05-25 14:56:39.623788362 +0200
@@ -90,7 +90,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zdscal_(integer *n, doublereal *da, doublecomplex *zx, 
+/* Subroutine */ void zdscal_(integer *n, doublereal *da, doublecomplex *zx, 
 	integer *incx)
 {
     /* System generated locals */
@@ -122,7 +122,7 @@
 
     /* Function Body */
     if (*n <= 0 || *incx <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1) {
 
@@ -153,6 +153,6 @@
 	    zx[i__3].r = z__1.r, zx[i__3].i = z__1.i;
 	}
     }
-    return 0;
+    return;
 } /* zdscal_ */
 
