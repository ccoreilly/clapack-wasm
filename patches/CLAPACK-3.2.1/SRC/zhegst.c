--- ../../../CLAPACK-3.2.1/SRC/zhegst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhegst.c	2020-03-18 14:52:00.262153670 +0100
@@ -46,7 +46,8 @@
 	    integer *, integer *), zher2k_(char *, char *, integer *, 
 	    integer *, doublecomplex *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *, doublereal *, doublecomplex *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
