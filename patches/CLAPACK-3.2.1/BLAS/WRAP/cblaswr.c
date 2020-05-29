--- ../../../CLAPACK-3.2.1/BLAS/WRAP/cblaswr.c	2010-04-27 19:45:15.000000000 +0200
+++ CLAPACK-3.2.1///BLAS/WRAP/cblaswr.c	2020-03-18 14:52:00.174149960 +0100
@@ -209,7 +209,7 @@
 		  real* c,
 		  real* s)
 {
-    cblas_srotg(*a, *b, *c, *s);
+    cblas_srotg(a, b, c, s);
     return 0;
 }
 
@@ -219,7 +219,7 @@
           complex* C,
           real* S)
 {
-    cblas_crotg(*CA, *CB, *C, *S);
+    cblas_crotg(CA, CB, C, S);
     return 0;
 }
 
@@ -229,7 +229,7 @@
           doublereal* c,
           doublereal* s)
 {
-    cblas_drotg(*a, *b, *c, *s);
+    cblas_drotg(a, b, c, s);
     return 0;
 }
 int
@@ -238,7 +238,7 @@
           doublecomplex* C,
           doublereal* S)
 {
-    cblas_zrotg(*CA, *CB, *C, *S);
+    cblas_zrotg(CA, CB, C, S);
     return 0;
 }
 /*
