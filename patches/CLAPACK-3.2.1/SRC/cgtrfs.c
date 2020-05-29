--- ../../../CLAPACK-3.2.1/SRC/cgtrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgtrfs.c	2020-03-18 14:52:00.190150635 +0100
@@ -55,7 +55,7 @@
 	    real *, complex *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
     char transn[1];
     extern /* Subroutine */ int cgttrs_(char *, integer *, integer *, complex 
