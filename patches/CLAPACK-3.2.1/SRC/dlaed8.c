--- ../../../CLAPACK-3.2.1/SRC/dlaed8.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlaed8.c	2020-03-18 14:52:00.230152321 +0100
@@ -47,7 +47,8 @@
     extern integer idamax_(integer *, doublereal *, integer *);
     extern /* Subroutine */ int dlamrg_(integer *, integer *, doublereal *, 
 	    integer *, integer *, integer *), dlacpy_(char *, integer *, 
-	    integer *, doublereal *, integer *, doublereal *, integer *), xerbla_(char *, integer *);
+	    integer *, doublereal *, integer *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
