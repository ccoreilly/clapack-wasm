--- ../../../wasm-clapack/f2c_BLAS-3.8.0/ssymv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///ssymv.c	2020-05-25 14:56:39.623788362 +0200
@@ -164,9 +164,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int ssymv_(char *uplo, integer *n, real *alpha, real *a, 
+/* Subroutine */ void ssymv_(char *uplo, integer *n, real *alpha, real *a, 
 	integer *lda, real *x, integer *incx, real *beta, real *y, integer *
-	incy, ftnlen uplo_len)
+	incy)
 {
     /* System generated locals */
     integer a_dim1, a_offset, i__1, i__2;
@@ -174,8 +174,8 @@
     /* Local variables */
     integer i__, j, ix, iy, jx, jy, kx, ky, info;
     real temp1, temp2;
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
@@ -225,14 +224,14 @@
 	info = 10;
     }
     if (info != 0) {
-	xerbla_("SSYMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("SSYMV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || *alpha == 0.f && *beta == 1.f) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in  X  and  Y. */
@@ -289,9 +288,9 @@
 	}
     }
     if (*alpha == 0.f) {
-	return 0;
+	return;
     }
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  y  when A is stored in upper triangle. */
 
@@ -377,7 +376,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of SSYMV . */
 
