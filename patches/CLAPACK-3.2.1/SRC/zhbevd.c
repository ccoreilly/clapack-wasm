--- ../../../CLAPACK-3.2.1/SRC/zhbevd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhbevd.c	2020-03-18 14:52:00.262153670 +0100
@@ -58,7 +58,7 @@
     doublereal safmin;
     extern doublereal zlanhb_(char *, char *, integer *, integer *, 
 	    doublecomplex *, integer *, doublereal *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern /* Subroutine */ int dsterf_(integer *, doublereal *, doublereal *, 
 	     integer *), zlascl_(char *, integer *, integer *, doublereal *, 
