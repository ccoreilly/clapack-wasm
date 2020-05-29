--- ../../../CLAPACK-3.2.1/SRC/dspsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dspsv.c	2020-03-18 14:52:00.242152827 +0100
@@ -21,7 +21,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), dsptrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dsptrf_(
 	    char *, integer *, doublereal *, integer *, integer *), 
 	    dsptrs_(char *, integer *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *, integer *);
