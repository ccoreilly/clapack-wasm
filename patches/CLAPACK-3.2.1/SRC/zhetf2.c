--- ../../../CLAPACK-3.2.1/SRC/zhetf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhetf2.c	2020-03-18 14:52:00.262153670 +0100
@@ -53,7 +53,8 @@
     extern doublereal dlapy2_(doublereal *, doublereal *);
     doublereal absakk;
     extern logical disnan_(doublereal *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zdscal_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zdscal_(
 	    integer *, doublereal *, doublecomplex *, integer *);
     doublereal colmax;
     extern integer izamax_(integer *, doublecomplex *, integer *);
