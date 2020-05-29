--- ../../../CLAPACK-3.2.1/SRC/sstein.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sstein.c	2020-03-18 14:52:00.258153501 +0100
@@ -48,7 +48,8 @@
 	    real *, integer *);
     integer indrv1, indrv2, indrv3, indrv4, indrv5;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), slagtf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slagtf_(
 	    integer *, real *, real *, real *, real *, real *, real *, 
 	    integer *, integer *);
     integer nrmchk;
