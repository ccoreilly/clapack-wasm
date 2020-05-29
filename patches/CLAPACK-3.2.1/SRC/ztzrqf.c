--- ../../../CLAPACK-3.2.1/SRC/ztzrqf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztzrqf.c	2020-03-18 14:52:00.270154007 +0100
@@ -38,7 +38,9 @@
 	    integer *, doublecomplex *, doublecomplex *, integer *), 
 	    zcopy_(integer *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *), zaxpy_(integer *, doublecomplex *, doublecomplex *, 
-	    integer *, doublecomplex *, integer *), xerbla_(char *, integer *), zlacgv_(integer *, doublecomplex *, integer *), zlarfp_(
+	    integer *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
+    int zlacgv_(integer *, doublecomplex *, integer *), zlarfp_(
 	    integer *, doublecomplex *, doublecomplex *, integer *, 
 	    doublecomplex *);
 
