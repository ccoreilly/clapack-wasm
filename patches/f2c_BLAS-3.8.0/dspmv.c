--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dspmv.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///dspmv.c	2020-05-25 14:56:39.623788362 +0200
@@ -159,9 +159,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dspmv_(char *uplo, integer *n, doublereal *alpha, 
+/* Subroutine */ void dspmv_(char *uplo, integer *n, doublereal *alpha, 
 	doublereal *ap, doublereal *x, integer *incx, doublereal *beta, 
-	doublereal *y, integer *incy, ftnlen uplo_len)
+	doublereal *y, integer *incy)
 {
     /* System generated locals */
     integer i__1, i__2;
@@ -169,8 +169,8 @@
     /* Local variables */
     integer i__, j, k, kk, ix, iy, jx, jy, kx, ky, info;
     doublereal temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -203,8 +203,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -214,14 +213,14 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("DSPMV ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("DSPMV ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || *alpha == 0. && *beta == 1.) {
-	return 0;
+	return;
     }
 
 /*     Set up the start points in  X  and  Y. */
@@ -277,10 +276,10 @@
 	}
     }
     if (*alpha == 0.) {
-	return 0;
+	return;
     }
     kk = 1;
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  y  when AP contains the upper triangle. */
 
@@ -374,7 +373,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of DSPMV . */
 
