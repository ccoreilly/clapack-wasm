--- ../../../CLAPACK-3.2.1/SRC/dsyrfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsyrfsx.c	2020-03-18 14:52:00.242152827 +0100
@@ -58,7 +58,7 @@
     doublereal anorm;
     logical rcequ;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal dlansy_(char *, char *, integer *, doublereal *, 
 	    integer *, doublereal *);
     extern /* Subroutine */ int dsycon_(char *, integer *, doublereal *, 
