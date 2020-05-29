--- ../../../CLAPACK-3.2.1/SRC/cptsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cptsvx.c	2020-03-18 14:52:00.214151646 +0100
@@ -35,8 +35,10 @@
 	    real *, complex *);
     logical nofact;
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
-	    integer *), cptcon_(integer *, real *, complex *, real *, 
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, 
+	    integer *);
+    int cptcon_(integer *, real *, complex *, real *, 
 	    real *, real *, integer *), cptrfs_(char *, integer *, integer *, 
 	    real *, complex *, real *, complex *, complex *, integer *, 
 	    complex *, integer *, real *, real *, complex *, real *, integer *
