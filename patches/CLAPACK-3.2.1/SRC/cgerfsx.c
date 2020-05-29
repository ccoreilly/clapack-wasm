--- ../../../CLAPACK-3.2.1/SRC/cgerfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgerfsx.c	2020-03-18 14:52:00.190150635 +0100
@@ -62,7 +62,7 @@
     extern /* Subroutine */ int cgecon_(char *, integer *, complex *, integer 
 	    *, real *, real *, complex *, real *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical colequ, notran, rowequ;
     extern integer ilaprec_(char *);
     integer ithresh, n_norms__;
