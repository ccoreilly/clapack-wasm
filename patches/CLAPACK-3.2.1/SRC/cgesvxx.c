--- ../../../CLAPACK-3.2.1/SRC/cgesvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgesvxx.c	2020-03-18 14:52:00.190150635 +0100
@@ -43,8 +43,8 @@
     logical nofact;
     extern /* Subroutine */ int cgetrf_(integer *, integer *, complex *, 
 	    integer *, integer *, integer *), clacpy_(char *, integer *, 
-	    integer *, complex *, integer *, complex *, integer *), 
-	    xerbla_(char *, integer *);
+	    integer *, complex *, integer *, complex *, integer *);
+	void xerbla_(char *, integer *);
     real bignum;
     integer infequ;
     logical colequ;
