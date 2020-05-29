--- ../../../CLAPACK-3.2.1/SRC/zhegvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhegvd.c	2020-03-18 14:52:00.262153670 +0100
@@ -40,8 +40,10 @@
 	     doublecomplex *, integer *), 
 	    ztrsm_(char *, char *, char *, char *, integer *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
-	    integer *), xerbla_(char *, 
-	    integer *), zheevd_(char *, char *, integer *, 
+	    integer *);
+    void xerbla_(char *, 
+	    integer *);
+    int zheevd_(char *, char *, integer *, 
 	    doublecomplex *, integer *, doublereal *, doublecomplex *, 
 	    integer *, doublereal *, integer *, integer *, integer *, integer 
 	    *);
