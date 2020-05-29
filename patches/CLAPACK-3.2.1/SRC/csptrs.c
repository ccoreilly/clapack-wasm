--- ../../../CLAPACK-3.2.1/SRC/csptrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csptrs.c	2020-03-18 14:52:00.214151646 +0100
@@ -43,7 +43,7 @@
 	    complex *, integer *, complex *, integer *, complex *, integer *),
 	     cswap_(integer *, complex *, integer *, complex *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
