--- ../../../CLAPACK-3.2.1/SRC/zhpgst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhpgst.c	2020-03-18 14:52:00.262153670 +0100
@@ -47,8 +47,10 @@
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *), ztpmv_(char *, char *, char *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *), ztpsv_(char *, char *, char *, integer *, doublecomplex *
-, doublecomplex *, integer *), xerbla_(
-	    char *, integer *), zdscal_(integer *, doublereal *, 
+, doublecomplex *, integer *);
+    void xerbla_(
+	    char *, integer *);
+    int zdscal_(integer *, doublereal *, 
 	    doublecomplex *, integer *);
 
 
