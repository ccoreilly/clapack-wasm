--- ../../../CLAPACK-3.2.1/SRC/zgbequb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgbequb.c	2020-03-18 14:52:00.258153501 +0100
@@ -30,7 +30,7 @@
     integer i__, j, kd;
     doublereal radix, rcmin, rcmax;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum, logrdx, smlnum;
 
 
