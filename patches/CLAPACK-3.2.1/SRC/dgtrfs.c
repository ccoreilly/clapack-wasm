--- ../../../CLAPACK-3.2.1/SRC/dgtrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgtrfs.c	2020-03-18 14:52:00.226152152 +0100
@@ -50,7 +50,7 @@
 	    doublereal *, doublereal *, doublereal *, doublereal *, 
 	    doublereal *, integer *, doublereal *, doublereal *, integer *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
     char transn[1];
     extern /* Subroutine */ int dgttrs_(char *, integer *, integer *, 
