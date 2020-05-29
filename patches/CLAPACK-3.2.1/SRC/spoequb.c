--- ../../../CLAPACK-3.2.1/SRC/spoequb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spoequb.c	2020-03-18 14:52:00.254153333 +0100
@@ -27,7 +27,7 @@
     integer i__;
     real tmp, base, smin;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*     -- LAPACK routine (version 3.2)                                 -- */
