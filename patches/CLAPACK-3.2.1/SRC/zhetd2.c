--- ../../../CLAPACK-3.2.1/SRC/zhetd2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhetd2.c	2020-03-18 14:52:00.262153670 +0100
@@ -42,8 +42,10 @@
 	    doublecomplex *, doublecomplex *, integer *);
     logical upper;
     extern /* Subroutine */ int zaxpy_(integer *, doublecomplex *, 
-	    doublecomplex *, integer *, doublecomplex *, integer *), xerbla_(
-	    char *, integer *), zlarfg_(integer *, doublecomplex *, 
+	    doublecomplex *, integer *, doublecomplex *, integer *);
+    void xerbla_(
+	    char *, integer *);
+    int zlarfg_(integer *, doublecomplex *, 
 	    doublecomplex *, integer *, doublecomplex *);
 
 
