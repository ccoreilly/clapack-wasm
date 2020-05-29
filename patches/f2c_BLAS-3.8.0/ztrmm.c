--- ../../../wasm-clapack/f2c_BLAS-3.8.0/ztrmm.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///ztrmm.c	2020-05-25 14:56:39.627788526 +0200
@@ -189,10 +189,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int ztrmm_(char *side, char *uplo, char *transa, char *diag, 
+/* Subroutine */ void ztrmm_(char *side, char *uplo, char *transa, char *diag, 
 	integer *m, integer *n, doublecomplex *alpha, doublecomplex *a, 
-	integer *lda, doublecomplex *b, integer *ldb, ftnlen side_len, ftnlen 
-	uplo_len, ftnlen transa_len, ftnlen diag_len)
+	integer *lda, doublecomplex *b, integer *ldb)
 {
     /* System generated locals */
     integer a_dim1, a_offset, b_dim1, b_offset, i__1, i__2, i__3, i__4, i__5, 
@@ -206,10 +205,10 @@
     integer i__, j, k, info;
     doublecomplex temp;
     logical lside;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa;
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noconj, nounit;
 
 
@@ -247,27 +246,24 @@
     b -= b_offset;
 
     /* Function Body */
-    lside = lsame_(side, "L", (ftnlen)1, (ftnlen)1);
+    lside = lsame_(side, "L");
     if (lside) {
 	nrowa = *m;
     } else {
 	nrowa = *n;
     }
-    noconj = lsame_(transa, "T", (ftnlen)1, (ftnlen)1);
-    nounit = lsame_(diag, "N", (ftnlen)1, (ftnlen)1);
-    upper = lsame_(uplo, "U", (ftnlen)1, (ftnlen)1);
+    noconj = lsame_(transa, "T");
+    nounit = lsame_(diag, "N");
+    upper = lsame_(uplo, "U");
 
     info = 0;
-    if (! lside && ! lsame_(side, "R", (ftnlen)1, (ftnlen)1)) {
+    if (! lside && ! lsame_(side, "R")) {
 	info = 1;
-    } else if (! upper && ! lsame_(uplo, "L", (ftnlen)1, (ftnlen)1)) {
+    } else if (! upper && ! lsame_(uplo, "L")) {
 	info = 2;
-    } else if (! lsame_(transa, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(transa,
-	     "T", (ftnlen)1, (ftnlen)1) && ! lsame_(transa, "C", (ftnlen)1, (
-	    ftnlen)1)) {
+    } else if (! lsame_(transa, "N") && ! lsame_(transa, "T") && ! lsame_(transa, "C")) {
 	info = 3;
-    } else if (! lsame_(diag, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(diag, 
-	    "N", (ftnlen)1, (ftnlen)1)) {
+    } else if (! lsame_(diag, "U") && ! lsame_(diag, "N")) {
 	info = 4;
     } else if (*m < 0) {
 	info = 5;
@@ -279,14 +275,14 @@
 	info = 11;
     }
     if (info != 0) {
-	xerbla_("ZTRMM ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZTRMM ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0) {
-	return 0;
+	return;
     }
 
 /*     And when  alpha.eq.zero. */
@@ -302,13 +298,13 @@
 	    }
 /* L20: */
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
 
     if (lside) {
-	if (lsame_(transa, "N", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(transa, "N")) {
 
 /*           Form  B := alpha*A*B. */
 
@@ -512,7 +508,7 @@
 	    }
 	}
     } else {
-	if (lsame_(transa, "N", (ftnlen)1, (ftnlen)1)) {
+	if (lsame_(transa, "N")) {
 
 /*           Form  B := alpha*B*A. */
 
@@ -751,7 +747,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZTRMM . */
 
