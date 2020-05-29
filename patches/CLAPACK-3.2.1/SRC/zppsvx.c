--- ../../../CLAPACK-3.2.1/SRC/zppsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zppsvx.c	2020-03-18 14:52:00.266153839 +0100
@@ -38,7 +38,7 @@
 	    doublecomplex *, integer *);
     extern doublereal dlamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     integer infequ;
     extern doublereal zlanhp_(char *, char *, integer *, doublecomplex *, 
