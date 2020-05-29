--- ../../../CLAPACK-3.2.1/SRC/spbsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spbsv.c	2020-03-18 14:52:00.254153333 +0100
@@ -21,7 +21,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), spbtrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  spbtrf_(
 	    char *, integer *, integer *, real *, integer *, integer *), spbtrs_(char *, integer *, integer *, integer *, real *, 
 	    integer *, real *, integer *, integer *);
 
