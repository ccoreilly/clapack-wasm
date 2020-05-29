--- ../../../CLAPACK-3.2.1/SRC/cpbsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpbsv.c	2020-03-18 14:52:00.210151478 +0100
@@ -22,7 +22,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), cpbtrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cpbtrf_(
 	    char *, integer *, integer *, complex *, integer *, integer *), cpbtrs_(char *, integer *, integer *, integer *, complex 
 	    *, integer *, complex *, integer *, integer *);
 
