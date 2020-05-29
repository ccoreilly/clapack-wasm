--- ../../../CLAPACK-3.2.1/SRC/dposv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dposv.c	2020-03-18 14:52:00.238152659 +0100
@@ -21,7 +21,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), dpotrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dpotrf_(
 	    char *, integer *, doublereal *, integer *, integer *), 
 	    dpotrs_(char *, integer *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *, integer *);
