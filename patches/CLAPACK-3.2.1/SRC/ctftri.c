--- ../../../CLAPACK-3.2.1/SRC/ctftri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctftri.c	2020-03-18 14:52:00.214151646 +0100
@@ -32,7 +32,7 @@
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
 	    integer *);
     logical lower;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical nisodd;
     extern /* Subroutine */ int ctrtri_(char *, char *, integer *, complex *, 
 	    integer *, integer *);
