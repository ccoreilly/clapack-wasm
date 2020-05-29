--- ../../../CLAPACK-3.2.1/SRC/dsysvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsysvxx.c	2020-03-18 14:52:00.242152827 +0100
@@ -39,8 +39,8 @@
     extern doublereal dlamch_(char *);
     logical nofact;
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     doublereal bignum;
     integer infequ;
     extern /* Subroutine */ int dlaqsy_(char *, integer *, doublereal *, 
