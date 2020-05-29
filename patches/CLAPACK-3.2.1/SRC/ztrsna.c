--- ../../../CLAPACK-3.2.1/SRC/ztrsna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztrsna.c	2020-03-18 14:52:00.270154007 +0100
@@ -50,7 +50,7 @@
 	    doublereal *, doublereal *);
     extern doublereal dznrm2_(integer *, doublecomplex *, integer *), dlamch_(
 	    char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     logical wantbh;
     extern integer izamax_(integer *, doublecomplex *, integer *);
