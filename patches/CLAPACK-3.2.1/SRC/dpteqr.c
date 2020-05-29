--- ../../../CLAPACK-3.2.1/SRC/dpteqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpteqr.c	2020-03-18 14:52:00.238152659 +0100
@@ -37,8 +37,9 @@
     integer nru;
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int dlaset_(char *, integer *, integer *, 
-	    doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *), dbdsqr_(char *, integer *, 
+	    doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
+    int dbdsqr_(char *, integer *, 
 	    integer *, integer *, integer *, doublereal *, doublereal *, 
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *);
