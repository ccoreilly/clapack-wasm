--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zhbmv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zhbmv.c	2020-05-25 14:56:39.623788362 +0200
@@ -199,10 +199,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zhbmv_(char *uplo, integer *n, integer *k, doublecomplex 
+/* Subroutine */ void zhbmv_(char *uplo, integer *n, integer *k, doublecomplex 
 	*alpha, doublecomplex *a, integer *lda, doublecomplex *x, integer *
-	incx, doublecomplex *beta, doublecomplex *y, integer *incy, ftnlen 
-	uplo_len)
+	incx, doublecomplex *beta, doublecomplex *y, integer *incy)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;
@@ -215,9 +214,9 @@
     /* Local variables */
     integer i__, j, l, ix, iy, jx, jy, kx, ky, info;
     doublecomplex temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer kplus1;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -254,8 +253,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -269,15 +267,15 @@
 	info = 11;
     }
     if (info != 0) {
-	xerbla_("ZHBMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZHBMV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || alpha->r == 0. && alpha->i == 0. && (beta->r == 1. && 
 	    beta->i == 0.)) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in  X  and  Y. */
@@ -345,9 +343,9 @@
 	}
     }
     if (alpha->r == 0. && alpha->i == 0.) {
-	return 0;
+	return;
     }
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  y  when upper triangle of A is stored. */
 
@@ -550,7 +548,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZHBMV . */
 
