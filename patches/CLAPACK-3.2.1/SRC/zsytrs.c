--- ../../../CLAPACK-3.2.1/SRC/zsytrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsytrs.c	2020-03-18 14:52:00.266153839 +0100
@@ -44,7 +44,8 @@
     extern /* Subroutine */ int zgeru_(integer *, integer *, doublecomplex *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *), zswap_(integer *, doublecomplex *, 
-	    integer *, doublecomplex *, integer *), xerbla_(char *, integer *);
+	    integer *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
