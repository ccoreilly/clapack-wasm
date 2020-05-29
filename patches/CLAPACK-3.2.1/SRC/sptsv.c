--- ../../../CLAPACK-3.2.1/SRC/sptsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sptsv.c	2020-03-18 14:52:00.254153333 +0100
@@ -20,7 +20,8 @@
     integer b_dim1, b_offset, i__1;
 
     /* Local variables */
-    extern /* Subroutine */ int xerbla_(char *, integer *), spttrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  spttrf_(
 	    integer *, real *, real *, integer *), spttrs_(integer *, integer 
 	    *, real *, real *, real *, integer *, integer *);
 
