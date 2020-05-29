--- ../../../CLAPACK-3.2.1/SRC/dgsvj1.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgsvj1.c	2020-03-18 14:52:00.226152152 +0100
@@ -63,7 +63,7 @@
 	    doublereal *, doublereal *, integer *, integer *, doublereal *, 
 	    integer *, integer *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer ijblsk, swband, blskip;
     doublereal mxaapq;
     extern /* Subroutine */ int dlassq_(integer *, doublereal *, integer *, 
