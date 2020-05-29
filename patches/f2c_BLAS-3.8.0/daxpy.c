--- ../../../wasm-clapack/f2c_BLAS-3.8.0/daxpy.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///daxpy.c	2020-05-25 14:56:39.619788197 +0200
@@ -101,7 +101,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int daxpy_(integer *n, doublereal *da, doublereal *dx, 
+/* Subroutine */ void daxpy_(integer *n, doublereal *da, doublereal *dx, 
 	integer *incx, doublereal *dy, integer *incy)
 {
     /* System generated locals */
@@ -133,10 +133,10 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (*da == 0.) {
-	return 0;
+	return;
     }
     if (*incx == 1 && *incy == 1) {
 
@@ -153,7 +153,7 @@
 	    }
 	}
 	if (*n < 4) {
-	    return 0;
+	    return;
 	}
 	mp1 = m + 1;
 	i__1 = *n;
@@ -183,6 +183,6 @@
 	    iy += *incy;
 	}
     }
-    return 0;
+    return;
 } /* daxpy_ */
 
