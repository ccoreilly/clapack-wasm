--- ../../../CLAPACK-3.2.1/SRC/dpptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpptri.c	2020-03-18 14:52:00.238152659 +0100
@@ -37,7 +37,8 @@
     extern /* Subroutine */ int dtpmv_(char *, char *, char *, integer *, 
 	    doublereal *, doublereal *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dtptri_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dtptri_(
 	    char *, char *, integer *, doublereal *, integer *);
 
 
