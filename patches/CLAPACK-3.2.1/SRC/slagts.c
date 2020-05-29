--- ../../../CLAPACK-3.2.1/SRC/slagts.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slagts.c	2020-03-18 14:52:00.250153164 +0100
@@ -27,7 +27,7 @@
     integer k;
     real ak, eps, temp, pert, absak, sfmin;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
 
 
