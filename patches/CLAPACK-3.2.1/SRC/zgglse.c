--- ../../../CLAPACK-3.2.1/SRC/zgglse.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgglse.c	2020-03-18 14:52:00.262153670 +0100
@@ -37,7 +37,8 @@
 	    integer *), zaxpy_(integer *, doublecomplex *, doublecomplex *, 
 	    integer *, doublecomplex *, integer *), ztrmv_(char *, char *, 
 	    char *, integer *, doublecomplex *, integer *, doublecomplex *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zggrqf_(integer *, integer *, integer *, 
