--- ../../../CLAPACK-3.2.1/SRC/zhpgvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhpgvd.c	2020-03-18 14:52:00.262153670 +0100
@@ -35,7 +35,8 @@
     logical upper, wantz;
     extern /* Subroutine */ int ztpmv_(char *, char *, char *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *), ztpsv_(char *, char *, char *, integer *, doublecomplex *
-, doublecomplex *, integer *), xerbla_(
+, doublecomplex *, integer *);
+    void xerbla_(
 	    char *, integer *);
     integer liwmin;
     extern /* Subroutine */ int zhpevd_(char *, char *, integer *, 
