--- ../../../CLAPACK-3.2.1/SRC/chpsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chpsvx.c	2020-03-18 14:52:00.198150972 +0100
@@ -34,7 +34,9 @@
     logical nofact;
     extern /* Subroutine */ int chpcon_(char *, integer *, complex *, integer 
 	    *, real *, real *, complex *, integer *), clacpy_(char *, 
-	    integer *, integer *, complex *, integer *, complex *, integer *), xerbla_(char *, integer *), chprfs_(char *, 
+	    integer *, integer *, complex *, integer *, complex *, integer *);
+    void xerbla_(char *, integer *);
+    int chprfs_(char *, 
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
 	    integer *, complex *, integer *, real *, real *, complex *, real *
 , integer *), chptrf_(char *, integer *, complex *, 
