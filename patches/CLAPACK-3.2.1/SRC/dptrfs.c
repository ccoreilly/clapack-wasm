--- ../../../CLAPACK-3.2.1/SRC/dptrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dptrfs.c	2020-03-18 14:52:00.238152659 +0100
@@ -38,7 +38,7 @@
     extern doublereal dlamch_(char *);
     extern integer idamax_(integer *, doublereal *, integer *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal lstres;
     extern /* Subroutine */ int dpttrs_(integer *, integer *, doublereal *, 
 	    doublereal *, doublereal *, integer *, integer *);
