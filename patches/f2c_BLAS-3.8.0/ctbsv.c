--- ../../../wasm-clapack/f2c_BLAS-3.8.0/ctbsv.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///ctbsv.c	2020-05-25 14:56:39.619788197 +0200
@@ -201,9 +201,8 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int ctbsv_(char *uplo, char *trans, char *diag, integer *n, 
-	integer *k, complex *a, integer *lda, complex *x, integer *incx, 
-	ftnlen uplo_len, ftnlen trans_len, ftnlen diag_len)
+/* Subroutine */ void ctbsv_(char *uplo, char *trans, char *diag, integer *n, 
+	integer *k, complex *a, integer *lda, complex *x, integer *incx)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;
@@ -215,9 +214,9 @@
     /* Local variables */
     integer i__, j, l, ix, jx, kx, info;
     complex temp;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer kplus1;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noconj, nounit;
 
 
@@ -254,15 +253,11 @@
 
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
@@ -274,18 +269,18 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("CTBSV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CTBSV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0) {
-	return 0;
+	return;
     }
 
-    noconj = lsame_(trans, "T", (ftnlen)1, (ftnlen)1);
-    nounit = lsame_(diag, "N", (ftnlen)1, (ftnlen)1);
+    noconj = lsame_(trans, "T");
+    nounit = lsame_(diag, "N");
 
 /*     Set up the start point in X if the increment is not unity. This */
 /*     will be  ( N - 1 )*INCX  too small for descending loops. */
@@ -299,11 +294,11 @@
 /*     Start the operations. In this version the elements of A are */
 /*     accessed by sequentially with one pass through A. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  x := inv( A )*x. */
 
-	if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(uplo, "U")) {
 	    kplus1 = *k + 1;
 	    if (*incx == 1) {
 		for (j = *n; j >= 1; --j) {
@@ -446,7 +441,7 @@
 
 /*        Form  x := inv( A**T )*x  or  x := inv( A**H )*x. */
 
-	if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(uplo, "U")) {
 	    kplus1 = *k + 1;
 	    if (*incx == 1) {
 		i__1 = *n;
@@ -669,7 +664,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CTBSV . */
 
