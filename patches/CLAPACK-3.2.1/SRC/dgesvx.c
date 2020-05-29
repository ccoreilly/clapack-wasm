--- ../../../CLAPACK-3.2.1/SRC/dgesvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgesvx.c	2020-03-18 14:52:00.226152152 +0100
@@ -49,7 +49,8 @@
 	    doublereal *, doublereal *, integer *, integer *), 
 	    dgetrf_(integer *, integer *, doublereal *, integer *, integer *, 
 	    integer *), dlacpy_(char *, integer *, integer *, doublereal *, 
-	    integer *, doublereal *, integer *), xerbla_(char *, 
+	    integer *, doublereal *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     doublereal bignum;
     extern doublereal dlantr_(char *, char *, char *, integer *, integer *, 
