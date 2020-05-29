--- ../../../CLAPACK-3.2.1/SRC/csytri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csytri.c	2020-03-18 14:52:00.214151646 +0100
@@ -46,7 +46,8 @@
     logical upper;
     extern /* Subroutine */ int csymv_(char *, integer *, complex *, complex *
 , integer *, complex *, integer *, complex *, complex *, integer *
-), xerbla_(char *, integer *);
+);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
