--- ../../../CLAPACK-3.2.1/SRC/dopmtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dopmtr.c	2020-03-18 14:52:00.238152659 +0100
@@ -33,7 +33,7 @@
 	    doublereal *);
     extern logical lsame_(char *, char *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran, forwrd;
 
 
