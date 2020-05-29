--- ../../../CLAPACK-3.2.1/SRC/zppsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zppsv.c	2020-03-18 14:52:00.266153839 +0100
@@ -21,7 +21,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zpptrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zpptrf_(
 	    char *, integer *, doublecomplex *, integer *), zpptrs_(
 	    char *, integer *, integer *, doublecomplex *, doublecomplex *, 
 	    integer *, integer *);
