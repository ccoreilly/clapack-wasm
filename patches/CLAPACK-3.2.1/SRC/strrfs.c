--- ../../../CLAPACK-3.2.1/SRC/strrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/strrfs.c	2020-03-18 14:52:00.258153501 +0100
@@ -47,7 +47,7 @@
 	    real *, integer *, real *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
     char transt[1];
     logical nounit;
