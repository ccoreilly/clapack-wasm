--- ../../../wasm-clapack/f2c_BLAS-3.8.0/cgemm.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///cgemm.c	2020-05-25 14:56:39.619788197 +0200
@@ -199,10 +199,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int cgemm_(char *transa, char *transb, integer *m, integer *
+/* Subroutine */ void cgemm_(char *transa, char *transb, integer *m, integer *
 	n, integer *k, complex *alpha, complex *a, integer *lda, complex *b, 
-	integer *ldb, complex *beta, complex *c__, integer *ldc, ftnlen 
-	transa_len, ftnlen transb_len)
+	integer *ldb, complex *beta, complex *c__, integer *ldc)
 {
     /* System generated locals */
     integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2, 
@@ -218,9 +217,9 @@
     complex temp;
     logical conja, conjb;
     integer ncola;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa, nrowb;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
@@ -264,10 +263,10 @@
     c__ -= c_offset;
 
     /* Function Body */
-    nota = lsame_(transa, "N", (ftnlen)1, (ftnlen)1);
-    notb = lsame_(transb, "N", (ftnlen)1, (ftnlen)1);
-    conja = lsame_(transa, "C", (ftnlen)1, (ftnlen)1);
-    conjb = lsame_(transb, "C", (ftnlen)1, (ftnlen)1);
+    nota = lsame_(transa, "N");
+    notb = lsame_(transb, "N");
+    conja = lsame_(transa, "C");
+    conjb = lsame_(transb, "C");
     if (nota) {
 	nrowa = *m;
 	ncola = *k;
@@ -284,10 +283,9 @@
 /*     Test the input parameters. */
 
     info = 0;
-    if (! nota && ! conja && ! lsame_(transa, "T", (ftnlen)1, (ftnlen)1)) {
+    if (! nota && ! conja && ! lsame_(transa, "T")) {
 	info = 1;
-    } else if (! notb && ! conjb && ! lsame_(transb, "T", (ftnlen)1, (ftnlen)
-	    1)) {
+    } else if (! notb && ! conjb && ! lsame_(transb, "T")) {
 	info = 2;
     } else if (*m < 0) {
 	info = 3;
@@ -303,15 +301,15 @@
 	info = 13;
     }
     if (info != 0) {
-	xerbla_("CGEMM ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CGEMM ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || (alpha->r == 0.f && alpha->i == 0.f || *k == 0) 
 	    && (beta->r == 1.f && beta->i == 0.f)) {
-	return 0;
+	return;
     }
 
 /*     And when  alpha.eq.zero. */
@@ -344,7 +342,7 @@
 /* L40: */
 	    }
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
@@ -756,7 +754,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CGEMM . */
 
