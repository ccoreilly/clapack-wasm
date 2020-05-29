--- ../../../CLAPACK-3.2.1/SRC/zgtsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgtsvx.c	2020-03-18 14:52:00.262153670 +0100
@@ -36,7 +36,7 @@
 	    doublecomplex *, integer *);
     extern doublereal dlamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal zlangt_(char *, integer *, doublecomplex *, 
 	    doublecomplex *, doublecomplex *);
     logical notran;
