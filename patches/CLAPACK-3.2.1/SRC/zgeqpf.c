--- ../../../CLAPACK-3.2.1/SRC/zgeqpf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgeqpf.c	2020-03-18 14:52:00.262153670 +0100
@@ -49,7 +49,8 @@
 	    integer *, doublecomplex *, integer *, doublecomplex *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlarfp_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlarfp_(
 	    integer *, doublecomplex *, doublecomplex *, integer *, 
 	    doublecomplex *);
 
