--- ../../../CLAPACK-3.2.1/SRC/zgesv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgesv.c	2020-03-18 14:52:00.262153670 +0100
@@ -21,7 +21,8 @@
     integer a_dim1, a_offset, b_dim1, b_offset, i__1;
 
     /* Local variables */
-    extern /* Subroutine */ int xerbla_(char *, integer *), zgetrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zgetrf_(
 	    integer *, integer *, doublecomplex *, integer *, integer *, 
 	    integer *), zgetrs_(char *, integer *, integer *, doublecomplex *, 
 	     integer *, integer *, doublecomplex *, integer *, integer *);
