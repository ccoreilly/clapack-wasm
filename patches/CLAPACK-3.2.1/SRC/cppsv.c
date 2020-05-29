--- ../../../CLAPACK-3.2.1/SRC/cppsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cppsv.c	2020-03-18 14:52:00.214151646 +0100
@@ -21,7 +21,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), cpptrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cpptrf_(
 	    char *, integer *, complex *, integer *), cpptrs_(char *, 
 	    integer *, integer *, complex *, complex *, integer *, integer *);
 
