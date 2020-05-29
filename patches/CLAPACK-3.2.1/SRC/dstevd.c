--- ../../../CLAPACK-3.2.1/SRC/dstevd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dstevd.c	2020-03-18 14:52:00.242152827 +0100
@@ -42,7 +42,7 @@
 	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
 	    integer *, integer *, integer *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     extern /* Subroutine */ int dsterf_(integer *, doublereal *, doublereal *, 
