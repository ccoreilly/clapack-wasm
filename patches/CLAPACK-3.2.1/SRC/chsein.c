--- ../../../CLAPACK-3.2.1/SRC/chsein.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chsein.c	2020-03-18 14:52:00.198150972 +0100
@@ -47,7 +47,7 @@
 	    real *, real *, real *, integer *);
     extern doublereal slamch_(char *), clanhs_(char *, integer *, 
 	    complex *, integer *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noinit;
     integer ldwork;
     logical rightv, fromqr;
