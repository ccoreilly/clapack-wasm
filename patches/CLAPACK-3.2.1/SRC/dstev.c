--- ../../../CLAPACK-3.2.1/SRC/dstev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dstev.c	2020-03-18 14:52:00.242152827 +0100
@@ -40,7 +40,7 @@
     extern doublereal dlamch_(char *);
     integer iscale;
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     extern /* Subroutine */ int dsterf_(integer *, doublereal *, doublereal *, 
