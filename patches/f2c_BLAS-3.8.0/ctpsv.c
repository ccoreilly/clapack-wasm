--- ../../../wasm-clapack/f2c_BLAS-3.8.0/ctpsv.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///ctpsv.c	2020-05-25 14:56:39.619788197 +0200
@@ -156,9 +156,8 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int ctpsv_(char *uplo, char *trans, char *diag, integer *n, 
-	complex *ap, complex *x, integer *incx, ftnlen uplo_len, ftnlen 
-	trans_len, ftnlen diag_len)
+/* Subroutine */ void ctpsv_(char *uplo, char *trans, char *diag, integer *n, 
+	complex *ap, complex *x, integer *incx)
 {
     /* System generated locals */
     integer i__1, i__2, i__3, i__4, i__5;
@@ -170,8 +169,8 @@
     /* Local variables */
     integer i__, j, k, kk, ix, jx, kx, info;
     complex temp;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noconj, nounit;
 
 
@@ -206,15 +205,11 @@
 
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
@@ -222,18 +217,18 @@
 	info = 7;
     }
     if (info != 0) {
-	xerbla_("CTPSV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CTPSV ", &info);
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
@@ -247,11 +242,11 @@
 /*     Start the operations. In this version the elements of AP are */
 /*     accessed sequentially with one pass through AP. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  x := inv( A )*x. */
 
-	if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(uplo, "U")) {
 	    kk = *n * (*n + 1) / 2;
 	    if (*incx == 1) {
 		for (j = *n; j >= 1; --j) {
@@ -387,7 +382,7 @@
 
 /*        Form  x := inv( A**T )*x  or  x := inv( A**H )*x. */
 
-	if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(uplo, "U")) {
 	    kk = 1;
 	    if (*incx == 1) {
 		i__1 = *n;
@@ -595,7 +590,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CTPSV . */
 
