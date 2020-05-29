--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zgemm.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zgemm.c	2020-05-25 14:56:39.623788362 +0200
@@ -199,10 +199,10 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zgemm_(char *transa, char *transb, integer *m, integer *
+/* Subroutine */ void zgemm_(char *transa, char *transb, integer *m, integer *
 	n, integer *k, doublecomplex *alpha, doublecomplex *a, integer *lda, 
 	doublecomplex *b, integer *ldb, doublecomplex *beta, doublecomplex *
-	c__, integer *ldc, ftnlen transa_len, ftnlen transb_len)
+	c__, integer *ldc)
 {
     /* System generated locals */
     integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2, 
@@ -218,9 +218,9 @@
     doublecomplex temp;
     logical conja, conjb;
     integer ncola;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa, nrowb;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
@@ -264,10 +264,10 @@
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
@@ -284,10 +284,9 @@
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
@@ -303,15 +302,15 @@
 	info = 13;
     }
     if (info != 0) {
-	xerbla_("ZGEMM ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZGEMM ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || (alpha->r == 0. && alpha->i == 0. || *k == 0) &&
 	     (beta->r == 1. && beta->i == 0.)) {
-	return 0;
+	return;
     }
 
 /*     And when  alpha.eq.zero. */
@@ -344,7 +343,7 @@
 /* L40: */
 	    }
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
@@ -756,7 +755,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZGEMM . */
 
