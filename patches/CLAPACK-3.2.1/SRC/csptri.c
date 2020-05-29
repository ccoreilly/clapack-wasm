--- ../../../CLAPACK-3.2.1/SRC/csptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csptri.c	2020-03-18 14:52:00.214151646 +0100
@@ -46,7 +46,7 @@
     extern /* Subroutine */ int cspmv_(char *, integer *, complex *, complex *
 , complex *, integer *, complex *, complex *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer kcnext;
 
 
