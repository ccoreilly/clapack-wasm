--- ../../../CLAPACK-3.2.1/SRC/dhsein.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dhsein.c	2020-03-18 14:52:00.226152152 +0100
@@ -47,7 +47,7 @@
 , doublereal *, doublereal *, integer *);
     extern doublereal dlanhs_(char *, integer *, doublereal *, integer *, 
 	    doublereal *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     logical noinit;
     integer ldwork;
