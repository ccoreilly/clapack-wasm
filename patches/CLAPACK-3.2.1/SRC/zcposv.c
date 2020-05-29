--- ../../../CLAPACK-3.2.1/SRC/zcposv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zcposv.c	2020-03-18 14:52:00.258153501 +0100
@@ -49,7 +49,7 @@
 	    doublecomplex *, integer *, integer *), zlat2c_(char *, integer *, 
 	     doublecomplex *, integer *, complex *, integer *, integer *);
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal zlanhe_(char *, char *, integer *, doublecomplex *, 
 	    integer *, doublereal *);
     extern integer izamax_(integer *, doublecomplex *, integer *);
