--- ../../../CLAPACK-3.2.1/SRC/zpoequb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zpoequb.c	2020-03-18 14:52:00.266153839 +0100
@@ -27,7 +27,7 @@
     integer i__;
     doublereal tmp, base, smin;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*     -- LAPACK routine (version 3.2)                                 -- */
