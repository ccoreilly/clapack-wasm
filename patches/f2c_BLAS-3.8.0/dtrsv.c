--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dtrsv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///dtrsv.c	2020-05-25 14:56:39.623788362 +0200
@@ -155,9 +155,8 @@
 /* > \ingroup double_blas_level1 */
 
 /*  ===================================================================== */
-/* Subroutine */ int dtrsv_(char *uplo, char *trans, char *diag, integer *n, 
-	doublereal *a, integer *lda, doublereal *x, integer *incx, ftnlen 
-	uplo_len, ftnlen trans_len, ftnlen diag_len)
+/* Subroutine */ void dtrsv_(char *uplo, char *trans, char *diag, integer *n, 
+	doublereal *a, integer *lda, doublereal *x, integer *incx)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2;
@@ -165,8 +164,8 @@
     /* Local variables */
     integer i__, j, ix, jx, kx, info;
     doublereal temp;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical nounit;
 
 
@@ -203,15 +202,11 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
-    } else if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, 
-	    "T", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, "C", (ftnlen)1, (
-	    ftnlen)1)) {
+    } else if (! lsame_(trans, "N") && ! lsame_(trans, "T") && ! lsame_(trans, "C")) {
 	info = 2;
-    } else if (! lsame_(diag, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(diag, 
-	    "N", (ftnlen)1, (ftnlen)1)) {
+    } else if (! lsame_(diag, "U") && ! lsame_(diag, "N")) {
 	info = 3;
     } else if (*n < 0) {
 	info = 4;
@@ -221,17 +216,17 @@
 	info = 8;
     }
     if (info != 0) {
-	xerbla_("DTRSV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("DTRSV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0) {
-	return 0;
+	return;
     }
 
-    nounit = lsame_(diag, "N", (ftnlen)1, (ftnlen)1);
+    nounit = lsame_(diag, "N");
 
 /*     Set up the start point in X if the increment is not unity. This */
 /*     will be  ( N - 1 )*INCX  too small for descending loops. */
@@ -245,11 +240,11 @@
 /*     Start the operations. In this version the elements of A are */
 /*     accessed sequentially with one pass through A. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  x := inv( A )*x. */
 
-	if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(uplo, "U")) {
 	    if (*incx == 1) {
 		for (j = *n; j >= 1; --j) {
 		    if (x[j] != 0.) {
@@ -326,7 +321,7 @@
 
 /*        Form  x := inv( A**T )*x. */
 
-	if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(uplo, "U")) {
 	    if (*incx == 1) {
 		i__1 = *n;
 		for (j = 1; j <= i__1; ++j) {
@@ -400,7 +395,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of DTRSV . */
 
