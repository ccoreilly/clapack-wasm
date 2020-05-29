--- ../../../CLAPACK-3.2.1/SRC/strevc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/strevc.c	2020-03-18 14:52:00.258153501 +0100
@@ -65,7 +65,7 @@
 	    real *, real *, real *, integer *, real *, real *, integer *), 
 	    slabad_(real *, real *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     extern integer isamax_(integer *, real *, integer *);
     logical rightv;
