--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dgemm.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///dgemm.c	2020-05-25 14:56:39.619788197 +0200
@@ -199,10 +199,10 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dgemm_(char *transa, char *transb, integer *m, integer *
+/* Subroutine */ void dgemm_(char *transa, char *transb, integer *m, integer *
 	n, integer *k, doublereal *alpha, doublereal *a, integer *lda, 
 	doublereal *b, integer *ldb, doublereal *beta, doublereal *c__, 
-	integer *ldc, ftnlen transa_len, ftnlen transb_len)
+	integer *ldc)
 {
     /* System generated locals */
     integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2, 
@@ -213,9 +213,9 @@
     logical nota, notb;
     doublereal temp;
     integer ncola;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa, nrowb;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
@@ -257,8 +257,8 @@
     c__ -= c_offset;
 
     /* Function Body */
-    nota = lsame_(transa, "N", (ftnlen)1, (ftnlen)1);
-    notb = lsame_(transb, "N", (ftnlen)1, (ftnlen)1);
+    nota = lsame_(transa, "N");
+    notb = lsame_(transb, "N");
     if (nota) {
 	nrowa = *m;
 	ncola = *k;
@@ -275,11 +275,10 @@
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
@@ -295,14 +294,14 @@
 	info = 13;
     }
     if (info != 0) {
-	xerbla_("DGEMM ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("DGEMM ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || (*alpha == 0. || *k == 0) && *beta == 1.) {
-	return 0;
+	return;
     }
 
 /*     And if  alpha.eq.zero. */
@@ -329,7 +328,7 @@
 /* L40: */
 	    }
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
@@ -450,7 +449,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of DGEMM . */
 
