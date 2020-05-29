--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dger.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///dger.c	2020-05-25 14:56:39.619788197 +0200
@@ -142,7 +142,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dger_(integer *m, integer *n, doublereal *alpha, 
+/* Subroutine */ void dger_(integer *m, integer *n, doublereal *alpha, 
 	doublereal *x, integer *incx, doublereal *y, integer *incy, 
 	doublereal *a, integer *lda)
 {
@@ -152,7 +152,7 @@
     /* Local variables */
     integer i__, j, ix, jy, kx, info;
     doublereal temp;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -199,14 +199,14 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("DGER  ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("DGER  ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || *alpha == 0.) {
-	return 0;
+	return;
     }
 
 /*     Start the operations. In this version the elements of A are */
@@ -254,7 +254,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of DGER  . */
 
