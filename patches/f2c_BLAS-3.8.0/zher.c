--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zher.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zher.c	2020-05-25 14:56:39.623788362 +0200
@@ -147,9 +147,8 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zher_(char *uplo, integer *n, doublereal *alpha, 
-	doublecomplex *x, integer *incx, doublecomplex *a, integer *lda, 
-	ftnlen uplo_len)
+/* Subroutine */ void zher_(char *uplo, integer *n, doublereal *alpha, 
+	doublecomplex *x, integer *incx, doublecomplex *a, integer *lda)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;
@@ -162,8 +161,8 @@
     /* Local variables */
     integer i__, j, ix, jx, kx, info;
     doublecomplex temp;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -199,8 +198,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -210,14 +208,14 @@
 	info = 7;
     }
     if (info != 0) {
-	xerbla_("ZHER  ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZHER  ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || *alpha == 0.) {
-	return 0;
+	return;
     }
 
 /*     Set the start point in X if the increment is not unity. */
@@ -232,7 +230,7 @@
 /*     accessed sequentially with one pass through the triangular part */
 /*     of A. */
 
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  A  when A is stored in upper triangle. */
 
@@ -396,7 +394,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZHER  . */
 
