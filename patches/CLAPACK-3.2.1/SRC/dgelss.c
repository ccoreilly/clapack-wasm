--- ../../../CLAPACK-3.2.1/SRC/dgelss.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgelss.c	2020-03-18 14:52:00.222151984 +0100
@@ -65,8 +65,9 @@
 	    doublereal *, doublereal *, integer *, integer *), dlacpy_(char *, 
 	     integer *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *), dlaset_(char *, integer *, integer *, 
-	    doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *), dbdsqr_(char *, integer *, 
+	    doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
+    int dbdsqr_(char *, integer *, 
 	    integer *, integer *, integer *, doublereal *, doublereal *, 
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *), dorgbr_(char *, 
