--- ../../../CLAPACK-3.2.1/SRC/dtzrqf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtzrqf.c	2020-03-18 14:52:00.246152995 +0100
@@ -34,8 +34,8 @@
 	    doublereal *, integer *), dcopy_(integer *, doublereal *, 
 	    integer *, doublereal *, integer *), daxpy_(integer *, doublereal 
 	    *, doublereal *, integer *, doublereal *, integer *), dlarfp_(
-	    integer *, doublereal *, doublereal *, integer *, doublereal *), 
-	    xerbla_(char *, integer *);
+	    integer *, doublereal *, doublereal *, integer *, doublereal *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
