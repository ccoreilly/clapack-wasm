--- ../../../CLAPACK-3.2.1/SRC/spstrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spstrf.c	2020-03-18 14:52:00.254153333 +0100
@@ -48,7 +48,7 @@
 	    real *, real *, integer *, real *, real *, integer *), spstf2_(char *, integer *, real *, integer *, integer *, 
 	    integer *, real *, real *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern logical sisnan_(real *);
