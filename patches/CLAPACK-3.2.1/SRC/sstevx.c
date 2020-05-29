--- ../../../CLAPACK-3.2.1/SRC/sstevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sstevx.c	2020-03-18 14:52:00.258153501 +0100
@@ -49,7 +49,7 @@
     logical valeig;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     integer indisp, indiwo, indwrk;
     extern doublereal slanst_(char *, integer *, real *, real *);
