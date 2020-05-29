--- ../../../CLAPACK-3.2.1/SRC/dlauu2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlauu2.c	2020-03-18 14:52:00.238152659 +0100
@@ -36,7 +36,7 @@
 	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
 	    doublereal *, doublereal *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK auxiliary routine (version 3.2) -- */
