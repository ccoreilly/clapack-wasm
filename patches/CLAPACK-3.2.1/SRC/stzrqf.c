--- ../../../CLAPACK-3.2.1/SRC/stzrqf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stzrqf.c	2020-03-18 14:52:00.258153501 +0100
@@ -32,8 +32,9 @@
 	    integer *, integer *, real *, real *, integer *, real *, integer *
 , real *, real *, integer *), scopy_(integer *, real *, 
 	    integer *, real *, integer *), saxpy_(integer *, real *, real *, 
-	    integer *, real *, integer *), xerbla_(char *, integer *),
-	     slarfp_(integer *, real *, real *, integer *, real *);
+	    integer *, real *, integer *);
+    void xerbla_(char *, integer *);
+    int slarfp_(integer *, real *, real *, integer *, real *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
