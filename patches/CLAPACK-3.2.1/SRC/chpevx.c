--- ../../../CLAPACK-3.2.1/SRC/chpevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chpevx.c	2020-03-18 14:52:00.198150972 +0100
@@ -54,7 +54,7 @@
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
 	    *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real abstll, bignum;
     integer indiwk, indisp, indtau;
     extern /* Subroutine */ int chptrd_(char *, integer *, complex *, real *, 
