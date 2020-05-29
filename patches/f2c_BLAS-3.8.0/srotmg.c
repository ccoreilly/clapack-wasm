--- ../../../wasm-clapack/f2c_BLAS-3.8.0/srotmg.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///srotmg.c	2020-05-25 14:56:39.623788362 +0200
@@ -102,7 +102,7 @@
 /* > \ingroup single_blas_level1 */
 
 /*  ===================================================================== */
-/* Subroutine */ int srotmg_(real *sd1, real *sd2, real *sx1, real *sy1, real 
+/* Subroutine */ void srotmg_(real *sd1, real *sd2, real *sx1, real *sy1, real 
 	*sparam)
 {
     /* Initialized data */
@@ -161,7 +161,7 @@
 	if (sp2 == zero) {
 	    sflag = -two;
 	    sparam[1] = sflag;
-	    return 0;
+	    return;
 	}
 /*        REGULAR-CASE.. */
 	sp1 = *sd1 * *sx1;
@@ -272,6 +272,6 @@
 	sparam[5] = sh22;
     }
     sparam[1] = sflag;
-    return 0;
+    return;
 } /* srotmg_ */
 
