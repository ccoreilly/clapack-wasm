--- ../../../CLAPACK-3.2.1/SRC/slaed9.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slaed9.c	2020-03-18 14:52:00.250153164 +0100
@@ -36,7 +36,7 @@
 	    integer *), slaed4_(integer *, integer *, real *, real *, real *, 
 	    real *, real *, integer *);
     extern doublereal slamc3_(real *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
