--- ../../../CLAPACK-3.2.1/SRC/ctzrqf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctzrqf.c	2020-03-18 14:52:00.218151815 +0100
@@ -39,7 +39,8 @@
 	    complex *, integer *), caxpy_(integer *, complex *, complex *, 
 	    integer *, complex *, integer *), clacgv_(integer *, complex *, 
 	    integer *), clarfp_(integer *, complex *, complex *, integer *, 
-	    complex *), xerbla_(char *, integer *);
+	    complex *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
