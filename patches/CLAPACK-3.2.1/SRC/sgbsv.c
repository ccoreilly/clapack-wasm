--- ../../../CLAPACK-3.2.1/SRC/sgbsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbsv.c	2020-03-18 14:52:00.246152995 +0100
@@ -21,7 +21,8 @@
     integer ab_dim1, ab_offset, b_dim1, b_offset, i__1;
 
     /* Local variables */
-    extern /* Subroutine */ int xerbla_(char *, integer *), sgbtrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  sgbtrf_(
 	    integer *, integer *, integer *, integer *, real *, integer *, 
 	    integer *, integer *), sgbtrs_(char *, integer *, integer *, 
 	    integer *, integer *, real *, integer *, integer *, real *, 
