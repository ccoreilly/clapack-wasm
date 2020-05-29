--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zher2.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zher2.c	2020-05-25 14:56:39.623788362 +0200
@@ -162,9 +162,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zher2_(char *uplo, integer *n, doublecomplex *alpha, 
+/* Subroutine */ void zher2_(char *uplo, integer *n, doublecomplex *alpha, 
 	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
-	doublecomplex *a, integer *lda, ftnlen uplo_len)
+	doublecomplex *a, integer *lda)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
@@ -177,8 +177,8 @@
     /* Local variables */
     integer i__, j, ix, iy, jx, jy, kx, ky, info;
     doublecomplex temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -215,8 +215,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -228,14 +227,14 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("ZHER2 ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZHER2 ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || alpha->r == 0. && alpha->i == 0.) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in X and Y if the increments are not both */
@@ -260,7 +259,7 @@
 /*     accessed sequentially with one pass through the triangular part */
 /*     of A. */
 
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  A  when A is stored in the upper triangle. */
 
@@ -508,7 +507,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZHER2 . */
 
