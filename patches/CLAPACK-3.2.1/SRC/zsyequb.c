--- ../../../CLAPACK-3.2.1/SRC/zsyequb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsyequb.c	2020-03-18 14:52:00.266153839 +0100
@@ -41,7 +41,7 @@
     extern logical lsame_(char *, char *);
     doublereal sumsq;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum, smlnum;
     extern /* Subroutine */ int zlassq_(integer *, doublecomplex *, integer *, 
 	     doublereal *, doublereal *);
