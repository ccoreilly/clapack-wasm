--- ../../../CLAPACK-3.2.1/SRC/zsytri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsytri.c	2020-03-18 14:52:00.266153839 +0100
@@ -45,8 +45,8 @@
     extern /* Subroutine */ int zswap_(integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *), zsymv_(char *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
-	    integer *, doublecomplex *, doublecomplex *, integer *), 
-	    xerbla_(char *, integer *);
+	    integer *, doublecomplex *, doublecomplex *, integer *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
