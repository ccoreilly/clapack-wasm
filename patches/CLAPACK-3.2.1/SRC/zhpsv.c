--- ../../../CLAPACK-3.2.1/SRC/zhpsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhpsv.c	2020-03-18 14:52:00.262153670 +0100
@@ -22,7 +22,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zhptrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zhptrf_(
 	    char *, integer *, doublecomplex *, integer *, integer *),
 	     zhptrs_(char *, integer *, integer *, doublecomplex *, integer *, 
 	     doublecomplex *, integer *, integer *);
