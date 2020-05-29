--- ../../../wasm-clapack/f2c_BLAS-3.8.0/srotm.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///srotm.c	2020-05-25 14:56:39.623788362 +0200
@@ -109,7 +109,7 @@
 /* > \ingroup single_blas_level1 */
 
 /*  ===================================================================== */
-/* Subroutine */ int srotm_(integer *n, real *sx, integer *incx, real *sy, 
+/* Subroutine */ void srotm_(integer *n, real *sx, integer *incx, real *sy, 
 	integer *incy, real *sparam)
 {
     /* Initialized data */
@@ -153,7 +153,7 @@
 
     sflag = sparam[1];
     if (*n <= 0 || sflag + two == zero) {
-	return 0;
+	return;
     }
     if (*incx == *incy && *incx > 0) {
 
@@ -244,6 +244,6 @@
 	    }
 	}
     }
-    return 0;
+    return;
 } /* srotm_ */
 
