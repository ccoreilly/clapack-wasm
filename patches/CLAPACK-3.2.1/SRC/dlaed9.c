--- ../../../CLAPACK-3.2.1/SRC/dlaed9.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlaed9.c	2020-03-18 14:52:00.230152321 +0100
@@ -38,7 +38,7 @@
 	    doublereal *, doublereal *, doublereal *, doublereal *, 
 	    doublereal *, integer *);
     extern doublereal dlamc3_(doublereal *, doublereal *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
