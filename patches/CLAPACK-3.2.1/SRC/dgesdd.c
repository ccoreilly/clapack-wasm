--- ../../../CLAPACK-3.2.1/SRC/dgesdd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgesdd.c	2020-03-18 14:52:00.222151984 +0100
@@ -63,8 +63,9 @@
 	    doublereal *, doublereal *, integer *, integer *), dlacpy_(char *, 
 	     integer *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *), dlaset_(char *, integer *, integer *, 
-	    doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *), dorgbr_(char *, integer *, 
+	    doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
+    int dorgbr_(char *, integer *, 
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
 	    doublereal *, integer *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
