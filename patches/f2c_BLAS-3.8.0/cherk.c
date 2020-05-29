--- ../../../wasm-clapack/f2c_BLAS-3.8.0/cherk.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///cherk.c	2020-05-25 14:56:39.619788197 +0200
@@ -185,9 +185,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int cherk_(char *uplo, char *trans, integer *n, integer *k, 
+/* Subroutine */ void cherk_(char *uplo, char *trans, integer *n, integer *k, 
 	real *alpha, complex *a, integer *lda, real *beta, complex *c__, 
-	integer *ldc, ftnlen uplo_len, ftnlen trans_len)
+	integer *ldc)
 {
     /* System generated locals */
     integer a_dim1, a_offset, c_dim1, c_offset, i__1, i__2, i__3, i__4, i__5, 
@@ -201,11 +201,11 @@
     /* Local variables */
     integer i__, j, l, info;
     complex temp;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa;
     real rtemp;
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
@@ -242,18 +242,17 @@
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
-	    "C", (ftnlen)1, (ftnlen)1)) {
+    } else if (! lsame_(trans, "N") && ! lsame_(trans, "C")) {
 	info = 2;
     } else if (*n < 0) {
 	info = 3;
@@ -265,14 +264,14 @@
 	info = 10;
     }
     if (info != 0) {
-	xerbla_("CHERK ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CHERK ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || (*alpha == 0.f || *k == 0) && *beta == 1.f) {
-	return 0;
+	return;
     }
 
 /*     And when  alpha.eq.zero. */
@@ -341,12 +340,12 @@
 		}
 	    }
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  C := alpha*A*A**H + beta*C. */
 
@@ -594,7 +593,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CHERK . */
 
