--- ../../../CLAPACK-3.2.1/SRC/dggesx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dggesx.c	2020-03-18 14:52:00.226152152 +0100
@@ -71,7 +71,7 @@
     extern /* Subroutine */ int dlaset_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, doublereal *, integer *);
     doublereal safmax;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern /* Subroutine */ int dhgeqz_(char *, char *, char *, integer *, 
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
