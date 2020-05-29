--- ../../../wasm-clapack/f2c_BLAS-3.8.0/crotg.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///crotg.c	2020-05-25 14:56:39.619788197 +0200
@@ -74,7 +74,7 @@
 /* > \ingroup complex_blas_level1 */
 
 /*  ===================================================================== */
-/* Subroutine */ int crotg_(complex *ca, complex *cb, real *c__, complex *s)
+/* Subroutine */ void crotg_(complex *ca, complex *cb, real *c__, complex *s)
 {
     /* System generated locals */
     real r__1, r__2;
@@ -129,6 +129,6 @@
 	q__1.r = norm * alpha.r, q__1.i = norm * alpha.i;
 	ca->r = q__1.r, ca->i = q__1.i;
     }
-    return 0;
+    return;
 } /* crotg_ */
 
