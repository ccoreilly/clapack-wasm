--- ../../../CLAPACK-3.2.1/SRC/zlatrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlatrs.c	2020-03-18 14:52:00.266153839 +0100
@@ -59,7 +59,8 @@
 	    doublereal *, doublereal *);
     extern doublereal dlamch_(char *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zdscal_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zdscal_(
 	    integer *, doublereal *, doublecomplex *, integer *);
     doublereal bignum;
     extern integer izamax_(integer *, doublecomplex *, integer *);
