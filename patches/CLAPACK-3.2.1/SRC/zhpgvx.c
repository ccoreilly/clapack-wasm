--- ../../../CLAPACK-3.2.1/SRC/zhpgvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhpgvx.c	2020-03-18 14:52:00.262153670 +0100
@@ -36,7 +36,8 @@
 	    doublecomplex *, doublecomplex *, integer *), ztpsv_(char *, char *, char *, integer *, doublecomplex *
 , doublecomplex *, integer *);
     logical alleig, indeig, valeig;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zhpgst_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zhpgst_(
 	    integer *, char *, integer *, doublecomplex *, doublecomplex *, 
 	    integer *), zhpevx_(char *, char *, char *, integer *, 
 	    doublecomplex *, doublereal *, doublereal *, integer *, integer *, 
