--- ../../../CLAPACK-3.2.1/SRC/zsptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsptrf.c	2020-03-18 14:52:00.266153839 +0100
@@ -49,7 +49,7 @@
     extern /* Subroutine */ int zswap_(integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *);
     doublereal absakk;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal colmax;
     extern integer izamax_(integer *, doublecomplex *, integer *);
     doublereal rowmax;
