--- ../../../CLAPACK-3.2.1/SRC/csptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csptrf.c	2020-03-18 14:52:00.214151646 +0100
@@ -50,7 +50,7 @@
     logical upper;
     real absakk;
     extern integer icamax_(integer *, complex *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real colmax, rowmax;
 
 
