--- ../../../CLAPACK-3.2.1/SRC/dtgevc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtgevc.c	2020-03-18 14:52:00.242152827 +0100
@@ -73,7 +73,7 @@
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *);
     doublereal xscale, bignum;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical ilcomp, ilcplx;
     integer ihwmny;
 
