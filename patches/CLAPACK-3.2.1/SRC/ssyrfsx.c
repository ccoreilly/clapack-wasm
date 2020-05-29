--- ../../../CLAPACK-3.2.1/SRC/ssyrfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssyrfsx.c	2020-03-18 14:52:00.258153501 +0100
@@ -56,7 +56,7 @@
     real anorm;
     logical rcequ;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal slansy_(char *, char *, integer *, real *, integer *, 
 	    real *);
     extern /* Subroutine */ int ssycon_(char *, integer *, real *, integer *, 
