--- ../../../CLAPACK-3.2.1/SRC/dsteqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsteqr.c	2020-03-18 14:52:00.242152827 +0100
@@ -62,7 +62,7 @@
     extern /* Subroutine */ int dlartg_(doublereal *, doublereal *, 
 	    doublereal *, doublereal *, doublereal *);
     doublereal safmax;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     extern /* Subroutine */ int dlasrt_(char *, integer *, doublereal *, 
 	    integer *);
