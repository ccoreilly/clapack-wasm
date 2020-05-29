--- ../../../CLAPACK-3.2.1/SRC/cptrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cptrfs.c	2020-03-18 14:52:00.214151646 +0100
@@ -48,7 +48,7 @@
     logical upper;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     real lstres;
     extern /* Subroutine */ int cpttrs_(char *, integer *, integer *, real *, 
