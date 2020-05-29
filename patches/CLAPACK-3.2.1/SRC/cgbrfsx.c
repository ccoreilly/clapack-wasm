--- ../../../CLAPACK-3.2.1/SRC/cgbrfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgbrfsx.c	2020-03-18 14:52:00.182150297 +0100
@@ -64,7 +64,7 @@
 	    *, complex *, integer *, integer *, real *, real *, complex *, 
 	    real *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical colequ, notran, rowequ;
     extern integer ilaprec_(char *);
     integer ithresh, n_norms__;
