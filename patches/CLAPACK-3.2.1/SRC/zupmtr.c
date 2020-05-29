--- ../../../CLAPACK-3.2.1/SRC/zupmtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zupmtr.c	2020-03-18 14:52:00.270154007 +0100
@@ -38,7 +38,7 @@
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
 	    integer *, doublecomplex *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran, forwrd;
 
 
