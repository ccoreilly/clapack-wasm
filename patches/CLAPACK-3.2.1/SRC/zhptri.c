--- ../../../CLAPACK-3.2.1/SRC/zhptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhptri.c	2020-03-18 14:52:00.262153670 +0100
@@ -47,7 +47,8 @@
 	    doublecomplex *, doublecomplex *, doublecomplex *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *), zswap_(
 	    integer *, doublecomplex *, integer *, doublecomplex *, integer *)
-	    , xerbla_(char *, integer *);
+	    ;
+    void xerbla_(char *, integer *);
     integer kcnext;
 
 
