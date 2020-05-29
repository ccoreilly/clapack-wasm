--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zcopy.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zcopy.c	2020-05-25 14:56:39.623788362 +0200
@@ -93,7 +93,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zcopy_(integer *n, doublecomplex *zx, integer *incx, 
+/* Subroutine */ void zcopy_(integer *n, doublecomplex *zx, integer *incx, 
 	doublecomplex *zy, integer *incy)
 {
     /* System generated locals */
@@ -123,7 +123,7 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1 && *incy == 1) {
 
@@ -157,6 +157,6 @@
 	    iy += *incy;
 	}
     }
-    return 0;
+    return;
 } /* zcopy_ */
 
