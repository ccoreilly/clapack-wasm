--- ../../../CLAPACK-3.2.1/SRC/zhpgv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhpgv.c	2020-03-18 14:52:00.262153670 +0100
@@ -36,8 +36,10 @@
     logical wantz;
     extern /* Subroutine */ int ztpmv_(char *, char *, char *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *), ztpsv_(char *, char *, char *, integer *, doublecomplex *
-, doublecomplex *, integer *), xerbla_(
-	    char *, integer *), zhpgst_(integer *, char *, integer *, 
+, doublecomplex *, integer *);
+    void xerbla_(
+	    char *, integer *);
+    int zhpgst_(integer *, char *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *), zpptrf_(
 	    char *, integer *, doublecomplex *, integer *);
 
