--- ../../../CLAPACK-3.2.1/SRC/dlagtf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlagtf.c	2020-03-18 14:52:00.230152321 +0100
@@ -25,7 +25,7 @@
     integer k;
     doublereal tl, eps, piv1, piv2, temp, mult, scale1, scale2;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
