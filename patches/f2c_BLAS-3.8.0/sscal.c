--- ../../../wasm-clapack/f2c_BLAS-3.8.0/sscal.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///sscal.c	2020-05-25 14:56:39.623788362 +0200
@@ -91,7 +91,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int sscal_(integer *n, real *sa, real *sx, integer *incx)
+/* Subroutine */ void sscal_(integer *n, real *sa, real *sx, integer *incx)
 {
     /* System generated locals */
     integer i__1, i__2;
@@ -121,7 +121,7 @@
 
     /* Function Body */
     if (*n <= 0 || *incx <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1) {
 
@@ -137,7 +137,7 @@
 		sx[i__] = *sa * sx[i__];
 	    }
 	    if (*n < 5) {
-		return 0;
+		return;
 	    }
 	}
 	mp1 = m + 1;
@@ -160,6 +160,6 @@
 	    sx[i__] = *sa * sx[i__];
 	}
     }
-    return 0;
+    return;
 } /* sscal_ */
 
