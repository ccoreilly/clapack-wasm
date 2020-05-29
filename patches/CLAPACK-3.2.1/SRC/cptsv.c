--- ../../../CLAPACK-3.2.1/SRC/cptsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cptsv.c	2020-03-18 14:52:00.214151646 +0100
@@ -20,7 +20,8 @@
     integer b_dim1, b_offset, i__1;
 
     /* Local variables */
-    extern /* Subroutine */ int xerbla_(char *, integer *), cpttrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cpttrf_(
 	    integer *, real *, complex *, integer *), cpttrs_(char *, integer 
 	    *, integer *, real *, complex *, complex *, integer *, integer *);
 
