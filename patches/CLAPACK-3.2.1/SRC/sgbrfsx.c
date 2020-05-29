--- ../../../CLAPACK-3.2.1/SRC/sgbrfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbrfsx.c	2020-03-18 14:52:00.246152995 +0100
@@ -60,7 +60,8 @@
 	     integer *, real *), slamch_(char *);
     extern /* Subroutine */ int sgbcon_(char *, integer *, integer *, integer 
 	    *, real *, integer *, integer *, real *, real *, real *, integer *
-, integer *), xerbla_(char *, integer *);
+, integer *);
+    void xerbla_(char *, integer *);
     logical colequ, notran, rowequ;
     extern integer ilaprec_(char *);
     integer ithresh, n_norms__;
