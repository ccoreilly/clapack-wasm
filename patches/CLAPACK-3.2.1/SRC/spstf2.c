--- ../../../CLAPACK-3.2.1/SRC/spstf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spstf2.c	2020-03-18 14:52:00.254153333 +0100
@@ -44,7 +44,7 @@
 	    integer *);
     real sstop;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern logical sisnan_(real *);
     extern integer smaxloc_(real *, integer *);
 
