--- ../../../CLAPACK-3.2.1/SRC/ssbevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssbevx.c	2020-03-18 14:52:00.254153333 +0100
@@ -58,7 +58,7 @@
     logical valeig;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real abstll, bignum;
     extern doublereal slansb_(char *, char *, integer *, integer *, real *, 
 	    integer *, real *);
