--- ../../../CLAPACK-3.2.1/SRC/zporfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zporfsx.c	2020-03-18 14:52:00.266153839 +0100
@@ -60,7 +60,7 @@
 	    zla_porcond_x__(char *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, doublereal *, ftnlen), dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal zlanhe_(char *, char *, integer *, doublecomplex *, 
 	    integer *, doublereal *);
     extern /* Subroutine */ int zpocon_(char *, integer *, doublecomplex *, 
