--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zgbmv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zgbmv.c	2020-05-25 14:56:39.623788362 +0200
@@ -199,10 +199,10 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zgbmv_(char *trans, integer *m, integer *n, integer *kl, 
+/* Subroutine */ void zgbmv_(char *trans, integer *m, integer *n, integer *kl, 
 	integer *ku, doublecomplex *alpha, doublecomplex *a, integer *lda, 
 	doublecomplex *x, integer *incx, doublecomplex *beta, doublecomplex *
-	y, integer *incy, ftnlen trans_len)
+	y, integer *incy)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
@@ -215,8 +215,8 @@
     integer i__, j, k, ix, iy, jx, jy, kx, ky, kup1, info;
     doublecomplex temp;
     integer lenx, leny;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noconj;
 
 
@@ -254,8 +254,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, "T", (
-	    ftnlen)1, (ftnlen)1) && ! lsame_(trans, "C", (ftnlen)1, (ftnlen)1)
+    if (! lsame_(trans, "N") && ! lsame_(trans, "T") && ! lsame_(trans, "C")
 	    ) {
 	info = 1;
     } else if (*m < 0) {
@@ -274,23 +273,23 @@
 	info = 13;
     }
     if (info != 0) {
-	xerbla_("ZGBMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZGBMV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || alpha->r == 0. && alpha->i == 0. && (beta->r == 
 	    1. && beta->i == 0.)) {
-	return 0;
+	return;
     }
 
-    noconj = lsame_(trans, "T", (ftnlen)1, (ftnlen)1);
+    noconj = lsame_(trans, "T");
 
 /*     Set  LENX  and  LENY, the lengths of the vectors x and y, and set */
 /*     up the start points in  X  and  Y. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 	lenx = *n;
 	leny = *m;
     } else {
@@ -360,10 +359,10 @@
 	}
     }
     if (alpha->r == 0. && alpha->i == 0.) {
-	return 0;
+	return;
     }
     kup1 = *ku + 1;
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  y := alpha*A*x + y. */
 
@@ -534,7 +533,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZGBMV . */
 
