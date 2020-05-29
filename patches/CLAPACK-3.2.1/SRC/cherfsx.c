--- ../../../CLAPACK-3.2.1/SRC/cherfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cherfsx.c	2020-03-18 14:52:00.194150804 +0100
@@ -62,7 +62,7 @@
     extern /* Subroutine */ int checon_(char *, integer *, complex *, integer 
 	    *, integer *, real *, real *, complex *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaprec_(char *);
     integer ithresh, n_norms__;
     real rthresh;
