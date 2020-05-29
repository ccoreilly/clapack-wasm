--- ../../../CLAPACK-3.2.1/SRC/dsygs2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsygs2.c	2020-03-18 14:52:00.242152827 +0100
@@ -40,8 +40,8 @@
     logical upper;
     extern /* Subroutine */ int dtrmv_(char *, char *, char *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *), dtrsv_(char *, char *, char *, integer *, doublereal *, 
-	    integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
