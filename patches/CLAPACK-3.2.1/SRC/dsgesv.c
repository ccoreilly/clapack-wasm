--- ../../../CLAPACK-3.2.1/SRC/dsgesv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsgesv.c	2020-03-18 14:52:00.242152827 +0100
@@ -51,8 +51,9 @@
 	    integer *, doublereal *, integer *, doublereal *);
     extern integer idamax_(integer *, doublereal *, integer *);
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *), dgetrf_(integer *, integer *, 
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
+    int dgetrf_(integer *, integer *, 
 	    doublereal *, integer *, integer *, integer *), dgetrs_(char *, 
 	    integer *, integer *, doublereal *, integer *, integer *, 
 	    doublereal *, integer *, integer *), sgetrf_(integer *, 
