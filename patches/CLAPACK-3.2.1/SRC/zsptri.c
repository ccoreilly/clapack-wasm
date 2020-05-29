--- ../../../CLAPACK-3.2.1/SRC/zsptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsptri.c	2020-03-18 14:52:00.266153839 +0100
@@ -45,7 +45,8 @@
     extern /* Subroutine */ int zswap_(integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *), zspmv_(char *, integer *, 
 	    doublecomplex *, doublecomplex *, doublecomplex *, integer *, 
-	    doublecomplex *, doublecomplex *, integer *), xerbla_(
+	    doublecomplex *, doublecomplex *, integer *);
+    void xerbla_(
 	    char *, integer *);
     integer kcnext;
 
