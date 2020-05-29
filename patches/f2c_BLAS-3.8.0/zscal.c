--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zscal.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zscal.c	2020-05-25 14:56:39.627788526 +0200
@@ -90,7 +90,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zscal_(integer *n, doublecomplex *za, doublecomplex *zx, 
+/* Subroutine */ void zscal_(integer *n, doublecomplex *za, doublecomplex *zx, 
 	integer *incx)
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
 	    zx[i__3].r = z__1.r, zx[i__3].i = z__1.i;
 	}
     }
-    return 0;
+    return;
 } /* zscal_ */
 
