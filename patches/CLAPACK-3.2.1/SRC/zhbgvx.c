--- ../../../CLAPACK-3.2.1/SRC/zhbgvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhbgvx.c	2020-03-18 14:52:00.262153670 +0100
@@ -52,7 +52,7 @@
     logical alleig, indeig;
     integer indibl;
     logical valeig;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer indiwk, indisp;
     extern /* Subroutine */ int dsterf_(integer *, doublereal *, doublereal *, 
 	     integer *), dstebz_(char *, char *, integer *, doublereal *, 
