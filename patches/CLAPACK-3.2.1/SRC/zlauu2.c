--- ../../../CLAPACK-3.2.1/SRC/zlauu2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlauu2.c	2020-03-18 14:52:00.266153839 +0100
@@ -36,7 +36,8 @@
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *, doublecomplex *, doublecomplex *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zdscal_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zdscal_(
 	    integer *, doublereal *, doublecomplex *, integer *), zlacgv_(
 	    integer *, doublecomplex *, integer *);
 
