--- ../../../CLAPACK-3.2.1/SRC/zhetrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhetrd.c	2020-03-18 14:52:00.262153670 +0100
@@ -37,7 +37,8 @@
     extern /* Subroutine */ int zhetd2_(char *, integer *, doublecomplex *, 
 	    integer *, doublereal *, doublereal *, doublecomplex *, integer *), zher2k_(char *, char *, integer *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
-	    integer *, doublereal *, doublecomplex *, integer *), xerbla_(char *, integer *);
+	    integer *, doublereal *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zlatrd_(char *, integer *, integer *, 
