--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zgemv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zgemv.c	2020-05-25 14:56:39.623788362 +0200
@@ -170,10 +170,10 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zgemv_(char *trans, integer *m, integer *n, 
+/* Subroutine */ void zgemv_(char *trans, integer *m, integer *n, 
 	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
 	x, integer *incx, doublecomplex *beta, doublecomplex *y, integer *
-	incy, ftnlen trans_len)
+	incy)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;
@@ -186,8 +186,8 @@
     integer i__, j, ix, iy, jx, jy, kx, ky, info;
     doublecomplex temp;
     integer lenx, leny;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noconj;
 
 
@@ -225,8 +225,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, "T", (
-	    ftnlen)1, (ftnlen)1) && ! lsame_(trans, "C", (ftnlen)1, (ftnlen)1)
+    if (! lsame_(trans, "N") && ! lsame_(trans, "T") && ! lsame_(trans, "C")
 	    ) {
 	info = 1;
     } else if (*m < 0) {
@@ -241,23 +240,23 @@
 	info = 11;
     }
     if (info != 0) {
-	xerbla_("ZGEMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZGEMV ", &info);
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
@@ -327,9 +326,9 @@
 	}
     }
     if (alpha->r == 0. && alpha->i == 0.) {
-	return 0;
+	return;
     }
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  y := alpha*A*x + y. */
 
@@ -466,7 +465,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZGEMV . */
 
