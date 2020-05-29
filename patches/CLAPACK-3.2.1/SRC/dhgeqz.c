--- ../../../CLAPACK-3.2.1/SRC/dhgeqz.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dhgeqz.c	2020-03-18 14:52:00.226152152 +0100
@@ -82,7 +82,7 @@
     extern /* Subroutine */ int dlartg_(doublereal *, doublereal *, 
 	    doublereal *, doublereal *, doublereal *);
     doublereal safmax;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal eshift;
     logical ilschr;
     integer icompq, ilastm, ischur;
