--- ../../../CLAPACK-3.2.1/SRC/zhegs2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhegs2.c	2020-03-18 14:52:00.262153670 +0100
@@ -41,8 +41,10 @@
 	    char *, char *, char *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *), ztrsv_(char *
 , char *, char *, integer *, doublecomplex *, integer *, 
-	    doublecomplex *, integer *), xerbla_(char 
-	    *, integer *), zdscal_(integer *, doublereal *, 
+	    doublecomplex *, integer *);
+    void xerbla_(char 
+	    *, integer *);
+    int zdscal_(integer *, doublereal *, 
 	    doublecomplex *, integer *), zlacgv_(integer *, doublecomplex *, 
 	    integer *);
 
