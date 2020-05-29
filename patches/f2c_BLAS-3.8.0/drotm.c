--- ../../../wasm-clapack/f2c_BLAS-3.8.0/drotm.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///drotm.c	2020-05-25 14:56:39.623788362 +0200
@@ -108,7 +108,7 @@
 /* > \ingroup double_blas_level1 */
 
 /*  ===================================================================== */
-/* Subroutine */ int drotm_(integer *n, doublereal *dx, integer *incx, 
+/* Subroutine */ void drotm_(integer *n, doublereal *dx, integer *incx, 
 	doublereal *dy, integer *incy, doublereal *dparam)
 {
     /* Initialized data */
@@ -152,7 +152,7 @@
 
     dflag = dparam[1];
     if (*n <= 0 || dflag + two == zero) {
-	return 0;
+	return;
     }
     if (*incx == *incy && *incx > 0) {
 
@@ -243,6 +243,6 @@
 	    }
 	}
     }
-    return 0;
+    return;
 } /* drotm_ */
 
