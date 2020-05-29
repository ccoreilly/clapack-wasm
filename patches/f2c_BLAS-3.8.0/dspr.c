--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dspr.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///dspr.c	2020-05-25 14:56:39.623788362 +0200
@@ -139,8 +139,8 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dspr_(char *uplo, integer *n, doublereal *alpha, 
-	doublereal *x, integer *incx, doublereal *ap, ftnlen uplo_len)
+/* Subroutine */ void dspr_(char *uplo, integer *n, doublereal *alpha, 
+	doublereal *x, integer *incx, doublereal *ap)
 {
     /* System generated locals */
     integer i__1, i__2;
@@ -148,8 +148,8 @@
     /* Local variables */
     integer i__, j, k, kk, ix, jx, kx, info;
     doublereal temp;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern  logical lsame_(char *, char *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -181,8 +181,7 @@
 
     /* Function Body */
     info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
+    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
 	info = 1;
     } else if (*n < 0) {
 	info = 2;
@@ -190,14 +189,14 @@
 	info = 5;
     }
     if (info != 0) {
-	xerbla_("DSPR  ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("DSPR  ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || *alpha == 0.) {
-	return 0;
+	return;
     }
 
 /*     Set the start point in X if the increment is not unity. */
@@ -212,7 +211,7 @@
 /*     are accessed sequentially with one pass through AP. */
 
     kk = 1;
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(uplo, "U")) {
 
 /*        Form  A  when upper triangle is stored in AP. */
 
@@ -292,7 +291,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of DSPR  . */
 
