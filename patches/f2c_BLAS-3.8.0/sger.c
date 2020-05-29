--- ../../../wasm-clapack/f2c_BLAS-3.8.0/sger.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///sger.c	2020-05-25 14:56:39.623788362 +0200
@@ -142,7 +142,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int sger_(integer *m, integer *n, real *alpha, real *x, 
+/* Subroutine */ void sger_(integer *m, integer *n, real *alpha, real *x, 
 	integer *incx, real *y, integer *incy, real *a, integer *lda)
 {
     /* System generated locals */
@@ -151,7 +151,7 @@
     /* Local variables */
     integer i__, j, ix, jy, kx, info;
     real temp;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -198,14 +198,14 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("SGER  ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("SGER  ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || *alpha == 0.f) {
-	return 0;
+	return;
     }
 
 /*     Start the operations. In this version the elements of A are */
@@ -253,7 +253,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of SGER  . */
 
