--- ../../../wasm-clapack/f2c_BLAS-3.8.0/drotg.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///drotg.c	2020-05-25 14:56:39.623788362 +0200
@@ -85,7 +85,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int drotg_(doublereal *da, doublereal *db, doublereal *c__, 
+/* Subroutine */ void drotg_(doublereal *da, doublereal *db, doublereal *c__, 
 	doublereal *s)
 {
     /* System generated locals */
@@ -141,6 +141,6 @@
     }
     *da = r__;
     *db = z__;
-    return 0;
+    return;
 } /* drotg_ */
 
