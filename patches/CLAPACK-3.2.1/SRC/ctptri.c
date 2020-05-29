--- ../../../CLAPACK-3.2.1/SRC/ctptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctptri.c	2020-03-18 14:52:00.218151815 +0100
@@ -37,7 +37,7 @@
     extern /* Subroutine */ int ctpmv_(char *, char *, char *, integer *, 
 	    complex *, complex *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer jclast;
     logical nounit;
 
