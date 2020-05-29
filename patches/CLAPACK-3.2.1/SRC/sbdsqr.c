--- ../../../CLAPACK-3.2.1/SRC/sbdsqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sbdsqr.c	2020-03-18 14:52:00.246152995 +0100
@@ -67,7 +67,7 @@
 	     slasv2_(real *, real *, real *, real *, real *, real *, real *, 
 	    real *, real *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real sminoa;
     extern /* Subroutine */ int slartg_(real *, real *, real *, real *, real *
 );
