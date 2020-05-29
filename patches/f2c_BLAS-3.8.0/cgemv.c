--- ../../../wasm-clapack/f2c_BLAS-3.8.0/cgemv.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///cgemv.c	2020-05-25 14:56:39.619788197 +0200
@@ -170,9 +170,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int cgemv_(char *trans, integer *m, integer *n, complex *
+/* Subroutine */ void cgemv_(char *trans, integer *m, integer *n, complex *
 	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
-	beta, complex *y, integer *incy, ftnlen trans_len)
+	beta, complex *y, integer *incy)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;
@@ -185,8 +185,8 @@
     integer i__, j, ix, iy, jx, jy, kx, ky, info;
     complex temp;
     integer lenx, leny;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noconj;
 
 
@@ -224,9 +224,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, "T", (
-	    ftnlen)1, (ftnlen)1) && ! lsame_(trans, "C", (ftnlen)1, (ftnlen)1)
-	    ) {
+    if (! lsame_(trans, "N") && ! lsame_(trans, "T") && ! lsame_(trans, "C")) {
 	info = 1;
     } else if (*m < 0) {
 	info = 2;
@@ -240,23 +238,23 @@
 	info = 11;
     }
     if (info != 0) {
-	xerbla_("CGEMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CGEMV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || alpha->r == 0.f && alpha->i == 0.f && (beta->r 
 	    == 1.f && beta->i == 0.f)) {
-	return 0;
+	return;
     }
 
-    noconj = lsame_(trans, "T", (ftnlen)1, (ftnlen)1);
+    noconj = lsame_(trans, "T");
 
 /*     Set  LENX  and  LENY, the lengths of the vectors x and y, and set */
 /*     up the start points in  X  and  Y. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 	lenx = *n;
 	leny = *m;
     } else {
@@ -326,9 +324,9 @@
 	}
     }
     if (alpha->r == 0.f && alpha->i == 0.f) {
-	return 0;
+	return;
     }
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  y := alpha*A*x + y. */
 
@@ -465,7 +463,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CGEMV . */
 
