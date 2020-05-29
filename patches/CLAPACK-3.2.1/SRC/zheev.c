--- ../../../CLAPACK-3.2.1/SRC/zheev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zheev.c	2020-03-18 14:52:00.262153670 +0100
@@ -49,7 +49,7 @@
     doublereal safmin;
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern doublereal zlanhe_(char *, char *, integer *, doublecomplex *, 
 	    integer *, doublereal *);
