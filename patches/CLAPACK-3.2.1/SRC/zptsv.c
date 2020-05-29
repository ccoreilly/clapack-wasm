--- ../../../CLAPACK-3.2.1/SRC/zptsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zptsv.c	2020-03-18 14:52:00.266153839 +0100
@@ -20,7 +20,8 @@
     integer b_dim1, b_offset, i__1;
 
     /* Local variables */
-    extern /* Subroutine */ int xerbla_(char *, integer *), zpttrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zpttrf_(
 	    integer *, doublereal *, doublecomplex *, integer *), zpttrs_(
 	    char *, integer *, integer *, doublereal *, doublecomplex *, 
 	    doublecomplex *, integer *, integer *);
