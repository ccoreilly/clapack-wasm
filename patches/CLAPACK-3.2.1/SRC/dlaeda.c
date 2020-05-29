--- ../../../CLAPACK-3.2.1/SRC/dlaeda.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlaeda.c	2020-03-18 14:52:00.230152321 +0100
@@ -40,7 +40,8 @@
     extern /* Subroutine */ int dgemv_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
 	    doublereal *, doublereal *, integer *), dcopy_(integer *, 
-	    doublereal *, integer *, doublereal *, integer *), xerbla_(char *, 
+	    doublereal *, integer *, doublereal *, integer *);
+    void xerbla_(char *, 
 	     integer *);
 
 
