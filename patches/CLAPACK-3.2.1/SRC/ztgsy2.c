--- ../../../CLAPACK-3.2.1/SRC/ztgsy2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztgsy2.c	2020-03-18 14:52:00.270154007 +0100
@@ -47,7 +47,8 @@
 	     integer *, doublereal *), zgetc2_(integer *, doublecomplex *, 
 	    integer *, integer *, integer *, integer *);
     doublereal scaloc;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlatdf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlatdf_(
 	    integer *, integer *, doublecomplex *, integer *, doublecomplex *, 
 	     doublereal *, doublereal *, integer *, integer *);
     logical notran;
