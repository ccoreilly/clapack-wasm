--- ../../../wasm-clapack/f2c_BLAS-3.8.0/cgerc.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///cgerc.c	2020-05-25 14:56:39.619788197 +0200
@@ -142,7 +142,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int cgerc_(integer *m, integer *n, complex *alpha, complex *
+/* Subroutine */ void cgerc_(integer *m, integer *n, complex *alpha, complex *
 	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda)
 {
     /* System generated locals */
@@ -155,7 +155,7 @@
     /* Local variables */
     integer i__, j, ix, jy, kx, info;
     complex temp;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -202,14 +202,14 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("CGERC ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("CGERC ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || alpha->r == 0.f && alpha->i == 0.f) {
-	return 0;
+	return;
     }
 
 /*     Start the operations. In this version the elements of A are */
@@ -277,7 +277,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of CGERC . */
 
