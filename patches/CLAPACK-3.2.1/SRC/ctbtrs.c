--- ../../../CLAPACK-3.2.1/SRC/ctbtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctbtrs.c	2020-03-18 14:52:00.214151646 +0100
@@ -30,7 +30,7 @@
     extern /* Subroutine */ int ctbsv_(char *, char *, char *, integer *, 
 	    integer *, complex *, integer *, complex *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical nounit;
 
 
