--- ../../../CLAPACK-3.2.1/SRC/cungr2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cungr2.c	2020-03-18 14:52:00.218151815 +0100
@@ -28,7 +28,8 @@
     extern /* Subroutine */ int cscal_(integer *, complex *, complex *, 
 	    integer *), clarf_(char *, integer *, integer *, complex *, 
 	    integer *, complex *, complex *, integer *, complex *), 
-	    clacgv_(integer *, complex *, integer *), xerbla_(char *, integer 
+	    clacgv_(integer *, complex *, integer *);
+    void xerbla_(char *, integer 
 	    *);
 
 
