--- ../../../CLAPACK-3.2.1/SRC/sgbequ.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbequ.c	2020-03-18 14:52:00.246152995 +0100
@@ -25,7 +25,7 @@
     integer i__, j, kd;
     real rcmin, rcmax;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum, smlnum;
 
 
