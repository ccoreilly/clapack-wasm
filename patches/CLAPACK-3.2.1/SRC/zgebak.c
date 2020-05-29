--- ../../../CLAPACK-3.2.1/SRC/zgebak.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgebak.c	2020-03-18 14:52:00.258153501 +0100
@@ -27,8 +27,9 @@
     extern logical lsame_(char *, char *);
     logical leftv;
     extern /* Subroutine */ int zswap_(integer *, doublecomplex *, integer *, 
-	    doublecomplex *, integer *), xerbla_(char *, integer *), 
-	    zdscal_(integer *, doublereal *, doublecomplex *, integer *);
+	    doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
+    int zdscal_(integer *, doublereal *, doublecomplex *, integer *);
     logical rightv;
 
 
