--- ../../../CLAPACK-3.2.1/SRC/strsna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/strsna.c	2020-03-18 14:52:00.258153501 +0100
@@ -58,7 +58,7 @@
     extern doublereal slapy2_(real *, real *);
     extern /* Subroutine */ int slabad_(real *, real *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     logical wantbh;
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
