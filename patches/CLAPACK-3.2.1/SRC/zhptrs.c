--- ../../../CLAPACK-3.2.1/SRC/zhptrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhptrs.c	2020-03-18 14:52:00.262153670 +0100
@@ -45,7 +45,9 @@
     extern /* Subroutine */ int zgeru_(integer *, integer *, doublecomplex *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *), zswap_(integer *, doublecomplex *, 
-	    integer *, doublecomplex *, integer *), xerbla_(char *, integer *), zdscal_(integer *, doublereal *, doublecomplex *, 
+	    integer *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
+    int zdscal_(integer *, doublereal *, doublecomplex *, 
 	    integer *), zlacgv_(integer *, doublecomplex *, integer *);
 
 
