--- ../../../CLAPACK-3.2.1/SRC/zhsein.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhsein.c	2020-03-18 14:52:00.262153670 +0100
@@ -43,7 +43,8 @@
     logical leftv, bothv;
     doublereal hnorm;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlaein_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlaein_(
 	    logical *, logical *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, doublecomplex *, doublecomplex *, integer *, 
 	    doublereal *, doublereal *, doublereal *, integer *);
