--- ../../../CLAPACK-3.2.1/SRC/csytf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csytf2.c	2020-03-18 14:52:00.214151646 +0100
@@ -48,7 +48,7 @@
     logical upper;
     real absakk;
     extern integer icamax_(integer *, complex *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real colmax;
     extern logical sisnan_(real *);
     real rowmax;
