--- ../../../CLAPACK-3.2.1/SRC/zhbgvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhbgvd.c	2020-03-18 14:52:00.262153670 +0100
@@ -42,7 +42,8 @@
     integer llrwk;
     logical wantz;
     integer indwk2;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dsterf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dsterf_(
 	    integer *, doublereal *, doublereal *, integer *), zstedc_(char *, 
 	     integer *, doublereal *, doublereal *, doublecomplex *, integer *
 , doublecomplex *, integer *, doublereal *, integer *, integer *, 
