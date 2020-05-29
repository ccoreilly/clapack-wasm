--- ../../../CLAPACK-3.2.1/SRC/ssytf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssytf2.c	2020-03-18 14:52:00.258153501 +0100
@@ -43,7 +43,7 @@
     extern /* Subroutine */ int sswap_(integer *, real *, integer *, real *, 
 	    integer *);
     real absakk;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     real colmax;
     extern logical sisnan_(real *);
