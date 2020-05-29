--- ../../../wasm-clapack/f2c_BLAS-3.8.0/sgemv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///sgemv.c	2020-05-25 14:56:39.623788362 +0200
@@ -168,9 +168,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int sgemv_(char *trans, integer *m, integer *n, real *alpha, 
+/* Subroutine */ void sgemv_(char *trans, integer *m, integer *n, real *alpha, 
 	real *a, integer *lda, real *x, integer *incx, real *beta, real *y, 
-	integer *incy, ftnlen trans_len)
+	integer *incy)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2;
@@ -179,8 +179,8 @@
     integer i__, j, ix, iy, jx, jy, kx, ky, info;
     real temp;
     integer lenx, leny;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -217,8 +217,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, "T", (
-	    ftnlen)1, (ftnlen)1) && ! lsame_(trans, "C", (ftnlen)1, (ftnlen)1)
+    if (! lsame_(trans, "N") && ! lsame_(trans, "T") && ! lsame_(trans, "C")
 	    ) {
 	info = 1;
     } else if (*m < 0) {
@@ -233,20 +232,20 @@
 	info = 11;
     }
     if (info != 0) {
-	xerbla_("SGEMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("SGEMV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || *alpha == 0.f && *beta == 1.f) {
-	return 0;
+	return;
     }
 
 /*     Set  LENX  and  LENY, the lengths of the vectors x and y, and set */
 /*     up the start points in  X  and  Y. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 	lenx = *n;
 	leny = *m;
     } else {
@@ -304,9 +303,9 @@
 	}
     }
     if (*alpha == 0.f) {
-	return 0;
+	return;
     }
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  y := alpha*A*x + y. */
 
@@ -374,7 +373,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of SGEMV . */
 
