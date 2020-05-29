--- ../../../CLAPACK-3.2.1/SRC/dspevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dspevx.c	2020-03-18 14:52:00.242152827 +0100
@@ -54,7 +54,7 @@
     integer iscale, indibl;
     logical valeig;
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal abstll, bignum;
     extern doublereal dlansp_(char *, char *, integer *, doublereal *, 
 	    doublereal *);
