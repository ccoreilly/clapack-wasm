--- ../../../CLAPACK-3.2.1/SRC/zsteqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsteqr.c	2020-03-18 14:52:00.266153839 +0100
@@ -61,7 +61,7 @@
     extern /* Subroutine */ int dlartg_(doublereal *, doublereal *, 
 	    doublereal *, doublereal *, doublereal *);
     doublereal safmax;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     extern /* Subroutine */ int dlasrt_(char *, integer *, doublereal *, 
 	    integer *);
