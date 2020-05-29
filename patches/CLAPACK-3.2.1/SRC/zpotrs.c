--- ../../../CLAPACK-3.2.1/SRC/zpotrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zpotrs.c	2020-03-18 14:52:00.266153839 +0100
@@ -29,8 +29,8 @@
     logical upper;
     extern /* Subroutine */ int ztrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, doublecomplex *, doublecomplex *, integer *, 
-	     doublecomplex *, integer *), 
-	    xerbla_(char *, integer *);
+	     doublecomplex *, integer *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
