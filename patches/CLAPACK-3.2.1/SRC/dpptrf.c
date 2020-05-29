--- ../../../CLAPACK-3.2.1/SRC/dpptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpptrf.c	2020-03-18 14:52:00.238152659 +0100
@@ -39,8 +39,8 @@
     extern logical lsame_(char *, char *);
     logical upper;
     extern /* Subroutine */ int dtpsv_(char *, char *, char *, integer *, 
-	    doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
