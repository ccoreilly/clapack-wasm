--- ../../../CLAPACK-3.2.1/SRC/zgetri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgetri.c	2020-03-18 14:52:00.262153670 +0100
@@ -38,8 +38,8 @@
 	    zswap_(integer *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *), ztrsm_(char *, char *, char *, char *, integer *, 
 	    integer *, doublecomplex *, doublecomplex *, integer *, 
-	    doublecomplex *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublecomplex *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
