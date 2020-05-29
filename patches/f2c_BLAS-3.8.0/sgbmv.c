--- ../../../wasm-clapack/f2c_BLAS-3.8.0/sgbmv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///sgbmv.c	2020-05-25 14:56:39.623788362 +0200
@@ -197,9 +197,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int sgbmv_(char *trans, integer *m, integer *n, integer *kl, 
+/* Subroutine */ void sgbmv_(char *trans, integer *m, integer *n, integer *kl, 
 	integer *ku, real *alpha, real *a, integer *lda, real *x, integer *
-	incx, real *beta, real *y, integer *incy, ftnlen trans_len)
+	incx, real *beta, real *y, integer *incy)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
@@ -208,8 +208,8 @@
     integer i__, j, k, ix, iy, jx, jy, kx, ky, kup1, info;
     real temp;
     integer lenx, leny;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -246,8 +246,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, "T", (
-	    ftnlen)1, (ftnlen)1) && ! lsame_(trans, "C", (ftnlen)1, (ftnlen)1)
+    if (! lsame_(trans, "N") && ! lsame_(trans, "T") && ! lsame_(trans, "C")
 	    ) {
 	info = 1;
     } else if (*m < 0) {
@@ -266,20 +265,20 @@
 	info = 13;
     }
     if (info != 0) {
-	xerbla_("SGBMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("SGBMV ", &info);
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
@@ -337,10 +336,10 @@
 	}
     }
     if (*alpha == 0.f) {
-	return 0;
+	return;
     }
     kup1 = *ku + 1;
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  y := alpha*A*x + y. */
 
@@ -434,7 +433,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of SGBMV . */
 
