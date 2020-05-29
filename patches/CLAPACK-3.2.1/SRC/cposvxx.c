--- ../../../CLAPACK-3.2.1/SRC/cposvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cposvxx.c	2020-03-18 14:52:00.214151646 +0100
@@ -39,7 +39,8 @@
     extern doublereal slamch_(char *);
     logical nofact;
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     real bignum;
     integer infequ;
