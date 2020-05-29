--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dtpmv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///dtpmv.c	2020-05-25 14:56:39.623788362 +0200
@@ -154,9 +154,8 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dtpmv_(char *uplo, char *trans, char *diag, integer *n, 
-	doublereal *ap, doublereal *x, integer *incx, ftnlen uplo_len, ftnlen 
-	trans_len, ftnlen diag_len)
+/* Subroutine */ void dtpmv_(char *uplo, char *trans, char *diag, integer *n, 
+	doublereal *ap, doublereal *x, integer *incx)
 {
     /* System generated locals */
     integer i__1, i__2;
@@ -164,8 +163,8 @@
     /* Local variables */
     integer i__, j, k, kk, ix, jx, kx, info;
     doublereal temp;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical nounit;
 
 
@@ -198,15 +197,11 @@
 
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
@@ -214,17 +209,17 @@
 	info = 7;
     }
     if (info != 0) {
-	xerbla_("DTPMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("DTPMV ", &info);
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
@@ -238,11 +233,11 @@
 /*     Start the operations. In this version the elements of AP are */
 /*     accessed sequentially with one pass through AP. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  x:= A*x. */
 
-	if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(uplo, "U")) {
 	    kk = 1;
 	    if (*incx == 1) {
 		i__1 = *n;
@@ -332,7 +327,7 @@
 
 /*        Form  x := A**T*x. */
 
-	if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(uplo, "U")) {
 	    kk = *n * (*n + 1) / 2;
 	    if (*incx == 1) {
 		for (j = *n; j >= 1; --j) {
@@ -414,7 +409,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of DTPMV . */
 
