--- ../../../CLAPACK-3.2.1/SRC/ssysvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssysvxx.c	2020-03-18 14:52:00.258153501 +0100
@@ -40,7 +40,7 @@
     logical equil, rcequ;
     extern doublereal slamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     integer infequ;
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
