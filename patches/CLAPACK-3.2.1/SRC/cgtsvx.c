--- ../../../CLAPACK-3.2.1/SRC/cgtsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgtsvx.c	2020-03-18 14:52:00.194150804 +0100
@@ -38,8 +38,10 @@
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
 	    *, integer *, complex *, integer *), cgtcon_(char *, 
 	    integer *, complex *, complex *, complex *, complex *, integer *, 
-	    real *, real *, complex *, integer *), xerbla_(char *, 
-	    integer *), cgtrfs_(char *, integer *, integer *, complex 
+	    real *, real *, complex *, integer *);
+    void xerbla_(char *, 
+	    integer *);
+    int cgtrfs_(char *, integer *, integer *, complex 
 	    *, complex *, complex *, complex *, complex *, complex *, complex 
 	    *, integer *, complex *, integer *, complex *, integer *, real *, 
 	    real *, complex *, real *, integer *), cgttrf_(integer *, 
