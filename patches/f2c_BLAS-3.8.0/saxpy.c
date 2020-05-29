--- ../../../wasm-clapack/f2c_BLAS-3.8.0/saxpy.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///saxpy.c	2020-05-25 14:56:39.623788362 +0200
@@ -101,7 +101,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int saxpy_(integer *n, real *sa, real *sx, integer *incx, 
+/* Subroutine */ void saxpy_(integer *n, real *sa, real *sx, integer *incx, 
 	real *sy, integer *incy)
 {
     /* System generated locals */
@@ -133,10 +133,10 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (*sa == 0.f) {
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
 } /* saxpy_ */
 
