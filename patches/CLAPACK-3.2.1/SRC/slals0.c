--- ../../../CLAPACK-3.2.1/SRC/slals0.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slals0.c	2020-03-18 14:52:00.250153164 +0100
@@ -48,7 +48,7 @@
 	    real *, integer *, real *, real *, integer *), scopy_(
 	    integer *, real *, integer *, real *, integer *);
     extern doublereal slamc3_(real *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real dsigjp;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, real *, integer *, integer *), slacpy_(char *, integer *, integer *, real *, integer *, 
