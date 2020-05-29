--- ../../../CLAPACK-3.2.1/SRC/sspevd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sspevd.c	2020-03-18 14:52:00.254153333 +0100
@@ -40,7 +40,7 @@
     integer iscale;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     integer indtau;
     extern /* Subroutine */ int sstedc_(char *, integer *, real *, real *, 
