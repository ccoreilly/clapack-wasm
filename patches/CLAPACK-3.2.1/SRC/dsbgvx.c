--- ../../../CLAPACK-3.2.1/SRC/dsbgvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsbgvx.c	2020-03-18 14:52:00.238152659 +0100
@@ -50,8 +50,9 @@
     integer indibl;
     logical valeig;
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *), dpbstf_(char *, integer *, 
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
+    int dpbstf_(char *, integer *, 
 	    integer *, doublereal *, integer *, integer *), dsbtrd_(
 	    char *, char *, integer *, integer *, doublereal *, integer *, 
 	    doublereal *, doublereal *, doublereal *, integer *, doublereal *, 
