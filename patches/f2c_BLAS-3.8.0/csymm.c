--- ../../../wasm-clapack/f2c_BLAS-3.8.0/csymm.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///csymm.c	2020-05-25 14:56:39.619788197 +0200
@@ -201,10 +201,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int csymm_(char *side, char *uplo, integer *m, integer *n, 
+/* Subroutine */ void csymm_(char *side, char *uplo, integer *m, integer *n, 
 	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
-	complex *beta, complex *c__, integer *ldc, ftnlen side_len, ftnlen 
-	uplo_len)
+	complex *beta, complex *c__, integer *ldc)
 {
     /* System generated locals */
     integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2, 
@@ -214,10 +213,10 @@
     /* Local variables */
     integer i__, j, k, info;
     complex temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa;
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
@@ -257,20 +256,19 @@
     c__ -= c_offset;
 
     /* Function Body */
-    if (lsame_(side, "L", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(side, "L")) {
 	nrowa = *m;
     } else {
 	nrowa = *n;
     }
-    upper = lsame_(uplo, "U", (ftnlen)1, (ftnlen)1);
+    upper = lsame_(uplo, "U");
 
 /*     Test the input parameters. */
 
     info = 0;
-    if (! lsame_(side, "L", (ftnlen)1, (ftnlen)1) && ! lsame_(side, "R", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(side, "L") && ! lsame_(side, "R")) {
 	info = 1;
-    } else if (! upper && ! lsame_(uplo, "L", (ftnlen)1, (ftnlen)1)) {
+    } else if (! upper && ! lsame_(uplo, "L")) {
 	info = 2;
     } else if (*m < 0) {
 	info = 3;
@@ -284,15 +282,15 @@
 	info = 12;
     }
     if (info != 0) {
-	xerbla_("CSYMM ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CSYMM ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || alpha->r == 0.f && alpha->i == 0.f && (beta->r 
 	    == 1.f && beta->i == 0.f)) {
-	return 0;
+	return;
     }
 
 /*     And when  alpha.eq.zero. */
@@ -325,12 +323,12 @@
 /* L40: */
 	    }
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
 
-    if (lsame_(side, "L", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(side, "L")) {
 
 /*        Form  C := alpha*A*B + beta*C. */
 
@@ -562,7 +560,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CSYMM . */
 
