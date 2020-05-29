--- ../../../CLAPACK-3.2.1/SRC/zhptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhptrf.c	2020-03-18 14:52:00.262153670 +0100
@@ -54,7 +54,8 @@
 	    doublecomplex *, integer *);
     extern doublereal dlapy2_(doublereal *, doublereal *);
     doublereal absakk;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zdscal_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zdscal_(
 	    integer *, doublereal *, doublecomplex *, integer *);
     doublereal colmax;
     extern integer izamax_(integer *, doublecomplex *, integer *);
