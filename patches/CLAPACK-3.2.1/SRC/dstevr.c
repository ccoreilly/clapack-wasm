--- ../../../CLAPACK-3.2.1/SRC/dstevr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dstevr.c	2020-03-18 14:52:00.242152827 +0100
@@ -59,7 +59,7 @@
     doublereal safmin;
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     integer indisp;
