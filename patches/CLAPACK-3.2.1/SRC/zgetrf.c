--- ../../../CLAPACK-3.2.1/SRC/zgetrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgetrf.c	2020-03-18 14:52:00.262153670 +0100
@@ -35,7 +35,8 @@
 	     integer *, integer *, doublecomplex *, doublecomplex *, integer *
 , doublecomplex *, integer *), 
 	    zgetf2_(integer *, integer *, doublecomplex *, integer *, integer 
-	    *, integer *), xerbla_(char *, integer *);
+	    *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zlaswp_(integer *, doublecomplex *, integer *, 
