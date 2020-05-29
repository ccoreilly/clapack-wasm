--- ../../../CLAPACK-3.2.1/SRC/chbevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chbevx.c	2020-03-18 14:52:00.194150804 +0100
@@ -72,7 +72,7 @@
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
 	    *, integer *, complex *, integer *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real abstll, bignum;
     integer indiwk, indisp;
     extern /* Subroutine */ int cstein_(integer *, real *, real *, integer *, 
