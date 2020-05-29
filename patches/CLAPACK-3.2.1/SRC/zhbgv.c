--- ../../../CLAPACK-3.2.1/SRC/zhbgv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhbgv.c	2020-03-18 14:52:00.262153670 +0100
@@ -27,7 +27,8 @@
     extern logical lsame_(char *, char *);
     integer iinfo;
     logical upper, wantz;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dsterf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dsterf_(
 	    integer *, doublereal *, doublereal *, integer *), zhbtrd_(char *, 
 	     char *, integer *, integer *, doublecomplex *, integer *, 
 	    doublereal *, doublereal *, doublecomplex *, integer *, 
