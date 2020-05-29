--- ../../../CLAPACK-3.2.1/SRC/zsysvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsysvxx.c	2020-03-18 14:52:00.266153839 +0100
@@ -45,7 +45,7 @@
     logical equil, rcequ;
     extern doublereal dlamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     integer infequ;
     extern /* Subroutine */ int zlacpy_(char *, integer *, integer *, 
