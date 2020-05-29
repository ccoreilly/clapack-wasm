--- ../../../CLAPACK-3.2.1/SRC/sgesv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgesv.c	2020-03-18 14:52:00.246152995 +0100
@@ -20,7 +20,8 @@
     integer a_dim1, a_offset, b_dim1, b_offset, i__1;
 
     /* Local variables */
-    extern /* Subroutine */ int xerbla_(char *, integer *), sgetrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  sgetrf_(
 	    integer *, integer *, real *, integer *, integer *, integer *), 
 	    sgetrs_(char *, integer *, integer *, real *, integer *, integer *
 , real *, integer *, integer *);
