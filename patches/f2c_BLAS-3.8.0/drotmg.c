--- ../../../wasm-clapack/f2c_BLAS-3.8.0/drotmg.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///drotmg.c	2020-05-25 14:56:39.623788362 +0200
@@ -102,7 +102,7 @@
 /* > \ingroup double_blas_level1 */
 
 /*  ===================================================================== */
-/* Subroutine */ int drotmg_(doublereal *dd1, doublereal *dd2, doublereal *
+/* Subroutine */ void drotmg_(doublereal *dd1, doublereal *dd2, doublereal *
 	dx1, doublereal *dy1, doublereal *dparam)
 {
     /* Initialized data */
@@ -161,7 +161,7 @@
 	if (dp2 == zero) {
 	    dflag = -two;
 	    dparam[1] = dflag;
-	    return 0;
+	    return;
 	}
 /*        REGULAR-CASE.. */
 	dp1 = *dd1 * *dx1;
@@ -272,6 +272,6 @@
 	dparam[5] = dh22;
     }
     dparam[1] = dflag;
-    return 0;
+    return;
 } /* drotmg_ */
 
