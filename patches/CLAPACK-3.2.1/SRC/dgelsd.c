--- ../../../CLAPACK-3.2.1/SRC/dgelsd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgelsd.c	2020-03-18 14:52:00.222151984 +0100
@@ -55,7 +55,8 @@
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
 	    doublereal *, integer *, integer *), dlacpy_(char *, integer *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *), dlaset_(char *, integer *, integer *, doublereal *, 
-	    doublereal *, doublereal *, integer *), xerbla_(char *, 
+	    doublereal *, doublereal *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
