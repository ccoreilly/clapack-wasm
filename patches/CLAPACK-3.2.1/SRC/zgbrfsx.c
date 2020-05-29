--- ../../../CLAPACK-3.2.1/SRC/zgbrfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgbrfsx.c	2020-03-18 14:52:00.258153501 +0100
@@ -63,7 +63,7 @@
 	    *, doublecomplex *, integer *, doublecomplex *, integer *, 
 	    integer *, doublecomplex *, integer *, doublecomplex *, 
 	    doublereal *, ftnlen), dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal zlangb_(char *, integer *, integer *, integer *, 
 	    doublecomplex *, integer *, doublereal *);
     extern /* Subroutine */ int zgbcon_(char *, integer *, integer *, integer 
