--- ../../../CLAPACK-3.2.1/SRC/shgeqz.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/shgeqz.c	2020-03-18 14:52:00.250153164 +0100
@@ -71,7 +71,7 @@
     extern /* Subroutine */ int slarfg_(integer *, real *, real *, integer *, 
 	    real *);
     real safmax;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real eshift;
     logical ilschr;
     integer icompq, ilastm;
