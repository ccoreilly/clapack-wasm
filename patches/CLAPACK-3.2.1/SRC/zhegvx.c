--- ../../../CLAPACK-3.2.1/SRC/zhegvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhegvx.c	2020-03-18 14:52:00.262153670 +0100
@@ -41,7 +41,7 @@
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *);
     logical alleig, indeig, valeig;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zhegst_(integer *, char *, integer *, 
