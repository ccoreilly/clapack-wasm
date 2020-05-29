--- ../../../CLAPACK-3.2.1/SRC/zggglm.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zggglm.c	2020-03-18 14:52:00.262153670 +0100
@@ -34,7 +34,8 @@
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *, doublecomplex *, doublecomplex *, integer *), 
 	    zcopy_(integer *, doublecomplex *, integer *, doublecomplex *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zggqrf_(integer *, integer *, integer *, 
