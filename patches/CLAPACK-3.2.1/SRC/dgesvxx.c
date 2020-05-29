--- ../../../CLAPACK-3.2.1/SRC/dgesvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgesvxx.c	2020-03-18 14:52:00.226152152 +0100
@@ -44,7 +44,8 @@
     logical nofact;
     extern /* Subroutine */ int dgetrf_(integer *, integer *, doublereal *, 
 	    integer *, integer *, integer *), dlacpy_(char *, integer *, 
-	    integer *, doublereal *, integer *, doublereal *, integer *), xerbla_(char *, integer *);
+	    integer *, doublereal *, integer *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     doublereal bignum;
     integer infequ;
     logical colequ;
