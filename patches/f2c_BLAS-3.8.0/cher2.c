--- ../../../wasm-clapack/f2c_BLAS-3.8.0/cher2.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///cher2.c	2020-05-25 14:56:39.619788197 +0200
@@ -162,9 +162,8 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int cher2_(char *uplo, integer *n, complex *alpha, complex *
-	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda,
-	 ftnlen uplo_len)
+/* Subroutine */ void cher2_(char *uplo, integer *n, complex *alpha, complex *
+	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
@@ -177,8 +176,8 @@
     /* Local variables */
     integer i__, j, ix, iy, jx, jy, kx, ky, info;
     complex temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -215,8 +214,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -228,14 +226,14 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("CHER2 ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CHER2 ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || alpha->r == 0.f && alpha->i == 0.f) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in X and Y if the increments are not both */
@@ -260,7 +258,7 @@
 /*     accessed sequentially with one pass through the triangular part */
 /*     of A. */
 
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  A  when A is stored in the upper triangle. */
 
@@ -508,7 +506,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CHER2 . */
 
