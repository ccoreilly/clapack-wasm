--- ../../../CLAPACK-3.2.1/SRC/zheevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zheevx.c	2020-03-18 14:52:00.262153670 +0100
@@ -59,7 +59,8 @@
     doublereal safmin;
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zdscal_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zdscal_(
 	    integer *, doublereal *, doublecomplex *, integer *);
     doublereal abstll, bignum;
     extern doublereal zlanhe_(char *, char *, integer *, doublecomplex *, 
