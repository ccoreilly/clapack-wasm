--- ../../../CLAPACK-3.2.1/SRC/cgbsvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgbsvxx.c	2020-03-18 14:52:00.186150466 +0100
@@ -44,8 +44,8 @@
 	    integer *, complex *, integer *, integer *, integer *);
     logical nofact;
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
-	    integer *);
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, integer *);
     real bignum;
     extern /* Subroutine */ int cgbtrs_(char *, integer *, integer *, integer 
 	    *, integer *, complex *, integer *, integer *, complex *, integer 
