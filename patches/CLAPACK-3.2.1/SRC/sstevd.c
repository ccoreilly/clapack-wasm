--- ../../../CLAPACK-3.2.1/SRC/sstevd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sstevd.c	2020-03-18 14:52:00.258153501 +0100
@@ -37,7 +37,7 @@
     integer iscale;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     extern /* Subroutine */ int sstedc_(char *, integer *, real *, real *, 
 	    real *, integer *, real *, integer *, integer *, integer *, 
