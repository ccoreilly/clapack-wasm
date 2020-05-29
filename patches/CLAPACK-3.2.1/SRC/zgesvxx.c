--- ../../../CLAPACK-3.2.1/SRC/zgesvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgesvxx.c	2020-03-18 14:52:00.262153670 +0100
@@ -39,7 +39,7 @@
     extern doublereal dlamch_(char *);
     doublereal colcnd;
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern /* Subroutine */ int zlaqge_(integer *, integer *, doublecomplex *, 
 	     integer *, doublereal *, doublereal *, doublereal *, doublereal *
