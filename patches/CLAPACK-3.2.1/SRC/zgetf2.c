--- ../../../CLAPACK-3.2.1/SRC/zgetf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgetf2.c	2020-03-18 14:52:00.262153670 +0100
@@ -38,7 +38,7 @@
 	    integer *, doublecomplex *, integer *), zswap_(integer *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *);
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer izamax_(integer *, doublecomplex *, integer *);
 
 
