--- ../../../CLAPACK-3.2.1/SRC/dlagts.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlagts.c	2020-03-18 14:52:00.230152321 +0100
@@ -28,7 +28,7 @@
     integer k;
     doublereal ak, eps, temp, pert, absak, sfmin;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
 
 
