--- ../../../CLAPACK-3.2.1/SRC/ssytrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssytrs.c	2020-03-18 14:52:00.258153501 +0100
@@ -41,7 +41,8 @@
 	    real *, integer *, real *, real *, integer *);
     logical upper;
     extern /* Subroutine */ int sswap_(integer *, real *, integer *, real *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
