--- ../../../CLAPACK-3.2.1/SRC/ztrevc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztrevc.c	2020-03-18 14:52:00.270154007 +0100
@@ -50,7 +50,8 @@
     extern /* Subroutine */ int zcopy_(integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *), dlabad_(doublereal *, doublereal *);
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zdscal_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zdscal_(
 	    integer *, doublereal *, doublecomplex *, integer *);
     extern integer izamax_(integer *, doublecomplex *, integer *);
     logical rightv;
