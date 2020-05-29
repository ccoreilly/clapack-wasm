--- ../../../CLAPACK-3.2.1/SRC/dgelsy.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgelsy.c	2020-03-18 14:52:00.222151984 +0100
@@ -54,8 +54,8 @@
     extern /* Subroutine */ int dlascl_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, integer *, integer *, doublereal *, 
 	    integer *, integer *), dlaset_(char *, integer *, integer 
-	    *, doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    *, doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     doublereal bignum;
