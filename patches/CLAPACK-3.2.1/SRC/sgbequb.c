--- ../../../CLAPACK-3.2.1/SRC/sgbequb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbequb.c	2020-03-18 14:52:00.246152995 +0100
@@ -28,7 +28,7 @@
     integer i__, j, kd;
     real radix, rcmin, rcmax;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum, logrdx, smlnum;
 
 
