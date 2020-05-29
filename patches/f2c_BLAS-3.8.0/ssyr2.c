--- ../../../wasm-clapack/f2c_BLAS-3.8.0/ssyr2.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///ssyr2.c	2020-05-25 14:56:39.623788362 +0200
@@ -159,9 +159,8 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int ssyr2_(char *uplo, integer *n, real *alpha, real *x, 
-	integer *incx, real *y, integer *incy, real *a, integer *lda, ftnlen 
-	uplo_len)
+/* Subroutine */ void ssyr2_(char *uplo, integer *n, real *alpha, real *x, 
+	integer *incx, real *y, integer *incy, real *a, integer *lda)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2;
@@ -169,8 +168,8 @@
     /* Local variables */
     integer i__, j, ix, iy, jx, jy, kx, ky, info;
     real temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -207,8 +206,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -220,14 +218,14 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("SSYR2 ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("SSYR2 ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || *alpha == 0.f) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in X and Y if the increments are not both */
@@ -252,7 +250,7 @@
 /*     accessed sequentially with one pass through the triangular part */
 /*     of A. */
 
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  A  when A is stored in the upper triangle. */
 
@@ -336,7 +334,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of SSYR2 . */
 
