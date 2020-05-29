--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dspr2.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///dspr2.c	2020-05-25 14:56:39.623788362 +0200
@@ -154,9 +154,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dspr2_(char *uplo, integer *n, doublereal *alpha, 
+/* Subroutine */ void dspr2_(char *uplo, integer *n, doublereal *alpha, 
 	doublereal *x, integer *incx, doublereal *y, integer *incy, 
-	doublereal *ap, ftnlen uplo_len)
+	doublereal *ap)
 {
     /* System generated locals */
     integer i__1, i__2;
@@ -164,8 +164,8 @@
     /* Local variables */
     integer i__, j, k, kk, ix, iy, jx, jy, kx, ky, info;
     doublereal temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -198,8 +198,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -209,14 +208,14 @@
 	info = 7;
     }
     if (info != 0) {
-	xerbla_("DSPR2 ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("DSPR2 ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || *alpha == 0.) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in X and Y if the increments are not both */
@@ -241,7 +240,7 @@
 /*     are accessed sequentially with one pass through AP. */
 
     kk = 1;
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  A  when upper triangle is stored in AP. */
 
@@ -329,7 +328,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of DSPR2 . */
 
