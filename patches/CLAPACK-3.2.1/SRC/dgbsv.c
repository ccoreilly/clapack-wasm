--- ../../../CLAPACK-3.2.1/SRC/dgbsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgbsv.c	2020-03-18 14:52:00.222151984 +0100
@@ -22,8 +22,9 @@
 
     /* Local variables */
     extern /* Subroutine */ int dgbtrf_(integer *, integer *, integer *, 
-	    integer *, doublereal *, integer *, integer *, integer *), 
-	    xerbla_(char *, integer *), dgbtrs_(char *, integer *, 
+	    integer *, doublereal *, integer *, integer *, integer *);
+	void xerbla_(char *, integer *);
+    int dgbtrs_(char *, integer *, 
 	    integer *, integer *, integer *, doublereal *, integer *, integer 
 	    *, doublereal *, integer *, integer *);
 
