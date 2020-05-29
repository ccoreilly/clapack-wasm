--- ../../../CLAPACK-3.2.1/SRC/dlasd3.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasd3.c	2020-03-18 14:52:00.234152490 +0100
@@ -53,8 +53,8 @@
 	    doublereal *, integer *), dlascl_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, integer *, integer *, doublereal *, 
 	    integer *, integer *), dlacpy_(char *, integer *, integer 
-	    *, doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    *, doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK auxiliary routine (version 3.2) -- */
