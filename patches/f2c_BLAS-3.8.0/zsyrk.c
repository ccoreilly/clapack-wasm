--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zsyrk.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zsyrk.c	2020-05-25 14:56:39.627788526 +0200
@@ -179,10 +179,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zsyrk_(char *uplo, char *trans, integer *n, integer *k, 
+/* Subroutine */ void zsyrk_(char *uplo, char *trans, integer *n, integer *k, 
 	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
-	beta, doublecomplex *c__, integer *ldc, ftnlen uplo_len, ftnlen 
-	trans_len)
+	beta, doublecomplex *c__, integer *ldc)
 {
     /* System generated locals */
     integer a_dim1, a_offset, c_dim1, c_offset, i__1, i__2, i__3, i__4, i__5, 
@@ -192,10 +191,10 @@
     /* Local variables */
     integer i__, j, l, info;
     doublecomplex temp;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa;
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
@@ -232,18 +231,17 @@
     c__ -= c_offset;
 
     /* Function Body */
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 	nrowa = *n;
     } else {
 	nrowa = *k;
     }
-    upper = lsame_(uplo, "U", (ftnlen)1, (ftnlen)1);
+    upper = lsame_(uplo, "U");
 
     info = 0;
-    if (! upper && ! lsame_(uplo, "L", (ftnlen)1, (ftnlen)1)) {
+    if (! upper && ! lsame_(uplo, "L")) {
 	info = 1;
-    } else if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, 
-	    "T", (ftnlen)1, (ftnlen)1)) {
+    } else if (! lsame_(trans, "N") && ! lsame_(trans, "T")) {
 	info = 2;
     } else if (*n < 0) {
 	info = 3;
@@ -255,15 +253,15 @@
 	info = 10;
     }
     if (info != 0) {
-	xerbla_("ZSYRK ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZSYRK ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || (alpha->r == 0. && alpha->i == 0. || *k == 0) && (beta->r 
 	    == 1. && beta->i == 0.)) {
-	return 0;
+	return;
     }
 
 /*     And when  alpha.eq.zero. */
@@ -326,12 +324,12 @@
 		}
 	    }
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  C := alpha*A*A**T + beta*C. */
 
@@ -519,7 +517,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZSYRK . */
 
