--- ../../../CLAPACK-3.2.1/SRC/slascl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slascl.c	2020-03-18 14:52:00.254153333 +0100
@@ -30,7 +30,7 @@
     real cfrom1;
     extern doublereal slamch_(char *);
     real cfromc;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     extern logical sisnan_(real *);
     real smlnum;
