--- ../../../CLAPACK-3.2.1/SRC/zgeequ.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgeequ.c	2020-03-18 14:52:00.258153501 +0100
@@ -28,7 +28,7 @@
     integer i__, j;
     doublereal rcmin, rcmax;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum, smlnum;
 
 