--- ../../../CLAPACK-3.2.1/SRC/dpbsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpbsv.c	2020-03-18 14:52:00.238152659 +0100
@@ -22,7 +22,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), dpbtrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dpbtrf_(
 	    char *, integer *, integer *, doublereal *, integer *, integer *), dpbtrs_(char *, integer *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *, integer *);
 
