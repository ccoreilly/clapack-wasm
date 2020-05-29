--- ../../../CLAPACK-3.2.1/SRC/dtptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtptri.c	2020-03-18 14:52:00.246152995 +0100
@@ -32,7 +32,7 @@
     extern /* Subroutine */ int dtpmv_(char *, char *, char *, integer *, 
 	    doublereal *, doublereal *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer jclast;
     logical nounit;
 
