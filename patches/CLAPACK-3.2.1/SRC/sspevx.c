--- ../../../CLAPACK-3.2.1/SRC/sspevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sspevx.c	2020-03-18 14:52:00.254153333 +0100
@@ -51,7 +51,7 @@
     logical valeig;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real abstll, bignum;
     integer indtau, indisp, indiwo, indwrk;
     extern doublereal slansp_(char *, char *, integer *, real *, real *);
