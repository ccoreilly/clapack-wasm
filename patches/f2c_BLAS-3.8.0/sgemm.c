--- ../../../wasm-clapack/f2c_BLAS-3.8.0/sgemm.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///sgemm.c	2020-05-25 14:56:39.623788362 +0200
@@ -199,10 +199,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int sgemm_(char *transa, char *transb, integer *m, integer *
+/* Subroutine */ void sgemm_(char *transa, char *transb, integer *m, integer *
 	n, integer *k, real *alpha, real *a, integer *lda, real *b, integer *
-	ldb, real *beta, real *c__, integer *ldc, ftnlen transa_len, ftnlen 
-	transb_len)
+	ldb, real *beta, real *c__, integer *ldc)
 {
     /* System generated locals */
     integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2, 
@@ -213,9 +212,9 @@
     logical nota, notb;
     real temp;
     integer ncola;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa, nrowb;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
@@ -257,8 +256,8 @@
     c__ -= c_offset;
 
     /* Function Body */
-    nota = lsame_(transa, "N", (ftnlen)1, (ftnlen)1);
-    notb = lsame_(transb, "N", (ftnlen)1, (ftnlen)1);
+    nota = lsame_(transa, "N");
+    notb = lsame_(transb, "N");
     if (nota) {
 	nrowa = *m;
 	ncola = *k;
@@ -275,11 +274,10 @@
 /*     Test the input parameters. */
 
     info = 0;
-    if (! nota && ! lsame_(transa, "C", (ftnlen)1, (ftnlen)1) && ! lsame_(
-	    transa, "T", (ftnlen)1, (ftnlen)1)) {
+    if (! nota && ! lsame_(transa, "C") && ! lsame_( transa, "T")) {
 	info = 1;
-    } else if (! notb && ! lsame_(transb, "C", (ftnlen)1, (ftnlen)1) && ! 
-	    lsame_(transb, "T", (ftnlen)1, (ftnlen)1)) {
+    } else if (! notb && ! lsame_(transb, "C") && ! 
+	    lsame_(transb, "T")) {
 	info = 2;
     } else if (*m < 0) {
 	info = 3;
@@ -295,14 +293,14 @@
 	info = 13;
     }
     if (info != 0) {
-	xerbla_("SGEMM ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("SGEMM ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || (*alpha == 0.f || *k == 0) && *beta == 1.f) {
-	return 0;
+	return;
     }
 
 /*     And if  alpha.eq.zero. */
@@ -329,7 +327,7 @@
 /* L40: */
 	    }
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
@@ -450,7 +448,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of SGEMM . */
 
