--- ../../../CLAPACK-3.2.1/SRC/cppsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cppsvx.c	2020-03-18 14:52:00.214151646 +0100
@@ -40,7 +40,8 @@
 	    real *, real *, char *);
     logical nofact;
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     real bignum;
     extern /* Subroutine */ int cppcon_(char *, integer *, complex *, real *, 
