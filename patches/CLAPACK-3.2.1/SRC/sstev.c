--- ../../../CLAPACK-3.2.1/SRC/sstev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sstev.c	2020-03-18 14:52:00.258153501 +0100
@@ -37,7 +37,7 @@
     integer iscale;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     extern doublereal slanst_(char *, integer *, real *, real *);
     extern /* Subroutine */ int ssterf_(integer *, real *, real *, integer *);
