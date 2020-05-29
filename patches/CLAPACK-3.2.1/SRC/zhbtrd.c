--- ../../../CLAPACK-3.2.1/SRC/zhbtrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhbtrd.c	2020-03-18 14:52:00.262153670 +0100
@@ -52,7 +52,8 @@
 	    doublecomplex *, doublecomplex *, integer *, doublereal *, 
 	    doublecomplex *, integer *);
     integer iqaend;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlacgv_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlacgv_(
 	    integer *, doublecomplex *, integer *), zlaset_(char *, integer *, 
 	     integer *, doublecomplex *, doublecomplex *, doublecomplex *, 
 	    integer *), zlartg_(doublecomplex *, doublecomplex *, 
