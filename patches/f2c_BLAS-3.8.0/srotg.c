--- ../../../wasm-clapack/f2c_BLAS-3.8.0/srotg.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///srotg.c	2020-05-25 14:56:39.623788362 +0200
@@ -85,7 +85,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int srotg_(real *sa, real *sb, real *c__, real *s)
+/* Subroutine */ void srotg_(real *sa, real *sb, real *c__, real *s)
 {
     /* System generated locals */
     real r__1, r__2;
@@ -140,6 +140,6 @@
     }
     *sa = r__;
     *sb = z__;
-    return 0;
+    return;
 } /* srotg_ */
 
