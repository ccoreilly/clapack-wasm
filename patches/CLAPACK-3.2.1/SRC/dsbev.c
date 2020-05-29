--- ../../../CLAPACK-3.2.1/SRC/dsbev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsbev.c	2020-03-18 14:52:00.238152659 +0100
@@ -49,7 +49,7 @@
     extern doublereal dlansb_(char *, char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern /* Subroutine */ int dsbtrd_(char *, char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, doublereal *, doublereal *, 
