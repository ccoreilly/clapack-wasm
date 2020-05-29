--- ../../../wasm-clapack/f2c_BLAS-3.8.0/chpmv.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///chpmv.c	2020-05-25 14:56:39.619788197 +0200
@@ -161,9 +161,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int chpmv_(char *uplo, integer *n, complex *alpha, complex *
+/* Subroutine */ void chpmv_(char *uplo, integer *n, complex *alpha, complex *
 	ap, complex *x, integer *incx, complex *beta, complex *y, integer *
-	incy, ftnlen uplo_len)
+	incy)
 {
     /* System generated locals */
     integer i__1, i__2, i__3, i__4, i__5;
@@ -176,8 +176,8 @@
     /* Local variables */
     integer i__, j, k, kk, ix, iy, jx, jy, kx, ky, info;
     complex temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -212,8 +212,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -223,15 +222,15 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("CHPMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CHPMV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || alpha->r == 0.f && alpha->i == 0.f && (beta->r == 1.f && 
 	    beta->i == 0.f)) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in  X  and  Y. */
@@ -299,10 +298,10 @@
 	}
     }
     if (alpha->r == 0.f && alpha->i == 0.f) {
-	return 0;
+	return;
     }
     kk = 1;
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  y  when AP contains the upper triangle. */
 
@@ -496,7 +495,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CHPMV . */
 
