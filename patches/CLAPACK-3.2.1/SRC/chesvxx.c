--- ../../../CLAPACK-3.2.1/SRC/chesvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chesvxx.c	2020-03-18 14:52:00.194150804 +0100
@@ -41,7 +41,8 @@
     extern /* Subroutine */ int chetrf_(char *, integer *, complex *, integer 
 	    *, integer *, complex *, integer *, integer *), clacpy_(
 	    char *, integer *, integer *, complex *, integer *, complex *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     real bignum;
     integer infequ;
     extern /* Subroutine */ int chetrs_(char *, integer *, integer *, complex 
