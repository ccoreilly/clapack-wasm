--- ../../../CLAPACK-3.2.1/SRC/dsptrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsptrs.c	2020-03-18 14:52:00.242152827 +0100
@@ -45,7 +45,7 @@
 	    doublereal *, doublereal *, integer *), dswap_(integer *, 
 	    doublereal *, integer *, doublereal *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
