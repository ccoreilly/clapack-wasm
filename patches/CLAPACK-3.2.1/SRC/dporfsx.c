--- ../../../CLAPACK-3.2.1/SRC/dporfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dporfsx.c	2020-03-18 14:52:00.238152659 +0100
@@ -58,7 +58,8 @@
     doublereal anorm;
     logical rcequ;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), dpocon_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dpocon_(
 	    char *, integer *, doublereal *, integer *, doublereal *, 
 	    doublereal *, doublereal *, integer *, integer *);
     extern doublereal dlansy_(char *, char *, integer *, doublereal *, 
