--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dswap.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///dswap.c	2020-05-25 14:56:39.623788362 +0200
@@ -94,7 +94,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dswap_(integer *n, doublereal *dx, integer *incx, 
+/* Subroutine */ void dswap_(integer *n, doublereal *dx, integer *incx, 
 	doublereal *dy, integer *incy)
 {
     /* System generated locals */
@@ -127,7 +127,7 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1 && *incy == 1) {
 
@@ -145,7 +145,7 @@
 		dy[i__] = dtemp;
 	    }
 	    if (*n < 3) {
-		return 0;
+		return;
 	    }
 	}
 	mp1 = m + 1;
@@ -183,6 +183,6 @@
 	    iy += *incy;
 	}
     }
-    return 0;
+    return;
 } /* dswap_ */
 
