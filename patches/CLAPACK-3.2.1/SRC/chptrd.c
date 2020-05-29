--- ../../../CLAPACK-3.2.1/SRC/chptrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chptrd.c	2020-03-18 14:52:00.198150972 +0100
@@ -41,7 +41,8 @@
 	    integer *);
     logical upper;
     extern /* Subroutine */ int clarfg_(integer *, complex *, complex *, 
-	    integer *, complex *), xerbla_(char *, integer *);
+	    integer *, complex *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
