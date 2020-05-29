--- ../../../CLAPACK-3.2.1/SRC/zhetrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhetrf.c	2020-03-18 14:52:00.262153670 +0100
@@ -34,7 +34,8 @@
     extern /* Subroutine */ int zhetf2_(char *, integer *, doublecomplex *, 
 	    integer *, integer *, integer *), zlahef_(char *, integer 
 	    *, integer *, integer *, doublecomplex *, integer *, integer *, 
-	    doublecomplex *, integer *, integer *), xerbla_(char *, 
+	    doublecomplex *, integer *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
