--- ../../../CLAPACK-3.2.1/SRC/dspevd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dspevd.c	2020-03-18 14:52:00.242152827 +0100
@@ -44,7 +44,7 @@
 	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
 	    integer *, integer *, integer *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern doublereal dlansp_(char *, char *, integer *, doublereal *, 
 	    doublereal *);
