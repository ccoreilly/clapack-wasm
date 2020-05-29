--- ../../../CLAPACK-3.2.1/SRC/dsyequb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsyequb.c	2020-03-18 14:52:00.242152827 +0100
@@ -39,7 +39,7 @@
     extern logical lsame_(char *, char *);
     doublereal sumsq;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern /* Subroutine */ int dlassq_(integer *, doublereal *, integer *, 
 	    doublereal *, doublereal *);
