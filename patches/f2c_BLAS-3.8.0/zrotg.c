--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zrotg.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zrotg.c	2020-05-25 14:56:39.627788526 +0200
@@ -74,7 +74,7 @@
 /* > \ingroup complex16_blas_level1 */
 
 /*  ===================================================================== */
-/* Subroutine */ int zrotg_(doublecomplex *ca, doublecomplex *cb, doublereal *
+/* Subroutine */ void zrotg_(doublecomplex *ca, doublecomplex *cb, doublereal *
 	c__, doublecomplex *s)
 {
     /* System generated locals */
@@ -134,6 +134,6 @@
 	z__1.r = norm * alpha.r, z__1.i = norm * alpha.i;
 	ca->r = z__1.r, ca->i = z__1.i;
     }
-    return 0;
+    return;
 } /* zrotg_ */
 
