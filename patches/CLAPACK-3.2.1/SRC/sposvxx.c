--- ../../../CLAPACK-3.2.1/SRC/sposvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sposvxx.c	2020-03-18 14:52:00.254153333 +0100
@@ -36,7 +36,7 @@
     logical equil, rcequ;
     extern doublereal slamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     integer infequ;
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
