--- ../../../wasm-clapack/f2c_BLAS-3.8.0/chpr2.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///chpr2.c	2020-05-25 14:56:39.619788197 +0200
@@ -157,9 +157,8 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int chpr2_(char *uplo, integer *n, complex *alpha, complex *
-	x, integer *incx, complex *y, integer *incy, complex *ap, ftnlen 
-	uplo_len)
+/* Subroutine */ void chpr2_(char *uplo, integer *n, complex *alpha, complex *
+	x, integer *incx, complex *y, integer *incy, complex *ap)
 {
     /* System generated locals */
     integer i__1, i__2, i__3, i__4, i__5, i__6;
@@ -172,8 +171,8 @@
     /* Local variables */
     integer i__, j, k, kk, ix, iy, jx, jy, kx, ky, info;
     complex temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -208,8 +207,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -219,14 +217,14 @@
 	info = 7;
     }
     if (info != 0) {
-	xerbla_("CHPR2 ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CHPR2 ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || alpha->r == 0.f && alpha->i == 0.f) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in X and Y if the increments are not both */
@@ -251,7 +249,7 @@
 /*     are accessed sequentially with one pass through AP. */
 
     kk = 1;
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  A  when upper triangle is stored in AP. */
 
@@ -507,7 +505,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CHPR2 . */
 
