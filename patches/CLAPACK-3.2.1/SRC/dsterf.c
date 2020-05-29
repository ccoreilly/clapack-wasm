--- ../../../CLAPACK-3.2.1/SRC/dsterf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsterf.c	2020-03-18 14:52:00.242152827 +0100
@@ -47,7 +47,7 @@
 	    doublereal *, doublereal *, integer *, integer *, doublereal *, 
 	    integer *, integer *);
     doublereal oldgam, safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal safmax;
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     extern /* Subroutine */ int dlasrt_(char *, integer *, doublereal *, 
