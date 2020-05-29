--- ../../../CLAPACK-3.2.1/SRC/cgehd2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgehd2.c	2020-03-18 14:52:00.186150466 +0100
@@ -32,8 +32,8 @@
     complex alpha;
     extern /* Subroutine */ int clarf_(char *, integer *, integer *, complex *
 , integer *, complex *, complex *, integer *, complex *), 
-	    clarfg_(integer *, complex *, complex *, integer *, complex *), 
-	    xerbla_(char *, integer *);
+	    clarfg_(integer *, complex *, complex *, integer *, complex *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
