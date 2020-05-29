--- ../../../CLAPACK-3.2.1/SRC/dptsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dptsv.c	2020-03-18 14:52:00.238152659 +0100
@@ -20,7 +20,8 @@
     integer b_dim1, b_offset, i__1;
 
     /* Local variables */
-    extern /* Subroutine */ int xerbla_(char *, integer *), dpttrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dpttrf_(
 	    integer *, doublereal *, doublereal *, integer *), dpttrs_(
 	    integer *, integer *, doublereal *, doublereal *, doublereal *, 
 	    integer *, integer *);
