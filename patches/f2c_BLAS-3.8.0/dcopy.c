--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dcopy.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///dcopy.c	2020-05-25 14:56:39.619788197 +0200
@@ -94,7 +94,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dcopy_(integer *n, doublereal *dx, integer *incx, 
+/* Subroutine */ void dcopy_(integer *n, doublereal *dx, integer *incx, 
 	doublereal *dy, integer *incy)
 {
     /* System generated locals */
@@ -126,7 +126,7 @@
 
     /* Function Body */
     if (*n <= 0) {
-	return 0;
+	return;
     }
     if (*incx == 1 && *incy == 1) {
 
@@ -142,7 +142,7 @@
 		dy[i__] = dx[i__];
 	    }
 	    if (*n < 7) {
-		return 0;
+		return;
 	    }
 	}
 	mp1 = m + 1;
@@ -176,6 +176,6 @@
 	    iy += *incy;
 	}
     }
-    return 0;
+    return;
 } /* dcopy_ */
 
