--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dscal.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///dscal.c	2020-05-25 14:56:39.623788362 +0200
@@ -91,7 +91,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dscal_(integer *n, doublereal *da, doublereal *dx, 
+/* Subroutine */ void dscal_(integer *n, doublereal *da, doublereal *dx, 
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
 
@@ -138,7 +138,7 @@
 		dx[i__] = *da * dx[i__];
 	    }
 	    if (*n < 5) {
-		return 0;
+		return;
 	    }
 	}
 	mp1 = m + 1;
@@ -161,6 +161,6 @@
 	    dx[i__] = *da * dx[i__];
 	}
     }
-    return 0;
+    return;
 } /* dscal_ */
 
