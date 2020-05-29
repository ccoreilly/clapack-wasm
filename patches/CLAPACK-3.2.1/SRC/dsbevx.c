--- ../../../CLAPACK-3.2.1/SRC/dsbevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsbevx.c	2020-03-18 14:52:00.238152659 +0100
@@ -68,7 +68,7 @@
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal abstll, bignum;
     extern /* Subroutine */ int dsbtrd_(char *, char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, doublereal *, doublereal *, 
