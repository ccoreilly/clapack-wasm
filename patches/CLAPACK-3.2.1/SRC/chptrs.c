--- ../../../CLAPACK-3.2.1/SRC/chptrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chptrs.c	2020-03-18 14:52:00.198150972 +0100
@@ -43,7 +43,8 @@
 	     cswap_(integer *, complex *, integer *, complex *, integer *);
     logical upper;
     extern /* Subroutine */ int clacgv_(integer *, complex *, integer *), 
-	    csscal_(integer *, real *, complex *, integer *), xerbla_(char *, 
+	    csscal_(integer *, real *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
 
 
